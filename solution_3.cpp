//header files
#include <bits/stdc++.h>
using namespace std;
// 
// code by Ravikant sharma
// ______________________________

int hello(vector<int>& a,int k) {
    int n=a.size();
    deque<int>q;
    int ans=1e9;
    for(int i=0;i<n;i++){
        if(!q.empty() && q.front()==i-k)q.pop_front();
        while(!q.empty() && a[q.back()]<a[i])q.pop_back();
        q.push_back(i);
        if(i>k-2)//cout<<a[q.front()]<<" ";
            ans=min(ans,a[q.front()]);
    }
    return ans;
}
    
void sol2(){
    int n,k;
    cin>>k>>n;
    vector<int> a(n);
    for(auto &it:a)cin>>it;
    cout<<hello(a,k)<<"\n";
}
int main() {
    int t=1;
	// cin>>t;
	while(t--){
	    sol2();   
	}
	return 0;
}
