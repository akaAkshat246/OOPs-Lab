#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    return (a.c_str(),b.c_str())<0;
}
int main(){
    int n;
    cin>>n;
    vector<string>countries(n);
    for(int i = 0; i<n; i++){
        getline(cin,countries[i]);
    }
    sort(countries.begin(),countries.end(),cmp);
    for(int i = 0; i<n; i++){
        cout<<countries[i]<<"\n";
    }
}