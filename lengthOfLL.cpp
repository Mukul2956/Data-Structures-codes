#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
Node* createLLFromArr(vector<int> &arr){
    if(arr.empty()){
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1;i < arr.size();i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int main(){
    vector<int> arr = {2,3,6,7,1};
    Node* head = createLLFromArr(arr);
    printLL(head);
    int length = lengthOfLL(head);
    cout << "Length of this linked list is: " << length;
    return 0;
}