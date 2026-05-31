/*
Done Using Two Pointer.

Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K){
    Node* last = head;
    Node* sLast = head;
    int i = 0;
    while(i<K){
        last = last-> next;
        i++;
    }
    if(last == NULL) return head->next;

    while(last->next != NULL){
        last = last->next;
        sLast = sLast->next;
    }
    sLast->next = sLast->next->next;
    return head;
}
