#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//ios_base::sync_with_stdio(false);cin.tie(NULL);


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,y=-1,c=0;
	cin>>n;
	vector<int> A(2*n),B,C;
	for(auto &x:A)cin>>x;
	sort(A.begin(),A.end());
	for(auto i=0;i<2*n;i++){
		if(y!=n-1){
			B.push_back(A[i]);
			y++;
			}
			else{
				C.push_back(A[i]);
				}
		}
		bool yes = true;
		for(auto i=0;i<(int)B.size();i++){
			yes=binary_search(C.begin(),C.end(),B[i]);
			if(yes){
				c=1;
				break;
				}
			}
			if(c==1)cout<<"NO" <<"\n";
			else cout<<"YES" <<"\n";
	
}

