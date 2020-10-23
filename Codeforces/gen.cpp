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
	int c=0;
	for(auto i=1;i<n;i++){
		if(A[i]!=A[i-1]){
			c++;
			}
			else continue;
		}
		cout<<++c <<"\n";
}
