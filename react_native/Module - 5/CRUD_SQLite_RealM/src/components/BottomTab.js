import React from 'react';

import {StyleSheet} from 'react-native';

import {NavigationContainer} from '@react-navigation/native';

import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import SQLiteScreen from '../screen/SQLite/SQLite';
import RealMScreen from '../screen/RealM/RealM';

const Tab = createBottomTabNavigator();

const BottomTab = () => {
  return (
    <NavigationContainer>
      <Tab.Navigator>
        <Tab.Screen name="SQLite" component={SQLiteScreen} />
        <Tab.Screen name="Realm" component={RealMScreen} />
      </Tab.Navigator>
    </NavigationContainer>
  );
};

const styles = StyleSheet.create({});

export default BottomTab;
