#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // first is glbal

void create_linked_list(int arr[], int n)
{
    struct Node *temp, *last;
    int i;
    // allocate unintialize memory of struct
    first = (struct Node *)malloc(sizeof(struct Node *));
    // store 1st array element
    first->data = arr[0];
    // next address is always null for 1st
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node *));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void insert_into_sorted_linked_list(struct Node *p, int x)
{
    struct Node *t, *q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int count(struct Node *p)
{
    int count = 0;
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
        count++;
    }
    return count;
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        // cout<<first<<" ";
        cout << p->data << " ";
        // cout<<p->next<<" ";
        p = p->next;
    }
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > count(p))
    {
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int arr[] = {4, 5, 1, 23, 1, 50, 70, 10};
    create_linked_list(arr, 8);
    int total_linked_list = count(first);

    insert(first, 0, 100);


    display(first);
    insert_into_sorted_linked_list(first, 50);
    cout << endl << "After Insertion : " << endl;
    display(first);

    return 0;
}