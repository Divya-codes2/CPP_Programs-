#include <iostream>
using namespace std;

int main() {
    int arr[12] = {1,2,3,4,5,6,2,1,6,1,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate elements: ";

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            bool alreadyPrinted = false;

            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    alreadyPrinted = true;
                    break;
                }
            }

            if (!alreadyPrinted) {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}