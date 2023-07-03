import React, {useState} from 'react';
import {
  StyleSheet,
  Image,
  ScrollView,
  Text,
  TextInput,
  View,
  TouchableOpacity,
} from 'react-native';

const SignUp = ({navigation}) => {
  const [email, setEmail] = useState('');
  const [password, setpassword] = useState('');
  const [name, setName] = useState('');
  const [mobile, setMobile] = useState('');

  const [error, setError] = useState(false);

  const Sing_Up = () => {
    if (name || mobile || email || password) {
      navigation.navigate('Home');
    } else {
      setError(true);
    }
  };

  return (
    <View style={styles.man}>
      <Image
        source={require('../../../Module - 2/signup_Login_validation_Table_Navigation/src/assets/image/signup.jpg')}
        style={{
          width: 250,
          height: 250,
          marginLeft: 50,
          marginBottom: 5,
        }}
      />
      <ScrollView
        style={[
          styles.shado,
          {backgroundColor: '#fff', borderRadius: 20, marginBottom: 20},
        ]}>
        <View style={styles.contenBody}>
          <Text style={{fontSize: 25, fontWeight: '900', marginBottom: 20}}>
            Sign-Up
          </Text>

          <View style={styles.inputContnenar}>
            <Text style={{fontSize: 18, fontWeight: '700', marginTop: 2}}>
              Name
            </Text>
            <TextInput
              style={styles.inputText}
              placeholder="name"
              value={name}
              onChangeText={value => setName(value)}
            />
            {error && !name && (
              <Text style={styles.error}>Enter valid name</Text>
            )}
          </View>
          <View style={styles.inputContnenar}>
            <Text style={{fontSize: 18, fontWeight: '700', marginTop: 2}}>
              Mobile
            </Text>
            <TextInput
              style={styles.inputText}
              placeholder="mobile"
              value={mobile}
              onChangeText={value => setMobile(value)}
            />
            {error && !mobile && (
              <Text style={styles.error}>Enter valid mobile</Text>
            )}
          </View>

          <View style={styles.inputContnenar}>
            <Text style={{fontSize: 18, fontWeight: '700', marginTop: 2}}>
              Email
            </Text>
            <TextInput
              style={styles.inputText}
              placeholder="Email ID"
              value={email}
              onChangeText={value => setEmail(value)}
            />
            {error && !email && (
              <Text style={styles.error}>Enter valid email</Text>
            )}
          </View>

          <View style={styles.inputContnenar}>
            <Text style={{fontSize: 18, fontWeight: '700', marginTop: 2}}>
              Password
            </Text>
            <TextInput
              style={styles.inputText}
              secureTextEntry={true}
              placeholder="password"
              value={password}
              onChangeText={value => setpassword(value)}
            />
            {error && !password && (
              <Text style={styles.error}>Enter valid password</Text>
            )}
          </View>

          <View style={{alignItems: 'flex-end'}}>
            <TouchableOpacity onPress={() => navigation.navigate('Login')}>
              <Text style={{color: 'green', fontWeight: '800'}}>
                already account login
              </Text>
            </TouchableOpacity>
          </View>
          <View style={styles.buttonBody}>
            <TouchableOpacity style={styles.button} onPress={Sing_Up}>
              <Text style={{fontSize: 20, fontWeight: '900'}}>Sign-Up</Text>
            </TouchableOpacity>
          </View>
        </View>
      </ScrollView>
    </View>
  );
};

export default SignUp;
const styles = StyleSheet.create({
  man: {
    flex: 1,
    // margin: 10,
    padding: 10,
    backgroundColor: '#e6e6e6',
    // backgroundColor: '#DCB4F3',
  },

  contenBody: {
    flex: 1,
    // backgroundColor: '#DCB4F3',
    padding: 20,
    // paddingTop: 30,
    borderRadius: 20,
    justifyContent: 'center',
  },
  inputContnenar: {
    backgroundColor: '#fff',
    height: 80,
    marginBottom: 10,
    paddingLeft: 10,
    paddingRight: 10,
    borderRadius: 10,
  },
  inputText: {
    height: 40,
    borderWidth: 1,
    borderColor: '#e6e6e6',
    backgroundColor: '#fff',
    borderRadius: 10,
    fontSize: 17,
    paddingLeft: 10,
  },
  buttonBody: {
    marginTop: 20,
    alignItems: 'center',
  },
  button: {
    backgroundColor: '#ff8080',
    justifyContent: 'center',
    alignItems: 'center',
    height: 40,
    width: 150,
    borderRadius: 10,
  },
  textBody: {
    alignItems: 'center',
    marginTop: 30,
  },
  singUpBody: {
    justifyContent: 'center',
    marginLeft: 60,
    marginRight: 60,
    borderRadius: 40,
    marginTop: 10,
    alignItems: 'center',
    flexDirection: 'row',
    backgroundColor: '#fff',
  },
  singUpImage: {
    height: 50,
    width: 50,
    borderColor: '#000',
  },
  error: {
    color: 'red',
  },
});
