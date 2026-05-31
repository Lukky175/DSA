/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    if(head==NULL) return head;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    Node* previ = NULL;
    while(temp->next != NULL){
        previ = temp;
        temp = temp->next;
    }
    previ->next = NULL;
    temp->prev = NULL;
    delete temp;
    return head;
}

/******************************************************************************************************************
OR
*******************************************************************************************************************/

Node * deleteLastNode(Node *head) {
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* previ = temp->prev;
    previ->next = NULL;          //If you dont want to create previ use temp->prev->next = NULL; and then temp->prev = NULL;
    temp->prev = NULL;
    delete temp;
    return head;
}
