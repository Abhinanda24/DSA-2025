#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int maxSubarraySum(vector<int> &arr) {
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0) sum = 0;
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Start timing just the algorithm
    auto start = high_resolution_clock::now();
    int result = maxSubarraySum(arr);
    auto stop = high_resolution_clock::now();

    // Calculate duration in microseconds
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Maximum subarray sum = " << result << endl;
    cout << "Time taken by Kadane’s Algorithm: " 
         << duration.count() / 1000.0 << " ms" << endl;

    return 0;
}
