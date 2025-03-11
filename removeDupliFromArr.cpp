#include<bits/stdc++.h>
using namespace std;

int remDup(vector<int> &arr,int n){
    set<int> st;
    for(int i = 0;i < n;i++){
        st.insert(arr[i]);
    }
    int k = st.size(); //a set only contains unique elements, so k = 3
    int index = 0;  //now traverse through set and put all its elements in the array's first 3 indexes and print till that
    for(int it: st){
        arr[index++] = it;
    }
    return k;
}
int main(){
    vector<int> arr = {1,1,2,2,2,3,3,3,3};
    int n = arr.size();
    
    cout << "Original Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int k = remDup(arr,n);
    
    cout << "Array without duplicacies: " << " ";
    for(int i = 0;i < k;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}