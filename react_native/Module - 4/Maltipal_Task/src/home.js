import React, {useEffect, useState} from 'react';
import {Button, TextInput, StyleSheet, Text, View} from 'react-native';
import AsyncStorage from '@react-native-async-storage/async-storage';
import DatePickers from './components/datePicker';
import CarouselBody from './components/carousel';
import AddFile from './components/addFile';
import {TouchableOpacity} from 'react-native-gesture-handler';
const HomeScreen = ({navigation}) => {
  const [data, setData] = useState('');
  const getData = async () => {
    try {
      const respos = await AsyncStorage.getItem('userData');

      setData(JSON.parse(respos));
    } catch (error) {
      console.log(error);
    }
  };

  useEffect(() => {
    getData();
  }, []);
  return (
    <View>
      <View style={{flexDirection: 'row'}}>
        {/* <DatePickers /> */}
        <AddFile />
      </View>

      <CarouselBody />
      {/* <View
        style={{
          backgroundColor: '#1a66ff',
          marginRight: 10,
          width: 100,
          justifyContent: 'center',
          alignItems: 'center',
          padding: 5,
          borderRadius: 10,
          marginBottom: 30,
        }}>
        <TouchableOpacity onPress={() => navigation.navigate('task')}>
          <Text style={{color: '#fff'}}>MyTask</Text>
        </TouchableOpacity>
      </View> */}
      <Text style={styles.text}>name </Text>
      <TextInput value={data.name} style={styles.textImput} />
      <Text style={styles.text}>passwerd </Text>
      <TextInput value={data.passwerd} style={styles.textImput} />
    </View>
  );
};

const styles = StyleSheet.create({});

export default HomeScreen;
