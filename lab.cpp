#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 25, 30, 35, 40};
    int key = 25, n = 6;

    // Linear Search
    int linear = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            linear = i;
            break;
        }
    }

    // Binary Search
    int low = 0, high = n - 1, binary = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            binary = mid;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // Results
    if (linear != -1)
        cout << "Linear Search: Found at position " << linear + 1 << endl;
    else
        cout << "Linear Search: Key not found" << endl;

    if (binary != -1)
        cout << "Binary Search: Found at position " << binary + 1 << endl;
    else
        cout << "Binary Search: Key not found" << endl;

    return 0;
}