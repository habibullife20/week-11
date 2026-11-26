#include <iostream>
using namespace std;

int countValue(const int a[], int n, int x);

int main() {
    int n;
    int a[100];
    int x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> x;
    cout << countValue(a, n, x);

    return 0;
}

int countValue(const int a[], int n, int x) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }

    return count;
}

