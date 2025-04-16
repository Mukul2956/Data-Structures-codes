#include<bits/stdc++.h>
using namespace std;

void secondLargest(vector<int> &arr,int n){
    int largest = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest Element in this array: " << largest << endl;

    int sLargest = -1;
    for(int i = 0;i < n;i++){
        if(arr[i] > sLargest && arr[i] < largest){
            sLargest = arr[i];
        }
    }
    cout << "Second largest element in this array: " << sLargest << endl;
}
int main(){
    vector<int> arr = {3,6,2,1,8,7};
    int n = arr.size();

    secondLargest(arr,n);
    
    return 0;
}