#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#pragma GCC optimize("Ofast")

int merge(int l, int r, int mid, vector<int> &A, vector<int> &B){
	int i,j,k;
	i=l;
	j=mid;
	k=l;
	int c=0;
	while(i<=mid-1 and j<=r){
		if(A[i]<=A[j]){
			B[k++]=A[i++];
			}
		else{
			B[k++]=A[j++];
			c+=(mid-i);
			}
		}
	while(i<=mid-1){
		B[k++]=A[i++];
		}
	while(j<=r){
		B[k++]=A[j++];
		}
	
	for(i=l;i<=r;++i){
		A[i]=B[i];
		}
	return c;
}

int mergeSort(int l, int r, vector<int> &A, vector<int> &B){
	int c=0;
	if(l<r){
		int mid = l+(r-l)/2;
		c+=mergeSort(l,mid,A,B);
		c+=mergeSort(mid+1,r,A,B);
		c+=merge(l,r,mid+1,A,B);
		}
	return c;
}

void solve(){
	int n=5;
	long long a[5];
	for(auto x:a)cout<<x<<" ";
	cout<<"\n";
	vector<int> A={2,5,1,3,4};
	vector<int> B(n);
	int c=0;
	c=mergeSort(0,n-1,A,B);
	cout<<c<<"\n";
}

int main(){
	solve();
}
