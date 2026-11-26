#include <iostream>
using namespace std;

int search(const int nums[], int n, int target);

int main() {
    int n;
    int nums[10000];
    int target;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    cout << search(nums, n, target);

    return 0;
}

int search(const int nums[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}
