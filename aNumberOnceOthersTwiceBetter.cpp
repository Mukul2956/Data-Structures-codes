//Using hashmap

#include<bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int> &arr,int n){
    unordered_map<int,int> map; // A hashmap stores key value pair (so here it will store the array elements as keys and its number of occurences as values)
    for(int i = 0;i < n;i++){
        map[arr[i]]++; // iterates over the array and updates the count for each element and stores in the map. i.e - here the map looks like {1:2, 2:1, 3:2, 4:2}
    }
    for(auto it : map){
        if(it.second == 1){
            return it.first; // if number of occurence(value) is 1, return the number(key)
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,1,2,3,3,4,4};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int singleElement = findSingleElement(arr,n);
    cout << "The number that appears once is: " << " ";
    cout << singleElement << endl;
    return 0;
}