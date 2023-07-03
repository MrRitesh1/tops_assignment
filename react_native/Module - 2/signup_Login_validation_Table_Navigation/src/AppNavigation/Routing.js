import React from 'react';
import {StyleSheet} from 'react-native';
import {NavigationContainer} from '@react-navigation/native';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import {createStackNavigator} from '@react-navigation/stack';
import Login from '../Login';
import SignUp from '../SingUp';
import HomeScreen from '../HomeScreen';
import SettingsScreen from '../SettingsScreen';
import Tables from '../Tebal';

const Stack = createStackNavigator();

const Routing = () => {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen
          name="Login"
          component={Login}
          options={{headerShown: false}}
        />
        <Stack.Screen
          name="SingUp"
          component={SignUp}
          options={{headerShown: false}}
        />
        <Stack.Screen name="Home" component={HomeScreen} />
        <Stack.Screen name="Tables" component={Tables} />
      </Stack.Navigator>
    </NavigationContainer>
  );
};

const styles = StyleSheet.create({});

const BottomTab = () => {
  const Tab = createBottomTabNavigator();
  <Tab.Navigator>
    <Tab.Screen name="Home" component={HomeScreen} />
    <Tab.Screen name="Settings" component={SettingsScreen} />
  </Tab.Navigator>;
};

export default Routing;
