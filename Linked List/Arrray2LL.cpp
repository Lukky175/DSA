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
            next1 = nullptr;
        }
}

Node* constructLL(vector<int>& arr) {
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for(int i=1;i<=n;i++){
        Node* temp = new Now(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
