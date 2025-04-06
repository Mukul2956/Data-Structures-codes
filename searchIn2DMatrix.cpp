#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>&matrix, int target){
    int n = matrix.size(), m = matrix[0].size();

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(matrix[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,6,5},{0,9,8}};
    cout << "Enter the target element: " << " ";
    int target;
    cin >> target;
    cout << search(matrix,target);
    return 0;
}