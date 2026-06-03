/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head){
    Node* evenHead = nullptr;
    Node* evenTail = nullptr;
    Node* oddHead = nullptr;
    Node* oddTail = nullptr;
    Node* temp = head;
    while(temp!=nullptr){
        Node* nextNode = temp->next;
        temp->next = nullptr;
        if(temp->data %2==0 ){
            if(evenHead !=nullptr){
                 evenTail->next = temp;
                 evenTail = evenTail->next;
            }else{
                evenHead = temp;
                evenTail = temp;
            }
        }else{
            if(oddHead !=nullptr){
                oddTail->next = temp;
                oddTail = oddTail->next;
            }else{
                oddHead = temp;
                oddTail = temp;
            }
        }
        temp = nextNode;
    }

    if(evenHead == nullptr)
    return oddHead;

    if(oddHead == nullptr)
        return evenHead;

    evenTail->next = oddHead;
    return evenHead;
}
