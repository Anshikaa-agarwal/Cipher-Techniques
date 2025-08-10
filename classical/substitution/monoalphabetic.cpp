/*

Each letter of the plaintext is replaced by another letter consistently throughout the entire message.
Example,
Plain:  ABCDEFGHIJKLMNOPQRSTUVWXYZ
Cipher: QWERTYUIOPASDFGHJKLZXCVBNM

So,
P="apple"
C="qhhst"

*/

#include<iostream>
#include<string>
using namespace std;

string mono_encryption(string p, string key) {
    string c = "";

    for(int i=0; i<p.length(); i++) {
        if(islower(p[i])) {
            c.push_back(tolower(key[p[i]-'a']));
        }
        else {
            c.push_back(key[p[i]-'A']);
        }
    }

    return c;
}

string mono_decryption(string c, string k) {
    string p = "";
    for(char a: c) {
        size_t index = k.find(a);
        if(index != string::npos) {
            p.push_back('A' + index);
        }
    }

    return p;
}

int main() {
    string key = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string plain = "APPLE";
    string cipher = mono_encryption(plain, key);

    cout << cipher << endl;
    cout << mono_decryption(cipher, key);

}