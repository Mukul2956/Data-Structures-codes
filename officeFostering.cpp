#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to calculate the number of days required to reach rostering value K
int rosteringDaysToReachK(int N, int M, vector<pair<int, int>>& friendships, int K) {
    // Create adjacency list for friendships
    vector<vector<int>> adjList(N);
    for (const auto& f : friendships) {
        adjList[f.first].push_back(f.second);
        adjList[f.second].push_back(f.first);
    }

    // Initialize states
    vector<int> currentStatus(N, 1); // 1: WFO, 0: WFH
    int rosteringValue = N;          // Day 1 all employees WFO
    int days = 1;                    // Start at Day 1

    // Simulate day-by-day
    while (rosteringValue < K) {
        vector<int> nextStatus(N, 0);
        for (int i = 0; i < N; i++) {
            int friendsWFO = 0;
            for (int friendId : adjList[i]) {
                friendsWFO += currentStatus[friendId];
            }

            if (currentStatus[i] == 1) { // WFO today
                nextStatus[i] = (friendsWFO == 3) ? 1 : 0;
            } else { // WFH today
                nextStatus[i] = (friendsWFO < 3) ? 1 : 0;
            }
        }

        // Update rostering value
        int todayWFO = 0;
        for (int status : nextStatus) {
            todayWFO += status;
        }
        rosteringValue += todayWFO;

        // Update status for next iteration
        currentStatus = nextStatus;
        days++;
    }

    return days;
}

// Main function to handle input and output
int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> friendships(M);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        friendships[i] = {u, v};
    }

    int K;
    cin >> K;

    // Solve and print the result
    cout << rosteringDaysToReachK(N, M, friendships, K) << endl;

    return 0;
}