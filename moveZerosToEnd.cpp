#include<bits/stdc++.h>
using namespace std;

void moveZero(vector<int> &arr,int n){
    vector<int> temp;
    for(int i = 0;i < n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0;i < temp.size();i++){
        arr[i] = temp[i];
    }
    int nz = temp.size();
    for(int i = nz;i < n;i++){
        arr[i] = 0;
    }
}
int main(){
    vector<int> arr = {1,2,0,6,0,4,5,0,0,8,3};
    int n = arr.size();

    cout << "Original Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    moveZero(arr,n);

    cout << "Array after moving all zeros to end: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}