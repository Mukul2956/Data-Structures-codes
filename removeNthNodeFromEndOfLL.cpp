#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* createLLFromArr(vector<int> &arr,int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int lengthOfLL(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

Node* DeleteNthNodefromEnd(Node* head, int N){
    if(head == NULL || head->next == NULL){
            return NULL;
    }
    if(lengthOfLL(head) == N){
        return head->next;
    }
    Node* temp = head;
    int cnt = 1;
    while(temp != NULL){
        if(cnt == (lengthOfLL(head) - N)){
            Node* save = temp->next;
            temp->next = temp->next->next;
            delete(save);
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}
int main() {
    int n, N;
    
    // Take input for the number of elements in the linked list
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Take input for N (Nth node from the end to delete)
    cout << "Enter the value of N: ";
    cin >> N;
    
    Node* head = createLLFromArr(arr, n);
    
    // Delete the Nth node from end and print the result
    head = DeleteNthNodefromEnd(head, N);
    cout << "Modified Linked List: ";
    printLL(head);

    return 0;
}