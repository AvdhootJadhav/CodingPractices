#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
typedef long long ll;
const int LOG=17;
const int MAX=1e5;
int pow_log[MAX];
int st[MAX][LOG];
int A[MAX];

int query(int L, int R){
	int length = R-L+1;
	int k=pow_log[length];
	return min(st[L][k],st[R-(1<<k)+1][k]);
}

void solve(){
	//reading input by user
	int n;
	cin>>n;
	pow_log[1]=0;
	for(auto i=2;i<=n;++i){
		pow_log[i] = pow_log[i/2]+1;
		}
  //for(auto i=0;i<n;i++)cout<<pow_log[i] <<" ";
  //cout<<"\n";
	for(auto i=0;i<n;i++){
		cin>>A[i];
		st[i][0]=A[i];
		}
	
	//preprocessing sparse table
	for(auto j=1;j<LOG;j++){
		for(auto i=0;i+(1<<j)-1<n;++i){
			st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
			}
		}
		
	//query input
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<query(l,r) <<"\n";
		}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	//int t;
	//cin>>t;
	//while(t--)
	solve();
}
