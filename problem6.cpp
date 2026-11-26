#include <iostream>
using namespace std;

void duplicateZeros(int arr[], int n);

int main() {
    int n;
    int arr[10000];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    duplicateZeros(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void duplicateZeros(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {

            for (int j = n - 1; j > i; j--) {
                arr[j] = arr[j - 1];
            }

            if (i + 1 < n) {
                arr[i + 1] = 0;
            }

            i++;
        }
    }
}
