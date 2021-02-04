#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	char c,c1,c2;
	cin>>c>>c1>>c2;
	if(c==c1 && c==c2 && c1==c2)cout<<"Won" <<"\n";
	else cout<<"Lost" <<"\n";
}
