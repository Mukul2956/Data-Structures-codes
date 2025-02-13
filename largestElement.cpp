#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr,int n){
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    vector<int> arr = {2,9,5,1,6,3};
    int n = arr.size();

    cout << "Before sorting array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr,n);
    cout << "After sorting array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int largestElement = arr[n-1];
    cout << "Largest element in this array: " << largestElement << " ";
    cout << endl;
    return 0;   
}