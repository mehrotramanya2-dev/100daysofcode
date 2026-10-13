*/Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output./*


#include <iostream>
#include <vector>
#include <deque>
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

    deque<int> dq;

    for (int i = 0; i < n; i++) {
        // Remove indices outside the current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove smaller elements from the back
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // Print the maximum for each complete window
        if (i >= k - 1) {
            cout << arr[dq.front()] << " ";
        }
    }

    cout << endl;
    return 0;
}
