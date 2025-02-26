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

int sizeOfLL(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

Node* middleNode(Node* head){
    Node* temp = head;
    int cnt = 0;
    if(sizeOfLL(head)%2==1){
        while(temp != NULL){
            if(cnt == sizeOfLL(head)/2){
                break;
            }
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    else{
        while(temp != NULL){
            if(cnt == sizeOfLL(head)/2){
                break;
            }
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    return NULL;
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