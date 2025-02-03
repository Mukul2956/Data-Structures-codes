#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a,vector<int> &b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){ //back() gives the last element of an array (So unionArr.back() checks if the last element in unionArr is not equal to a[i], so that it helps in putting distinct elements in unionArr)
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){ //and size = 0 means the element is coming in the array for the first time as there is no element present in the array,hence we can put any element in it
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}
int main(){
    vector<int> a = {1,1,5,2,3,6,3};
    vector<int> b = {2,3,6,1};
    int n1 = a.size();
    int n2 = b.size();
    cout << "Array 1: " << " ";
    for(int i = 0;i < n1;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array 2: " << " ";
    for(int i = 0;i < n2;i++){
        cout << b[i] << " ";
    }
    cout << endl;
    vector<int> unionArr = findUnion(a,b);
    cout << "Union of both arrays: " << " ";
    for(int i = 0;i < unionArr.size();i++){
        cout << unionArr[i] << " ";
    }
    cout << endl;
    return 0;
}