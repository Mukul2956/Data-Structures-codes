#include<bits/stdc++.h>
using namespace std;

int kthMissingNum(vector<int>&arr, int n, int k){
    int low = 0;
    int high = n-1;
    int missing;
    while(low <= high){
        int mid = (low+high)/2;
        missing = arr[mid] - (mid+1);
        if(k>missing){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low + k;
}
int main(){
    vector<int>arr = {2,3,4,7,11};
    int n = arr.size();
    int k;
    cin >> k;
    int missingNum = kthMissingNum(arr,n,k);
    cout << missingNum;
    return 0;
}