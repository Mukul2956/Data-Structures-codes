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
int checkIfPresent(Node* head, int x){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == x){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int>arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0;i < n;i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    cout << endl;
    Node* head = createLLFromArr(arr);
    int x;
    cout << "Enter desired element: ";
    cin >> x;
    int result = checkIfPresent(head,x);
    cout << result;
    return 0;
}