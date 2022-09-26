
#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL , *second=NULL,*res=NULL;

void print_linked_list(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

//recursive approach

Node* merge_two_linked_list(Node *list1, Node *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }

    if (list2 == NULL)
    {
        return list1;
    }

    if (list1->data <= list2->data)
    {
        list1->next = merge_two_linked_list(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = merge_two_linked_list(list1, list2->next);
        return list2;
    }
}

void push(Node **head_ref, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    // create_linked_list(arr1, 4);
    // create_linked_list(arr2,4);
    push(&first,4);
    push(&first,3);
    push(&first, 2);
    push(&first, 1);

    push(&second, 4);
    push(&second, 3);
    push(&second, 2);
    push(&second, 1);



    //print_linked_list(a);

    res = merge_two_linked_list(first,second);

    print_linked_list(res);

    return 0;
}
