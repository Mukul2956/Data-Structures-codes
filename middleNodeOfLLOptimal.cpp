//Tortoise Hair method

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

Node* middleNode(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    vector<int> arr = {12,5,4,7,6,3};
    Node* head = convertArrToDLL(arr);
    printDLL(head);
    cout << endl;
    Node* middle = middleNode(head);
    printDLL(middle);
    return 0;
}