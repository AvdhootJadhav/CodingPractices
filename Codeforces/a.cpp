#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//#pragma GCC optimize ("trapv")
//ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,h,c=0;
	cin>>n>>h;
	vector<int> A(n);
	for(auto &x:A)cin>>x;
	for(auto i=0;i<n;i++){
		if(A[i]<=h){
			c+=1;
			}
			else c+=2;
		}
		cout<<c <<"\n";
}
