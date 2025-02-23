#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr,int n){
    int maximum = INT_MIN;
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = i;j < n;j++){
            sum += arr[j];
            maximum = max(sum,maximum);
        }
    }
    return maximum;
}
int main(){
    vector<int> arr = {2,1,5,-3,-1,4,-3,7};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxSubSum = maxSubarraySum(arr,n);
    cout << maxSubSum << endl;
    return 0;
}