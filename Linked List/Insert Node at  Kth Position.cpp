class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

Node * insert(Node * head, int n, int pos, int val) {
    if(head==NULL) return new Node(val);
    if(pos==0){
        Node* newNode = new Node(val);
        newNode->next= head;
        return newNode;
    } 
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        cnt++;
        if(cnt==pos+1){
            Node* newNode = new Node(val);
            newNode->next = temp;
            prev-> next = newNode;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    Node* newNode = new Node(val);
    prev->next = newNode;

    return head;
}
