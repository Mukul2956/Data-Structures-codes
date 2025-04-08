#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr,int x,int n){
    int low = 0, high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++, high--;
            continue;
        }
        if(arr[mid] <= arr[high]){
            if(arr[mid] <= x && x <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        else{
            if(arr[low] <= x && x <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {3,1,2,3,3,3,3};
    int n = arr.size();
    int searchedElement = search(arr,1,n);
    cout << searchedElement;
    return 0;
}