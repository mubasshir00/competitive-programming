#include <bits/stdc++.h>
using namespace std;
// create Node struct
struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // first is global

void create_linked_list(int arr[], int n)
{
    struct Node *temp, *last;
    int i;
    // allocates uninitalize memoery of struct
    first = (struct Node *)malloc(sizeof(struct Node *));
    // store 1st array element
    first->data = arr[0];
    // next address is always jehetu next  data nai
    first->next = NULL;
    // last e current node assign kora hoiche
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node *)); // memory allocation
        temp->data = arr[i];                                 // repeat previous step in loop
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

// count total element and sum in linked list
void count_linked_list(struct Node *p){
    int count = 0;
    int sum = 0;
    while( p!= NULL){
      sum = sum+p->data;
      p = p->next;
      count++;
    }
    cout<<"Total Element is Linked list "<<count<<endl;
    cout<<"SUM "<<sum<<endl;
}

//count using recursion
int count(struct Node *p){
    if(p==0) return 0;
    else {
      return count(p->next)+1;
    }
}

int sum_recursion(struct Node *p){
    if(p==0) return 0 ;
    else {
        return sum_recursion(p->next) + p->data;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << first << " ";
        cout << p->data << " ";
        cout << p->next << " ";
        p = p->next; // p te next node er address
    }
}

void display_recursion(struct Node *p){
    cout<<endl;
    if(p!=NULL){
        cout<<"Linked List "<<p->data<<endl;
        display(p->next);
    }
    
}

//find maximum
int Max(struct Node *p){
    int max = INT32_MIN;
    while(p){
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

//find maximum using recursion
int recursion_max(struct Node *p)
{
    int x =0;
    if(p==0){
        return INT32_MIN;
    }
    x = recursion_max(p->next);
    if(x>p->data){
        return x;
    } else {
        return p->data;
    }
}

int main()
{

    int arr[] = {4, 5, 1, 23, 234, 1};
    create_linked_list(arr, 6);
    // display(first);
    // count_linked_list(first);
    // cout <<"Array Length : "<< count(first);
    // cout << "Array sum : " << sum_recursion(first);
    // display_recursion(first);
    // cout<<"Maximum : "<<Max(first)<<endl;
    cout << "Maximum : " << recursion_max(first)<<endl;
    return 0;
}
