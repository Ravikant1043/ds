//header files
#include <bits/stdc++.h>
using namespace std;
// 
// code by Ravikant sharma
// ______________________________
    
void sol(){
    int n;
    cin>>n;
    vector<string> v(n);
    unordered_map<string,int>mp;
    for(auto &it:v){
        cin>>it;
        mp[it]++;
    }
    for(auto it:v){
        if(mp[it]&1){
            cout<<it;
            return;
        }
    }
    cout<<"All is even";
}
int main() {
    int t=1;
	// cin>>t;
	while(t--){
	    sol();   
	}
	return 0;
}
