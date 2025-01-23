//Using xor

#include<bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int> &arr,int n){
    int a = 0;
    for(int i = 0;i < n;i++){
        a = a ^ arr[i]; // i ^ i = 0 and 0 ^ i = i, So all the pairs cancel out and give 0, then 0 ^ 2 is 2 which is the single element
    }
    return a;
}
int main(){
    vector<int> arr = {1,1,2,3,3,4,4};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int singleElement = findSingleElement(arr,n);
    cout << "The number that appears once is: " << " ";
    cout << singleElement << endl;
    return 0;
}