#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

  public:
    Node(int data1, Node* next1){
      data = data1;
      next = next1;
    }

  public:
    Node(int data1){
      data = data1;
      next = nullptr;
    }

};

Node* convertArr2LL(vector<int> &arr){
  if(arr.empty()) return nullptr;
  Node* head = new Node(arr[0], nullptr);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

int SearchInLL(Node *head, int k){
	Node* temp = head;
  while(temp){
    if(temp->data == k) return 1;
    temp = temp->next;
  }
  return 0;
}

int main(){
  vector<int> arr = {2, 5, 8, 7};
  Node* head = convertArr2LL(arr);
  cout << "Enter Element to Search In LL, Output 1 = Exists; Output 0 = Does not Exist.";
  int k;
  cin >> k;
  int found = SearchInLL(head, k);
  cout << fount;
}
