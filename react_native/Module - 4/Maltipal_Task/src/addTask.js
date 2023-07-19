import React from 'react';
import {Text, View, StyleSheet, TextInput} from 'react-native';
import {TouchableOpacity} from 'react-native-gesture-handler';

const AddTask = () => {
  return (
    <View>
      <View style={styles.hedar}>
        <Text style={{fontSize: 20, fontWeight: 'bold'}}>AddTask</Text>
      </View>
      <View style={styles.contenBody}>
        <TextInput style={styles.textInput} placeholder="Name" />
        <TextInput style={styles.textInput} placeholder="Email" />
        <TextInput style={styles.textInput} placeholder="Mobile Numbar" />
        <View>
          <TouchableOpacity style={styles.sevaBtn}>
            <Text
              style={{textAlign: 'center', fontSize: 20, fontWeight: '900'}}>
              Seva
            </Text>
          </TouchableOpacity>
        </View>
      </View>
    </View>
  );
};

export default AddTask;
const styles = StyleSheet.create({
  shado: {
    shadowColor: '#2B1B17',
    elevation: 10,
  },
  hedar: {
    backgroundColor: '#f2c94c',
    height: 50,

    justifyContent: 'center',
    alignItems: 'center',
    paddingLeft: 20,
    paddingRight: 20,
  },
  contenBody: {
    flexGrow: 1,
    backgroundColor: '#fff',
    justifyContent: 'center',
    // padding: 10,
    margin: 10,
    shadowColor: '#2B1B17',
    elevation: 10,
    borderRadius: 10,
  },
  textInput: {
    borderWidth: 1,
    borderRadius: 10,
    fontSize: 18,
    margin: 10,
  },
  sevaBtn: {
    padding: 10,
    backgroundColor: '#f2c94c',
    borderBottomLeftRadius: 10,
    borderBottomRightRadius: 10,
  },
});
