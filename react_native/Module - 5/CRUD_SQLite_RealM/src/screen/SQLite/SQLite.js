import React, {useEffect, useState} from 'react';

import {
  StyleSheet,
  Text,
  Image,
  FlatList,
  TouchableOpacity,
  View,
} from 'react-native';
import {openDatabase} from 'react-native-sqlite-storage';
import {useIsFocused} from '@react-navigation/native';

let db = openDatabase({name: 'UserDatabase.db'});
const SQLiteScreen = ({navigation}) => {
  const [userList, setUserList] = useState([]);

  useEffect(() => {
    getData();
  }, []);

  const getData = () => {
    db.transaction(txn => {
      txn.executeSql('SELECT * FROM table_user', [], (tx, results) => {
        var temp = [];
        for (let i = 0; i < results.rows.length; ++i) {
          temp.push(results.rows.item(i));
        }
        setUserList(temp);
      });
    });
  };
  let deleteUser = id => {
    db.transaction(txn => {
      txn.executeSql(
        'DELETE FROM  table_user where user_id=?',
        [id],
        (tx, results) => {
          console.log('Results', results.rowsAffected);

          getData();
        },
      );
    });
  };
  return (
    <View>
      <View style={[styles.btnBody, {backgroundColor: 'green'}]}>
        <TouchableOpacity onPress={() => navigation.navigate('AddUser')}>
          <Text style={{fontSize: 20, color: '#fff'}}>Add</Text>
        </TouchableOpacity>
      </View>
      <FlatList
        data={userList}
        renderItem={({item, index}) => {
          return (
            <TouchableOpacity style={styles.userItem}>
              <Text style={styles.itemText}>{'Name: ' + item.name}</Text>
              <Text style={styles.itemText}>{'Email: ' + item.email}</Text>
              <Text style={styles.itemText}>{'Address: ' + item.address}</Text>
              <View style={styles.belowView}>
                <TouchableOpacity
                  onPress={() => {
                    navigation.navigate('UpdateUser', {
                      data: {
                        name: item.name,
                        email: item.email,
                        address: item.address,
                        id: item.user_id,
                      },
                    });
                  }}>
                  <Image
                    source={require('../../images/edit.png')}
                    style={styles.icons}
                  />
                </TouchableOpacity>
                <TouchableOpacity
                  onPress={() => {
                    deleteUser(item.user_id);
                  }}>
                  <Image
                    source={require('../../images/delete.png')}
                    style={styles.icons}
                  />
                </TouchableOpacity>
              </View>
            </TouchableOpacity>
          );
        }}
      />
    </View>
  );
};

const styles = StyleSheet.create({
  btnBody: {
    justifyContent: 'center',
    alignItems: 'center',
    padding: 10,
    margin: 10,
    borderRadius: 10,
    width: 150,
  },
  container: {
    flex: 1,
  },

  userItem: {
    width: '100%',
    backgroundColor: '#fff',
    padding: 10,
  },
  itemText: {
    fontSize: 20,
    fontWeight: '600',
    color: '#000',
  },
  belowView: {
    flexDirection: 'row',
    width: '100%',
    alignItems: 'center',
    justifyContent: 'space-evenly',
    marginTop: 20,
    backgroundColor: '#f2f2f2',
    borderRadius: 10,
    height: 50,
  },
  icons: {
    width: 24,
    height: 24,
  },
});

export default SQLiteScreen;
