import React from 'react';

import {StyleSheet, Text, TouchableOpacity, View} from 'react-native';

const HomeScreen = ({navigation}) => {
  return (
    <View
      style={{
        flexDirection: 'row',
        justifyContent: 'center',
        alignItems: 'center',
        flex: 1,
        backgroundColor: '#ccffff',
      }}>
      <View style={[styles.btnBody, {backgroundColor: 'blue'}]}>
        <TouchableOpacity onPress={() => navigation.navigate('SQLite')}>
          <Text style={{fontSize: 20, color: '#fff'}}>SQLite</Text>
        </TouchableOpacity>
      </View>
      <View style={[styles.btnBody, {backgroundColor: 'green'}]}>
        <TouchableOpacity onPress={() => navigation.navigate('Realm')}>
          <Text style={{fontSize: 20, color: '#fff'}}>RealM</Text>
        </TouchableOpacity>
      </View>
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
});

export default HomeScreen;
