#include<iostream>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;
    ListNode(int value):data(value), next(NULL){}
};
void printList(ListNode* head){
    while (head!=NULL)
    {
        cout<<head->data;
        head = head->next;
        if(head!=NULL){
            cout<<"->";
        }
    }
  cout<<endl;  
}
ListNode* deleteDuplicate(ListNode* head){
    if(head ==NULL)
    return NULL;
    else{
        ListNode *p = head;
        while(p!=NULL && p->next!=NULL){
            if(p->data ==p->next->data){
                ListNode* duplicate = p->next;
                p->next = p->next->next;
                delete(duplicate);
            }
            else{
                p =p->next;
            }
        }
    }
    return head;
}
int main(){
ListNode* l1 = new ListNode(1);
l1->next = new ListNode(1);
l1->next->next = new ListNode(3);
l1->next->next->next= new ListNode(3);
l1->next->next->next->next =new ListNode(4);
cout<<"Original linkdList: ";
printList(l1);
ListNode* result = deleteDuplicate(l1);
cout<<"Print the result: ";
printList(result);
delete(l1);
delete(result);
}