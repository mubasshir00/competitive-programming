#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data;
    Node* next;
};

Node* createLinkedList(int arr[], int size){
    Node* head = nullptr;
    Node* current = nullptr;
    for(int i=0;i<size;i++){
        //create a new node
        Node* newNode = new Node;

        newNode->data = arr[i];
        newNode->next = nullptr;
        cout<<'newNode->data'<<head<<endl;;
        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = current->next;
        }

    }
        return head;

}

void printLinkedList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 8, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);
     printLinkedList(head);

    return 0;
}
