//Write a program to Merge arrays
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
//Write a program to Union of arrays
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int uni[n1 + n2];
    int k = 0;

    // Add elements of first array
    for (int i = 0; i < n1; i++) {
        uni[k++] = arr1[i];
    }

    // Add only unique elements from second array
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            uni[k++] = arr2[i];
        }
    }

    cout << "Union of arrays: ";
    for (int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }

    return 0;
}
//Write a program to Intersection of arrays
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of arrays: ";

    for(int i = 0; i < n1; i++) {
        bool found = false;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        if(found) {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}
//Write a program to Find common elements
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Common elements are: ";

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}