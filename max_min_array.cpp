#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[6] = {12, 5, 8, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxValue = arr[0];
    int minValue = arr[0];

    for (int i = 1; i < n; i++) {
        maxValue = max(maxValue, arr[i]);
        minValue = min(minValue, arr[i]);
    }

    cout << "Max value = " << maxValue << endl;
    cout << "Min value = " << minValue;

    return 0;
}