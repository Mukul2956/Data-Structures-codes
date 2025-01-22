#include<bits/stdc++.h>
using namespace std;

string read(vector<int> &arr, int n, int target){
    int left = 0, right = n - 1;
    sort(arr.begin(),arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum > target){
            right--;
        }
        else{
            left++;
        }
    }
    return "NO";
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
    cout << read(arr,n,target);
    return 0;
}