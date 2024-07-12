#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};
void push(ListNode *&head, int new_val)
{
    ListNode *new_node = new ListNode(new_val);
    new_node->next = head;
    head = new_node;
}

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *current = head;
    while (current != nullptr)
    {
        ListNode *next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }
    return prev;
}

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = nullptr;

    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    cout << "Original List: ";
    printList(head);

    ListNode *reversedHead = reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    while (reversedHead != nullptr)
    {
        ListNode *temp = reversedHead;
        reversedHead = reversedHead->next;
        delete temp;
    }

    return 0;
}
