#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
#pragma GCC optimize("Ofast")

class Node {

  public:
    int val;
  Node * next;

  Node(int v) {
    val = v;
    next = NULL;
  }

  Node() {
    next = nullptr;
  }

};

Node * head = NULL;
Node * tail = NULL;

void addNode(Node * r) {
  if (head == NULL) {
    head = r;
    tail = r;
    return;
  }
  Node * p = head;
  r -> next = p;
  head = r;
}

void insertAtEnd(Node * p) {
  if (head == NULL) {
    head = p;
    tail = p;
    return;
  }

  Node * a = tail;
  a -> next = p;
  tail = p;
}

void printList() {
  Node * test = head;
  while (test != NULL) {
    cout << test -> val << " ";
    test = test -> next;
  }
  cout << "\n";
}

void reverseList() {
  Node * r = head;
  Node * prev = nullptr, * curr = r, * next = nullptr;

  while (curr != NULL) {
    next = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}

void deleteNode(Node * p) {
  Node * a = head;

  if (a -> val == p -> val) {
    head = a -> next;
    a -> next = NULL;
    return;
  }

  Node * temp = new Node();
  while (a != NULL) {
    if (a -> val != p -> val) {
      temp = a;
      a = a -> next;
    } else {
      temp -> next = a -> next;
      a -> next = NULL;
      a = temp -> next;
    }
  }
}

void solve() {
  insertAtEnd(new Node(1));
  insertAtEnd(new Node(2));
  insertAtEnd(new Node(3));
  insertAtEnd(new Node(4));
  insertAtEnd(new Node(5));

  deleteNode(new Node(5));

  printList();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //~ int t;
  //~ cin>>t;
  //~ while(t--)
  solve();
}
