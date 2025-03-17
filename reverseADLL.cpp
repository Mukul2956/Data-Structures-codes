#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* reverseDLL(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* temp = nullptr;
    Node* current = head;
    // Swap next and back for all nodes
    while (current != nullptr) {
        temp = current->back;
        current->back = current->next;
        current->next = temp;
        current = current->back; // Move to the next node in original order
    }
    // Return the new head
    return temp->back; 
}

int main(){
    vector<int> arr = {12,5,4,7,6};
    Node* head = convertArrToDLL(arr);
    printDLL(head);
    cout << endl;
    head = reverseDLL(head);
    printDLL(head);
    return 0;
}