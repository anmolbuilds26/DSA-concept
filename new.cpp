#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,15,25,30,35,40};
    int n = 6;  // key value is 35
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum = " << sum;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 5, 6, 7, 9, 2, 4, 8};
//     int n = 8;
//     int x = 6;
//     int index = -1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             index = i;
//             break;
//         }
//     }
//     cout << "Index = " << index;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {3, 5, 8, 3, 2, 1, 4, 3, 6, 3, 3, 5, 2, 1, 7, 2};
//     int n = 16;
//     int x = 3;
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             count++;
//         }
//     }
//     cout << "Occur = " << count;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     swap(arr[0], arr[4]);

//     for (int i = 0; i < 5; i++)
//         cout << arr[i] << " ";
// return 0;
// }   

// #include <iostream>
// using namespace std;

// int main() {
//     int n, target;
//     cin >> n;

//     int a[n];
//     for(int i = 0; i < n; i++)
//         cin >> a[i];

//     cin >> target;

//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(a[i] + a[j] == target) {
//                 cout << a[i] << " + " << a[j] << " = " << target;
//                 return 0;
//             }
//         }
//     }

//     cout << "No pair found";

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Duplicate elements: ";

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
