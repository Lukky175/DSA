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

Node* insertTailInLL(Node *head, int k){
  if(head==nullptr) return new Node(k, head);
	Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  Node* newNode = new Node(k, nullptr);
  temp->next = newNode;
  return head;
}

int main(){
  vector<int> arr = {2, 5, 8, 7};
  Node* head = convertArr2LL(arr);
  int k;
  cin >> k;
  head = insertTailInLL(head, k);
  Node* temp = head;
  while(temp){
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}
