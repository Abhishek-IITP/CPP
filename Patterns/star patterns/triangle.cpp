#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of books

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; // Days on which books were returned
        }

        // Use a map to group penalties by return day
        unordered_map<int, int> max_penalty;
        for (int i = 0; i < N; ++i) {
            // Update the maximum penalty for the return day
            max_penalty[A[i]] = max(max_penalty[A[i]], A[i]);
        }

        // Sum the maximum penalties for each return day
        int total_penalty = 0;
        for (const auto& entry : max_penalty) {
            total_penalty += entry.second;
        }

        cout << total_penalty << endl; // Output the total penalty for the test case
    }

    return 0;
}
