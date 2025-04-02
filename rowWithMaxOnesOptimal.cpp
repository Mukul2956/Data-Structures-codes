#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int rowMax1(vector<vector<int>>&matrix,int n,int m){
    int cnt_max = 0;
    int index = -1;
    for(int i = 0;i < n;i++){
        int cnt_ones = m - lowerBound(matrix[i],m,1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}
/* Explanation:

1. int cnt_max = 0;: Keeps track of the maximum number of 1s found so far.
2. int index = -1;: Stores the index of the row with the most 1s. Defaults to -1 if no such row exists.
3. for(int i = 0; i < n; i++): Iterate over all rows.
4. int cnt_ones = m - lowerBound(matrix[i], m, 1);:
i. Uses the lowerBound function to find the first occurrence of 1 in the current row.
ii. Subtracts the index from the total columns m to get the count of 1s in the row.
5. if(cnt_ones > cnt_max):
i. If the count of 1s in the current row is greater than cnt_max, update cnt_max and store the current row index in index.
6. Return index: The index of the row with the maximum number of 1s.*/

int main(){
    vector<vector<int>> matrix = {{0,0,0},{1,1,1},{0,1,1}};
    int n = 3, m = 3;
    int x = 1;
    int rowWithMax1 = rowMax1(matrix,n,m);
    cout << rowWithMax1;
    return 0;
}