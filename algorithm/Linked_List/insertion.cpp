#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

//insert in to end
void append(Node **head_ref, int new_data)
{
    /* 1. allocate node */
    Node *new_node = new Node();

    Node *last = *head_ref; /* used in step 5*/

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
    {
        last = last->next;
    }

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
// insert data in front
void push(Node **head_ref, int new_data)
{
    // allocate node
    Node *new_node = new Node();

    // put in the data
    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " Node Address " << node->next << " Node Data " << node->data;
        node = node->next;
        cout << endl;
    }
}

int main()
{
    int n;
    Node *head = NULL;
    cin >> n;
    while (n--)
    {
        /* code */
        int x;
        cin >> x;
        push(&head, x);
    }
    printList(head);
    return 0;
}
