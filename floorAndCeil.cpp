#include<bits/stdc++.h>
using namespace std;

int ceil(vector<int>&arr,int target,int n){  //Application of lowerBound (Smallest number in array >= x) we move right in the array while searching as we try to find smaller
    int low = 0;
    int high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= target){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int floor(vector<int>&arr,int target,int n){  //Application of upperBound (Largest number in array <= x) we move left in the array while searching as we try to find larger
    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] <= target){
            ans = arr[mid];  //maybe the answer
            low = mid + 1;  
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {2,3,4,5,7,8};
    int n = arr.size();
    int lowerBoundIndex = ceil(arr,6,n);
    int upperBoundIndex = floor(arr,6,n);
    cout << lowerBoundIndex << endl;
    cout << upperBoundIndex;
    return 0;
}