#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int> &arr, int n){
    vector<int> pos;
    vector<int> neg;
    for(int i = 0;i < n;i++){
        if(arr[i] >= 0){
            pos.push_back(arr[i])
        }
        if(arr[i] < 0){
            neg.push_back(arr[i]);
        }
    }
    vector<int> arrangedArray(n);
    for(int i = 0;i < pos.size();i++){
        arrangedArray[2 * i] = pos[i];
        arrangedArray[2 * i + 1] = neg[i];
    }
    return arrangedArray;
}
int main(){
    vector<int> arr = {1,2,-2,-3,-1,4};
    int n = arr.size();
    cout << "Original Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> arrangedArray = alternateNumbers(arr,n);
    cout << "Array rearranged with alternate numbers: " << "";
    for(int i = 0;i < n;i++){
        cout << arrangedArray[i] << " ";
    }
    return 0;
}