void deleteNode(Node* (&head), int pos) {
    if(head == NULL) return;

    Node* temp = head;

    while(pos--) {
        temp = temp->next;
    }

    if(temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if(temp->next)
        temp->next->prev = temp->prev;

    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
}
