#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr,int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i = 0;i < n;i++){
        if(arr[i] > largest){
            largest = arr[i];
            sLargest = largest;
        }
        else if(arr[i] <= largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int secondSmallest(vector<int> &arr,int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i = 0;i < n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            sSmallest = smallest;
        }
        else if(arr[i] >= smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}
int main(){
    vector<int> arr = {3,7,8,4,1,9};
    int n = arr.size();
    cout << secondLargest(arr,n) << endl;
    cout << secondSmallest(arr,n) << endl;
    return 0;
}