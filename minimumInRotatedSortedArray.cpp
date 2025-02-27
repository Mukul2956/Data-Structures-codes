#include<bits/stdc++.h>
using namespace std;

int minSearch(vector<int>&arr,int n){
    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[low] <= arr[mid]){
            ans = min(ans,arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={7,8,1,2,3,4};
    int n = arr.size();
    int minElement = minSearch(arr,n);
    cout << minElement;
    return 0;
}