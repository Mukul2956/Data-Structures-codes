//Using hashing

#include<bits/stdc++.h>
using namespace std;

string findSumIndexes(vector<int> &arr,int n,int target){ //supose target = 14
    map<int,int> mpp;
    for(int i = 0;i < n;i++){
        int a = arr[i]; //suppose 8
        int more = target - a; //then more = 6
        if(mpp.find(more) != mpp.end()){ // find() is used to find the key 'more' in the map, and when its equal to mpp.end(), that means the element was not found
            return "YES";
        }
        mpp[a] = i;
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
    cout << findSumIndexes(arr,n,target);
    return 0;
}