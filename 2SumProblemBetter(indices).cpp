#include<bits/stdc++.h>
using namespace std;

vector<int> findSumIndexes(vector<int> &arr,int n,int target){
    map<int,int> mpp;
    for(int i = 0;i < n;i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more],i};
        }
        mpp[a] = i;
    }
    return {};
}
int main(){
    vector<int> arr = {2,3,4,1,5};
    int target;
    cout << "Enter desired sum of subArray: " << " ";
    cin >> target;
    int n = arr.size();
    cout << "Given Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> sumPresent = findSumIndexes(arr,n,target);
    if(!sumPresent.empty()){
        cout << "Sum of indexes " << sumPresent[0] << " and " << sumPresent[1] << " will result to the targeted sum" << endl;
    }
    else{
        cout << "No such pair of indices found in the array whose sum can result to the target" << endl;
    }
    return 0;
}