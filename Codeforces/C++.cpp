#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//#pragma GCC optimize ("trapv")
//ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> A(n);
	for(auto &x:A)cin>>x;
	int m=0,c=0;
	for(auto i=1;i<n;i++){
		if(A[i-1]<=A[i]){
			c++;
			m=max(m,c);
			}
			else{
				m=max(m,c);
				c=0;
				}
		}
		cout<<m+1 <<"\n";
}
