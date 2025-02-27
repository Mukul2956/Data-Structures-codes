#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr,int n){
    int actualSum = (n*(n+1))/2;
    int calculatedSum = 0;
    for(int i = 0;i < n;i++){
        calculatedSum += arr[i];
    }
    return actualSum - calculatedSum;
}
int main(){
    vector<int> arr = {1,2,3,5};
    int n = arr.size() + 1; // n = arr.size() + 1 includes the missing element as well (as it contributes to the total actual size of the array)
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int missingNum = missingNumber(arr,n);
    cout << "Missing number: " << " ";
    cout << missingNum << endl;
    return 0;
}