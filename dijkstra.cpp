#include <bits/stdc++.h>
using namespace std;

int main(){
	int v,e;
	cin>>v>>e;
	vector<pair<int,int>> A[v];
	for(auto i=0;i<e;++i){
		int a,b,c;
		cin>>a>>b>>c;
		A[a].push_back({b,c});
		A[b].push_back({a,c});
		}
	vector<int> d(v,INT_MAX);
	d[0]=0;
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
	p.push({0,0});
	
	while(!p.empty()){
		int distance = p.top().first;
		int vertex = p.top().second;
		p.pop();
		
		for(pair<int,int> it:A[vertex]){
			int newdistance = it.second;
			int newvertex = it.first;
			if(d[newvertex]> (newdistance+distance)){
				d[newvertex]=newdistance+distance;
				p.push({d[newvertex],newvertex});
				}
			}
		}
	for(auto i=0;i<v;++i){
		cout<<i <<" " <<d[i]<<"\n";
		}
}
