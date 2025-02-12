#include<bits/stdc++.h>
using namespace std;

int kthMissingNum(vector<int>&arr,int n,int k){
    for(int i = 0;i < n;i++){
        if(arr[i]<k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}
int main(){
    vector<int>arr = {2,3,4,5,7,11};
    int n = arr.size();
    int k;
    cin >> k;
    int ans = kthMissingNum(arr,n,k);
    cout << ans;
    return 0;
}