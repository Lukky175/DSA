class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    { 
        this->data = data;
        next = NULL;
    }
};

Node* insertBeforeValue(Node* head, int x, int val){
    if(head==NULL) return new Node(x);
    if(head->data==val){
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        if(temp->data == val){
            Node* newNode = new Node(x);
            newNode -> next = temp;
            prev -> next = newNode;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
