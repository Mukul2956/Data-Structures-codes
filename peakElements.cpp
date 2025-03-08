#include<bits/stdc++.h>
using namespace std;

// Function to find peak elements
vector<int> peak(vector<int>& arr, int n) {
    vector<int> peakArr;
    for (int i = 0; i < n; i++) {
        // Check if the current element is greater than its neighbors or at boundaries
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            peakArr.push_back(arr[i]);
        }
    }
    return peakArr;
}

int main() {
    // Example input array
    vector<int> arr = {2, 1, 3, 4, 5, 7, 6};
    int n = arr.size();

    // Call the peak function
    vector<int> peaks = peak(arr, n);

    // Print the peak elements
    cout << "Peak elements are: ";
    for (int p : peaks) {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}
