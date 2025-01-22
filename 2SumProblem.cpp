#include<bits/stdc++.h>
using namespace std;

vector<int> findSumIndexes(vector<int> &arr,int target){
    vector<int> resArr = {};
    int n = arr.size();
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == j){
                continue;
            }
            if(arr[i] + arr[j] == target){
                resArr.push_back(i);
                resArr.push_back(j);
            }
        }
    }
    return resArr;
}
int main(){
    vector<int> arr = {1,1,4,5,3,2,2,4};
    int target;
    cout << "Enter desired sum of subArray: " << " ";
    cin >> target;
    int n = arr.size();
    cout << "Given Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> sumPresent = findSumIndexes(arr,target);
    cout << "Sum of indexes " << sumPresent[0] << " and " << sumPresent[1] << " will result to the targeted sum" << endl;
    return 0;
 }