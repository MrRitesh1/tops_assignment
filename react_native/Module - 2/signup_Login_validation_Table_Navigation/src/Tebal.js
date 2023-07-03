import React, {useState} from 'react';
import {View, Text} from 'react-native';
import {Table, Row, Rows} from 'react-native-table-component';

const Tables = () => {
  const header = ['ID', 'DATE', 'NAME'];
  const data = [
    ['1', '01/07/2023', 'Jay'],
    ['2', '05/07/2023', 'Ritesh'],
    ['3', '11/08/2023', 'Jiganesh'],
    ['4', '23/08/2023', 'Chirag'],
  ];

  return (
    <View style={{marginTop: 200, margin: 10}}>
      <Text style={{fontSize: 18}}>
        Table In React Native and Insert data in Table
      </Text>
      <Table borderStyle={{borderWidth: 2, borderColor: '#c8e1ff'}}>
        <Row data={header} />
        <Rows data={data} />
      </Table>
    </View>
  );
};

export default Tables;
