#include<bits/stdc++.h>
using namespace std;

int remDup(vector<int> &arr,int n){
    int i = 0;
    for(int j = 1;j < n;j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    vector<int> arr = {1,1,2,2,2,3,3,3,3};
    int n = arr.size();

    cout << "Original Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int k = remDup(arr,n);

    cout << "Array without duplicacies: " << " ";
    for(int i = 0;i < k;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}