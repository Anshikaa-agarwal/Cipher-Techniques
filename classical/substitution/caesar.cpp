/*
Encryption: C = (P+k) mod 26
Decryption: P = (C-k) mod 26
(For Caesar cipher, we use k=3)

Example,
    P='apple'
    C='dssoh'
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

string caeser_encryption(string p, int k) {
    string c="";
    for(int i=0; i<p.length(); i++) {
        char a = 'a'+(p[i]-'a'+k)%26;
        c.push_back(a);
    }

    return c;
}

string caesar_decryption(string c, int k) {
    string p = "";

    for(int i=0; i<c.length(); i++) {
        char a = 'a' + (c[i]-'a'-k)%26;
        p.push_back(a);
    }

    return p;
}
int main() {
    string p = "apple";
    string c = caeser_encryption(p, 3);

    cout << c;

    cout << endl << caesar_decryption(c, 3);
}