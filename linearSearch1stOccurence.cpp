#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr,int n,int num){
    for(int i = 0;i < n;i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,0,6,0,4,5,0,0,8,3};
    int n = arr.size();
    int num;
    cout << "Enter number whose first occurence you want to search: " << " ";
    cin >> num;
    cout << endl;

    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "First occurence of " << num << " is at: " << "";
    cout << search(arr,n,num);
    cout << endl;
    return 0;
}