#include <iostream>
using namespace std;

int main() {
    int arr[16] = {3, 5, 8, 1, 3, 2, 4, 3, 6, 3, 3, 5, 2, 1, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 3;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    cout << count;

    return 0;
}