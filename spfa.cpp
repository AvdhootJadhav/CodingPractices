#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
typedef long long int ll;
const int N = 1e5+5;

void solve(){
	int n,m;
	cin>>n>>m;
	
	vector<pair<int,int>> A[m];
	vector<int> dist(n,N);
	vector<int> cnt(n,0);
	vector<bool> inqueue(n,false);
	queue<int> q;
	vector<int> p(n,-1);
	
	for(auto i=0;i<m;++i){
		int a,b,c;
		cin>>a>>b>>c;
		A[a].push_back({b,c});
		}
	int dest;
	cin>>dest;
	dist[0]=0;
	q.push(0);
	inqueue[0]=true;
	bool check = true;
	while(!q.empty()){
		int a = q.front();
		q.pop();
		inqueue[a]=false;
		for(auto x:A[a]){
			int to = x.first;
			int len = x.second;
			if(dist[to]> dist[a]+len){
				dist[to]=dist[a]+len;
				p[to]=a;
				if(!inqueue[to]){
					inqueue[to]=true;
					q.push(to);
					cnt[to]++;
					
					if(cnt[to]>n-1){
						check=false;
						break;
						}
					}
				}
			}
			if(!check)break;
		}
	
	vector<int>path;
	for(auto i=dest;i!=-1;i=p[i]){
		path.push_back(i);
		}
	reverse(path.begin(),path.end());
	for(auto x:path)cout<<x<<" ";
	cout<<"\n";
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t=1;
	//cin>>t;
	while(t--)
	solve();
}


