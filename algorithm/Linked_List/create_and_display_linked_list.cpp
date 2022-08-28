#include<bits/stdc++.h>
using namespace std ;
//create Node struct
struct Node {
    int data ;
    struct Node *next;
}*first = NULL; // first is global

void create_linked_list (int arr[],int n){
    struct Node *temp,*last;
    int i ;
    first = (struct Node *)malloc(sizeof(struct Node *)); //allocates uninitalize memoery of struct
    first->data = arr[0]; //store 1st array element
    first->next = NULL; // next address is always jehetu next  data nai
    last = first; //last e current node assign kora hoiche
    for(int i=1;i<n;i++){
        temp = (struct Node *)malloc(sizeof(struct Node *)); // memory allocation
        temp->data = arr[i]; // repeat previous step in loop
        temp->next = NULL;
        last->next = temp ;
        last = temp ;
    }

}

void display(struct Node *p){
    while(p != NULL){
        cout<<first<<" ";
        cout<<p->data<<" ";
        cout<<p->next<<" ";
        p=p->next; //p te next node er address
    }
}

int main(){

    int arr[] = {4,5,1,23,23,1};
    create_linked_list(arr,6);
    display(first);
    return 0;
}
