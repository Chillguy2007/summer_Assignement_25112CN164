//Write a program to Find missing number in array.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter size of array (n-1): ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = (n + 1) * (n + 2) / 2; // Sum of numbers from 1 to n+1
    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}
//Write a program to Find maximum frequency element.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxFreq = 0, maxElement;

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
//Write a program to Find pair with given sum
#include <iostream>
using namespace std;

int main() {
    int n, sum;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found.";
    }

    return 0;
}
//Write a program to Remove duplicates from array.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}