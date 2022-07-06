#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

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
