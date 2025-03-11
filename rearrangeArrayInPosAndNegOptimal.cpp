#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int> &arr, int n){
    int posIndex = 0, negIndex = 1;
    vector<int> arrangedArray(n);
    for(int i = 0;i < n;i++){
        if(arr[i] > 0){
            arrangedArray[posIndex] = arr[i];
            posIndex += 2;
        }
        else{
            arrangedArray[negIndex] = arr[i];
            negIndex += 2;
        }
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