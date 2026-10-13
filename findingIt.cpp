#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    s = " " + s + " "; 
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i+1] == 'i' && s[i+2] == 't' && s[i+3] == ' ') {
            count++;
            cout << "Found 'it' at index " << i << endl;
        }
    }

    cout << "Total count = " << count;
    return 0;
}



