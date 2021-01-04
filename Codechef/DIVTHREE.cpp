#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        vector<int> A(n);
        for(auto &x:A)cin>>x;
        int s=accumulate(A.begin(),A.end(),0);
        if(s/k >d){
            cout<<d <<"\n";
        }
        else{
            cout<<s/k <<"\n";
        }
    }
}
