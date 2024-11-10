//header files
#include <bits/stdc++.h>
using namespace std;
// 
// code by Ravikant sharma
// ______________________________

int hello(vector<int>& a,int n) {
    int ans=0;
    int mi=a[0];
    for(auto it:a){
        ans=max(ans,it-mi);
        mi=min(mi,it);
    }
    return ans;
}
    
void sol1(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a)cin>>it;
    cout<<hello(a,n)<<"\n";
}
int main() {
    int t;
	cin>>t;
	while(t--){
	    sol1();   
	}
	return 0;
}
