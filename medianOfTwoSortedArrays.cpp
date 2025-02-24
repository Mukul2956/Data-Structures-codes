#include<bits/stdc++.h>
using namespace std;

double medianOfArrs(vector<int>&arr1,vector<int>&arr2,int n1,int n2){
    vector<int>arr3;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr3.push_back(arr1[i++]);
        }
        else{
            arr3.push_back(arr2[j++]);
        }
    }
    while(i < n1){
        arr3.push_back(arr1[i++]);
    }
    while(j < n2){
        arr3.push_back(arr2[j++]);
    }
    int n = arr3.size();
    if(n%2==1){
        return (double)arr3[n/2];
    }
    return (double)((double)arr3[n/2] + (double)arr3[(n/2)-1]);
}
int main(){
    vector<int>arr1 = {1,3,4,7,10,12};
    vector<int>arr2 = {2,3,6,15};
    int n1 = arr1.size();
    int n2 = arr2.size();
    int median = medianOfArrs(arr1,arr2,n1,n2);
    cout << median;
    return 0;
}