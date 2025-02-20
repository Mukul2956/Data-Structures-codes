 //Only for positive arrays
 
 #include<bits/stdc++.h>
 using namespace std;

 int longestSubArrWithSumK(vector<int> &a,long long k){
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n){
        while(left <= right && sum > k){  // If the current sum of the subarray (sum) exceeds k, it moves the left pointer to the right, reducing the sum by removing elements from the left side of the subarray.
            sum -= a[left];
            left++;
        }
        if(sum == k){   //If the current sum sum equals k, then the length of the current subarray (right - left + 1) is compared with maxLen, and maxLen is updated to the larger of the two.
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n){  //The right pointer is incremented to expand the window from the right side. If the right pointer is still within bounds, the element at the new right position is added to the sum.
            sum += a[right];
        }
    }
    return maxLen;
 }
 int main(){
    vector<int> a = {1,1,4,5,3,2,2,4};
    long long k;
    cout << "Enter desired sum of subArray: " << " ";
    cin >> k;
    int n = a.size();
    cout << "Given Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int maxLen = longestSubArrWithSumK(a,k);
    cout << "Length of the longest subarray with the desired sum K is " << maxLen << endl;
    return 0;
 }