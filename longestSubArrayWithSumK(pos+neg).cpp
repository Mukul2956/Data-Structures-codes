//for both positive and negative arrays

#include<bits/stdc++.h>
using namespace std;

int longestSubArrWithSumK(vector<int> a,long long k){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0;i < a.size();i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main(){
    vector<int> a = {1,1,4,5,3,2,2,4};
    long long k;
    cout << "Enter desired sum of subArray: " << " ";
    cin >> k;
    int n = a.size();
    cout << "Given Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int maxLen = longestSubArrWithSumK(a,k);
    cout << "Length of the longest subarray with the desired sum K is " << maxLen << endl;
    return 0;
 }