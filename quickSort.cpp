#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j <= low + 1){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(vector<int> &arr,int low,int high){
    if(low < high){
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex - 1);
        quickSort(arr,pIndex + 1,high);
    }
}
int main(){
    vector<int> arr = {2,6,1,4,3,7,8};
    int n = arr.size();
    
    cout << "Array before sorting: " << " ";
    
    quickSort(arr,0,n-1);
    
    cout << "Array after sorting: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}