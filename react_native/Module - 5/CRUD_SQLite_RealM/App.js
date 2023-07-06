import React from 'react';

import {StyleSheet} from 'react-native';

import {NavigationContainer} from '@react-navigation/native';

import {createStackNavigator} from '@react-navigation/stack';
import HomeScreen from './src/screen/Home';
import SQLiteScreen from './src/screen/SQLite/SQLite';
import RealMScreen from './src/screen/RealM/RealM';
import AddUser from './src/screen/SQLite/addUser';
import UpdateUser from './src/screen/SQLite/UpdateUser';

const Stack = createStackNavigator();
const App = () => {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen name="Home" component={HomeScreen} />
        <Stack.Screen name="SQLite" component={SQLiteScreen} />
        <Stack.Screen name="AddUser" component={AddUser} />
        <Stack.Screen name="UpdateUser" component={UpdateUser} />

        <Stack.Screen name="Realm" component={RealMScreen} />
      </Stack.Navigator>
    </NavigationContainer>
  );
};

const styles = StyleSheet.create({});

export default App;
