#include<bits/stdc++.h>
using namespace std;

/*void reverse(vector<int> &arr, int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}*/
vector<int> nextPermutation(vector<int> &arr,int n){
    int ind = -1;
    for(int i = n-2;i >= 0;i--){
        if(arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i = n-1;i > ind;i--){
        if(arr[i] > arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr.begin() + ind + 1, arr.end());
    return arr;
}
int main(){
    vector<int> arr = {2,3,1};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> nextArray = nextPermutation(arr,n);
    for(int i = 0;i < n;i++){
        cout << nextArray[i] << " ";
    }
    return 0;
}