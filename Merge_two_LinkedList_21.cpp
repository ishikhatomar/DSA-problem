#include<iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    // Constructor to initialize the node with data
    ListNode(int value) : data(value), next(nullptr) {}
};

ListNode* mergeSortedList(ListNode* l1, ListNode* l2){
    ListNode* temp = new ListNode(-1);
    ListNode* ptr = temp;
    while(l1!=NULL && l2!=NULL){
        if(l1->data < l2->data){
            ptr->next = l1;
            l1 = l1->next;
        }
        else{
            ptr->next = l2;
            l2= l2->next;
        }
        ptr = ptr->next;
    }
    if(l1==NULL)
        ptr->next= l2;
    else
        ptr->next = l1;
   ptr =NULL;
   return temp->next; 
}
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
        if (head != nullptr) {
            cout << " -> ";
        }
    }
    cout << endl;
}

int main() {
    // Create two linked lists representing numbers
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(4);

    // Print the original linked lists
    cout << "Linked List 1: ";
    printLinkedList(l1);

    cout << "Linked List 2: ";
    printLinkedList(l2);

    // Add the linked lists
    ListNode* result = mergeSortedList(l1, l2);

    // Print the result
    cout << "new linkedlist: ";
    printLinkedList(result);

    // Clean up memory
    delete l1;
    delete l2;
    delete result;
    return 0;
}