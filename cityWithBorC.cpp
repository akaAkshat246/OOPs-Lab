#include <bits/stdc++.h>
using namespace std;
int main() {
	int N ;
	cin >> N ;
	vector<string> ans ;
    for(int i = 0 ; i<N ; i++){
        string s ;
        cin >> s ;
        if(s[0] == 'B' || s[0] == 'C'){
            ans.push_back(s);
        }
    }
    for(string s : ans){
        cout << s << endl;
    }
    cout << endl ;
    return 0 ;

}