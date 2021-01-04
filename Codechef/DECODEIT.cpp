#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<char> c{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
		string s;
		cin>>s;
		int c1=0,m=0,m1=3;
		for(auto i=0;i<n;i++){
			c1++;
			int y=s[i]-'0';
			//cout<<y <<"\n";
			m+=y*pow(2,m1);
			m1--;
			if(c1==4){
				cout<<c[m];
				m1=3;
				c1=0;
				m=0;
				}
			}
			cout<<"\n";
		}
}
