import {
  View,
  Text,
  StyleSheet,
  TextInput,
  TouchableOpacity,
  Alert,
} from 'react-native';
import React, {useEffect, useState} from 'react';
import {openDatabase} from 'react-native-sqlite-storage';
import {useRoute} from '@react-navigation/native';
let db = openDatabase({name: 'UserDatabase.db'});
const UpdateUser = ({navigation}) => {
  const route = useRoute();
  console.log(route.params.data);
  useEffect(() => {
    setName(route.params.data.name);
    setEmail(route.params.data.email);
    setAddress(route.params.data.address);
  }, []);
  const [name, setName] = useState('');
  const [email, setEmail] = useState(route.params.data.email);
  const [address, setAddress] = useState(route.params.data.address);
  const updateUser = () => {
    db.transaction(tx => {
      tx.executeSql(
        'UPDATE table_user set name=?, email=? , address=? where user_id=?',
        [name, email, address, route.params.data.id],
        (tx, results) => {
          console.log('Results', results.rowsAffected);

          navigation.navigate('SQLite');
        },
      );
    });
  };

  return (
    <View style={styles.container}>
      <TextInput
        placeholder="Enter User Name"
        style={styles.input}
        value={name}
        onChangeText={txt => setName(txt)}
      />
      <TextInput
        placeholder="Enter User Email"
        value={email}
        onChangeText={txt => setEmail(txt)}
        style={[styles.input, {marginTop: 20}]}
      />
      <TextInput
        placeholder="Enter User Address"
        value={address}
        onChangeText={txt => setAddress(txt)}
        style={[styles.input, {marginTop: 20}]}
      />
      <TouchableOpacity
        style={styles.addBtn}
        onPress={() => {
          updateUser();
        }}>
        <Text style={styles.btnText}>Save User</Text>
      </TouchableOpacity>
    </View>
  );
};

export default UpdateUser;
const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  input: {
    width: '80%',
    height: 50,
    borderRadius: 10,
    borderWidth: 0.3,
    alignSelf: 'center',
    paddingLeft: 20,
    marginTop: 100,
  },
  addBtn: {
    backgroundColor: 'purple',
    width: '80%',
    height: 50,
    borderRadius: 10,
    justifyContent: 'center',
    alignItems: 'center',
    marginTop: 30,
    alignSelf: 'center',
  },
  btnText: {
    color: '#fff',
    fontSize: 18,
  },
});
