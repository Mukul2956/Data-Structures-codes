#include<bits/stdc++.h>
using namespace std;

/* void reverse(int arr[],int start,int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = arr[start];
        start++;
        end--;
    }
} */

void rotateArray(int arr[],int n,int d){
    reverse(arr,arr+(n-d)); // same as reverse(arr,0,n-d-1);
    reverse(arr+(n-d),arr+n); // same as reverse(arr,n-d,n-1);
    reverse(arr,arr+n); // same as reverse(arr,0,n-1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    
    int d;
    cin >> d;
    cout << "Number of places to be rotated: " << d << " ";
    cout << endl;

    rotateArray(arr,n,d);

    cout << "Rotated Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}