import React from 'react';
import {Text, StyleSheet, View} from 'react-native';
import {TouchableOpacity} from 'react-native-gesture-handler';

const Task = ({navigation}) => {
  return (
    <View>
      <View style={styles.hedar}>
        <Text style={{fontSize: 20, fontWeight: 'bold'}}>Task</Text>
        <TouchableOpacity
          style={styles.hedarBtn}
          onPress={() => navigation.navigate('addTask')}>
          <Text style={{fontSize: 30, fontWeight: '900'}}>+</Text>
        </TouchableOpacity>
      </View>
    </View>
  );
};

export default Task;
const styles = StyleSheet.create({
  hedar: {
    backgroundColor: '#f2c94c',
    height: 50,
    flexDirection: 'row',
    justifyContent: 'space-between',
    alignItems: 'center',
    paddingLeft: 20,
    paddingRight: 20,
  },
  hedarBtn: {
    backgroundColor: '#fff',
    padding: 4,
    borderRadius: 20,
  },
});
