// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 15, 25, 30, 35, 40};
//     int key = 40; // key value to search
//     int n = 6;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             cout << "Key found at position: " << i + 1;
//             return 0;
//         }
//     }

//     cout << "Key not found";
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 15, 25, 30, 35, 40};
//     int key = 23, n = 6;

//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key) {
//             cout << "Key found at position: " << mid + 1;
//             return 0;
//         }
//         else if (arr[mid] < key)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     cout << "Key not found";

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 30, 20, 35, 40};
    int n = 6;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

        cout << "Iteration " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }

    return 0;
}
