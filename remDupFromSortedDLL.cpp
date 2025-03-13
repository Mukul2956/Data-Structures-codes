#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1,Node* next1,Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* createLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1;i < arr.size();i++){
        Node* newNode = new Node(arr[i]);
        newNode->prev = temp;
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head) {
    while(head != NULL) {
        cout << head->data;
        if (head->next != NULL){
            cout << " <-> ";
        }
        head = head->next;
    }
    cout << endl;
}

Node * removeDuplicates(struct Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
        if(temp->data == temp->next->data) {
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            if(toDelete->next != NULL) { //Ensure next node exists before updating prev
                toDelete->next->prev = temp;
            }
            delete toDelete;
        }
        else{
            temp = temp->next; //Move forward only if no deletion (don't do temp = temp->next inside if statement because when one node is deleted, we should stay at the same temp node and check the new temp->next again)
        }
    }
    return head;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    for(int i = 0;i < n;i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    Node* head = createLL(arr);

    cout << "Input List: ";
    printLL(head);

    Node* result = removeDuplicates(head);

    cout << "Result List: ";
    printLL(result);

    return 0;
}