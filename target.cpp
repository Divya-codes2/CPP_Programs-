#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 7, 11, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " + " << arr[j] <<" = "<<target;
                return 0;
            }
        }
    }

    cout << "No such elements found";

    return 0;
}