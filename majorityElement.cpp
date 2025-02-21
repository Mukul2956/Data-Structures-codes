#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr,int n){
    for(int i = 0;i < n;i++){
        int cnt = 0; //initiate counter inside the loop to reset counter for each new element
        for(int j = 0;j < n;j++){ //compares all elements of j with the current element of i, then i moves and then again the same happens
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt > n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {2,2,4,3,1,2,3,2,2};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int majEl = majorityElement(arr,n);
    cout << "Majority element in the array is " << " ";
    cout << majEl << endl;
    return 0;
}