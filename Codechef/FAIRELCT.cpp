#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//ios_base::sync_with_stdio(false);cin.tie(NULL);


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,m,i=0;
		cin>>n>>m;
		vector<int> A(n),B(m);
		for(auto &x:A)cin>>x;
		for(auto &x:B)cin>>x;
		int s=0,s1=0,c=0;
		sort(A.begin(),A.end());
		sort(B.rbegin(),B.rend());
		s=accumulate(A.begin(),A.end(),0);
		s1=accumulate(B.begin(),B.end(),0);
		if(A==B)c=-1;
		else{
				for(i=0;i<n;i++){
					if(s>s1)break;
					else{
						swap(A[i],B[0]);
						c++;
						sort(B.rbegin(),B.rend());
						s=accumulate(A.begin(),A.end(),0);
						s1=accumulate(B.begin(),B.end(),0);
						if(s>s1)break;
						else if(s<s1 && i==n-1)c=-1;
						}
					}
			}
			cout<<c <<"\n";
		}
	}
