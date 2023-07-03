import React from 'react';
import {StyleSheet, Text, Button, View} from 'react-native';

const HomeScreen = ({navigation}) => {
  return (
    <View>
      <Text>Home Screen</Text>

      <Button title={'Tebal'} onPress={() => navigation.navigate('Tables')} />
    </View>
  );
};

const styles = StyleSheet.create({});

export default HomeScreen;
