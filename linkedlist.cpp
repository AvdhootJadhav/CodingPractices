#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
typedef long long ll;

ll power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll modpower(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

bool checkPrime(int n, int iter=5) {
    if (n < 4)
        return n == 2 || n == 3;

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (modpower(a, n - 1, n) != 1)
            return false;
    }
    return true;
}

vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

bool checksort(vector<int> s){
	vector<int> s1=s;
	sort(s1.begin(),s1.end());
	if(s==s1)return true;
	else return false;
}

ll combination(ll n, ll k) {
    ll res = 1;
    for (auto i = n - k + 1; i <= n; ++i)
        res *= i;
    for (auto i = 2; i <= k; ++i)
        res /= i;
    return res;
}

class Node{
	public:
	int data;
	Node *next;
};

Node *head=NULL;

void insertAtBegin(int data){
	Node *p = NULL;
	p = new Node();
	p->data=data;
	p->next=nullptr;
	if(head==NULL){
		head=p;
		}
	else{
		p->next=head;
		head=p;
		}
}

void insertAtEnd(int data){
	Node *p=NULL;
	p=new Node();
	p->data=data;
	p->next=nullptr;
	Node *q = NULL;
	if(head==NULL){
		head=p;
		}
	else{
		q=head;
		while(q->next!=NULL){
			q=q->next;
			}
		q->next=p;
		}
}

void printList(){
	Node *p=NULL;
	p=head;
	while(p!=NULL){
		cout<<p->data <<" ";
		p=p->next;
		}
	cout<<"\n";
}

void solve(){
	int x;
	cin>>x;
	while(x--){
	int y;
	cin>>y;
	insertAtEnd(y);
	}
	Node *m=NULL;
	m=head;
	while(m!=NULL){
		cout<<m->data <<" ";
		m=m->next;
		}
	cout<<"\n";
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	//int t;
	//cin>>t;
	//while(t--)
	solve();
}
