#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &arr,int n){
    int j = -1;
    for(int i = 0;i < n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1){
        for(int i = 0;i < n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    for(int i = j+1;i < n;i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
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

    moveZeros(arr,n);

    cout << "Array after moving all zeros to end: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}