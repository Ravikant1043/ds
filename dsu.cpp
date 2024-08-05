#include<bits/stdc++.h>
using namespace std;
template<typename T>
class DisjointSet{
private:
	vector<T> par,size;
	int N;
public:
	DisjointSet(T n){
		this->N=n;
		par.resize(n+1);
		size.resize(n+1,1);
		for(T i=0;i<=n;i++)par[i]=i;
	}
	T findpar(T n){
		if(n==par[n])return n;
		return par[n]=findpar(par[n]);
	}
	void unionpair(T u,T v){
		T par_u=findpar(u);
		T par_v=findpar(v);
		if(par_u==par_v)return;
		if(size[par_u]>size[par_v]){
			size[par_u]+=size[par_v];
			par[par_v]=par_u;
		}
		else{
			size[par_v]+=size[par_u];
			par[par_u]=par_v;
		}
	}
	void print_par(){
		for(int i=1;i<=N;i++)cout<<par[i]<<" ";
			cout<<"\n";
	}
};
int main(){
	DisjointSet<int> t(6);
	int n;
	cin>>n;
	int a,b,c;
	while(n--){
		cin>>a>>b>>c;
		if(a==1){
			t.unionpair(b,c);
			t.print_par();
		}
		else{
			int u=t.findpar(b);
			int v=t.findpar(c);
			if(u==v)cout<<"Same\n";
			else cout<<"NotSame\n";
		}	
	}
}