#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    Node* prev;

  public:
    Node(int data1, Node* next1, Node* prev1){
      data = data1;
      next = next1;
      prev = prev1;
    }

  public:
    Node(int data1){
      data = data1;
      next = nullptr;
      prev = nullptr;
    }

};

Node* convertArr2DLL(vector<int> &arr){
  if(arr.empty()) return nullptr;
  Node* head = new Node(arr[0], nullptr, nullptr);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i], nullptr, mover);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

int main(){
  vector<int> arr = {2, 5, 8, 7};
  Node* head = convertArr2DLL(arr);
  cout << head->data;
}
