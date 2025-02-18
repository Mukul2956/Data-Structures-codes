#include<bits/stdc++.h>
using namespace std;

vector<int> search(vector<int> &arr,int n,int num){
    vector<int> temp;
    for(int i = 0;i < n;i++){
        if(arr[i] == num){
            temp.push_back(i);
        }
    }
    if(temp.empty()){
        cout << "Number not present in array" << endl;
    }
    for(int i = 0;i < temp.size();i++){
        cout << temp[i] << " ";
    }
    cout << endl;
    return temp;
}
int main(){
    vector<int> arr = {1,2,0,6,0,4,5,0,0,8,3};
    int n = arr.size();
    int num;
    cout << "Enter number whose all occurences you want to search: " << " ";
    cin >> num;
    cout << endl;

    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Occurences of " << num << " are at: " << "";
    search(arr,n,num);
    cout << endl;
    return 0;
}