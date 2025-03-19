#include<bits/stdc++.h>
using namespace std;

/*void reverse(int arr[],int start,int end){   //THIS IS NOT NEEDED AS 'reverse' is already a predefined function in c++ to reverse a given array
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}*/

void rotateArray(vector<int>& arr, int n, int d) {
    d = d % n; // Handle cases where d > n
    if (d == 0) return; // No rotation needed if d is 0
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    
    int d;
    cin >> d;
    cout << "Number of left rotations: " << d << " ";
    cout << endl;

    rotateArray(arr,n,d);

    cout << "Rotated Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}