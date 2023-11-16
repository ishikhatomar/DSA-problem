#include <iostream>
void createNode();
struct node
{
    int data;
    struct node *next;
};
typedef struct node ListNode;
ListNode *head = NULL;
void createNode()
{
    ListNode *temp = new ListNode();
    if (temp == NULL)
    {
        exit(1);
    }
    std::cout << "Enter data element";
    std::cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ListNode *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        p = NULL;
    }
    temp = NULL;
}
void printLinkedList()
{
    ListNode *p = head;
    std::cout << "Linked List: ";
    while (p != NULL)
    {
        std::cout << p->data << "->";
        p = p->next;
    }
    std::cout << std::endl;
}
int main()
{
    int n;
    std::cout << "Enter total how many nodes you want";
    std::cin >> n;
    for (int i = 0; i < n; i++)
        createNode();
    printLinkedList();
}