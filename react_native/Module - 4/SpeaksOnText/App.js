import React, {useState} from 'react';

import {
  Image,
  ScrollView,
  StyleSheet,
  Text,
  TouchableOpacity,
  View,
} from 'react-native';
import Voice from '@react-native-voice/voice';
import Icon from 'react-native-vector-icons/FontAwesome';

const App = () => {
  const [result, setResult] = useState('');
  const [error, setErro] = useState('');
  const [isRecoding, setIsRecoding] = useState(false);

  Voice.onSpeechStart = () => setIsRecoding(true);
  Voice.onSpeechEnd = () => setIsRecoding(false);
  Voice.onSpeechError = err => setErro(err.error);
  Voice.onSpeechResults = result => setResult(result.value[0]);

  const recordingStart = async () => {
    try {
      await Voice.start('en-US');
    } catch (err) {
      setErro(err);
    }
  };
  const recordingStop = async () => {
    try {
      await Voice.stop();
    } catch (error) {
      setErro(error);
    }
  };

  return (
    <View style={styles.body}>
      <View style={[styles.main, styles.shado]}>
        <Text style={styles.hedarText}>Speaks On Text</Text>
        <View style={styles.texBody}>
          <ScrollView>
            <Text style={{fontSize: 18}}>{result}</Text>
            <Text style={{fontSize: 18}}>{error}</Text>
          </ScrollView>
        </View>
        <View style={styles.buttonBody}>
          <TouchableOpacity
            style={styles.button}
            onPress={isRecoding ? recordingStop : recordingStart}>
            {isRecoding ? (
              <Image
                style={styles.mic}
                source={require('../SpeaksOnText/image/mic.png')}
              />
            ) : (
              <Image
                style={[styles.mic]}
                source={require('../SpeaksOnText/image/voice.png')}
              />
            )}
            {/* <Text>{isRecoding ? 'Stop' : 'Start'}</Text> */}
          </TouchableOpacity>
          {/* <TouchableOpacity style={styles.button}>
            <Image
              style={[styles.mic, {marginLeft: 20}]}
              source={require('../SpeaksOnText/image/voice.png')}
            />
          </TouchableOpacity> */}
        </View>
      </View>
      {/* <Icon.Button name="facebook" size={60} backgroundColor="#3b5998">
        <Text style={{fontFamily: 'Arial', fontSize: 15}}>
          Login with Facebook
        </Text>
      </Icon.Button>
      <Icon name="rocket" size={60} color="#900" /> */}
    </View>
  );
};

const styles = StyleSheet.create({
  shado: {
    shadowColor: '#2B1B17',
    elevation: 20,
  },
  body: {
    flex: 1,
    justifyContent: 'center',
  },
  main: {
    alignItems: 'center',
    margin: 20,
    backgroundColor: '#b3e6ff',
    padding: 20,
    flex: 0.7,
    borderRadius: 10,
  },
  hedarText: {
    fontSize: 20,
    // color: 'red',
    fontSize: 25,
    fontWeight: '900',
    textShadowColor: 'rgba(50, 100, 4, 1.75)',
    textShadowOffset: {width: -1, height: 5},
    textShadowRadius: 10,
  },
  texBody: {
    textAlign: 'justify',
    borderWidth: 1,
    width: '90%',
    height: '80%',
    marginTop: 10,
    padding: 5,
    borderRadius: 10,
  },
  buttonBody: {
    // flex: 1,
    justifyContent: 'flex-end',
    flexDirection: 'row',
    marginTop: 10,
  },
  button: {},
  mic: {width: 50, height: 50},
});

export default App;
