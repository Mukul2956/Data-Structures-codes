#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>&arr, int target,int n){
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            return true;
        }
        else if(arr[mid] <= target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}
bool searchInMatrix(vector<vector<int>>&matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0;i < n;i++){
        if(matrix[i][0] <= target && target <= matrix[i][m-1]){
            return binarySearch(matrix[i],target,n);
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};  // check for keeping 0 instead of 7 once you go to room
    int target;
    cout << "Enter the target element: " << " ";
    cin >> target;
    cout << searchInMatrix(matrix,target);
    return 0;
}