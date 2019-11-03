//  https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
// Pseudo code for insertion in a sourter doubly linked DoublyLinkedList

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode *temp = new DoublyLinkedListNode(-1);
    temp = head;
    if(temp==NULL){
        return head;
    }

    while( temp->next != NULL && temp->data < data) {
        temp=temp->next;
    }
    DoublyLinkedListNode* current  = new DoublyLinkedListNode(data);
    if(temp==head){
        current->next=head;
        current->prev=NULL;
        head=current;
    } else{
        if(temp->next == NULL && temp->data < data){
            temp -> next = current;
            current->next=NULL;
            current->prev=temp;
        } else {
            DoublyLinkedListNode* previous = new DoublyLinkedListNode(-1);
            previous = temp -> prev;
            previous->next = current;
            current->next = temp;
        }
    }
    return head;
}
