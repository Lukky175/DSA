Node* removeK(Node* head, int k) {
    if(head == NULL) return head;

    if(k == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL) {
        cnt++;

        if(cnt == k + 1) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}
