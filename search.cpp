#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 5, 6, 7, 9, 2, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 6;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}