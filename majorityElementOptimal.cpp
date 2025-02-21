//Not understood

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr,int n){
    int cnt = 0;
    int el;
    for(int i = 0;i < n;i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        }
        else if(arr[i] == el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == el){
            cnt1++;
        }
    }
    if(cnt1 > arr.size()/2){
        return el;
    }
    return -1;
}
int main(){
    vector<int> arr = {2,2,4,3,2};
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