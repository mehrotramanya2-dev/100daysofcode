*/Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k./*


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    if (k <= 0 || k > n) {
        cout << "Invalid k" << endl;
        return 0;
    }

    int sum = 0;

    // Calculate the sum of the first window
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << maxSum << endl;

    return 0;
}
