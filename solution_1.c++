//header files
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

// namespaces used to implement all the data structures
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
#define pb push_back
#define ppb pop_back
#define all(_obj) _obj.begin(), _obj.end()
#define FastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vi vector<int>
#define for0(i,n) for(int i=0;i<(int)n;i++)
#define readarr(a) for0(i,a.size()) cin >> a[i]

template<class T>
using ordered_set = tree<T, null_type, less<T>,rb_tree_tag,tree_order_statistics_node_update>;  
                //find_by_order and order_of_key


int mod=1e9+7;
//-----------------------global variable-------------------------------
string yes="YES\n",no="NO\n";
//---------------------------------------------------------------------
vector<ll>fact,inverse;
// 
// code by Ravikant sharma
// ______________________________

ll gcd(ll n1, ll n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}

ll power(ll a,ll b){
    if(b==0)return 1;
    if(b%2==0)return power((a%mod)*(a%mod),b/2);
    return ((a%mod)*power(a,b-1)%mod)%mod;
}


ll binaryin(ll a){
    return power(a,mod-2);
}
void factorial(){
    fact.resize(103,1);
    inverse.resize(103,0);
    int n=101;
    fact[1]=1;
    inverse[1]=1;
    for(int i=2;i<n;i++){
        fact[i]=(fact[i-1]%mod * i)%mod;
        inverse[i]=binaryin(fact[i]);
    }
}

static bool cmp(pair<int,int>&addd,pair<int,int>&b){
    return addd.second<b.second;
}

vector<bool>prime;
int n=1e6+2;
vector<int>pri;
void SieveOfEratosthenes()
{
    prime.resize(n,1);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            pri.push_back(p);
}

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
	FastIO;
    int t;
	cin>>t;
	while(t--){
	    sol1();   
	}
	return 0;
}
