#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    replace(n.begin(),n.end(),' ','_');
    cout<<n;
}