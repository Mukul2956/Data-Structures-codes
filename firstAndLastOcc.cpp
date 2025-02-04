#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>&arr,int x,int n){
    int low = 0, high = n-1;
    int first = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return first;
}
int lastOcc(vector<int>&arr,int x,int n){
    int low = 0, high = n-1;
    int last = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return last;
}
int main(){
    vector<int>arr = {2,3,4,5,6,7,8,8,8,11,13};
    int n = arr.size();
    int first = firstOcc(arr,8,n);
    if(first == -1){
        return (-1,-1);  //saves time of log n (becoz if there is no first occurence of x, then there isn't a last too)
    }
    int last = lastOcc(arr,8,n);
    cout << first << endl;
    cout << last << endl;
    int countOcc = last - first + 1; //count the occurence of x in array
    cout << countOcc;
    return 0;
}

//Can be written in pair<> too to do both first and last at a time

#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x)
{
    // Write your code here
    int low = 0, high = n - 1;
    int first = -1, last = -1;

    // Find first occurrence
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1; // Continue searching in the left half
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If the first occurrence is not found, return (-1, -1)
    if (first == -1) {
        return {-1, -1};
    }

    low = 0;
    high = n - 1;

    // Find last occurrence
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1; // Continue searching in the right half
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {first, last};
}