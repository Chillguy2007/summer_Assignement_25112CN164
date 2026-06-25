//Write a program to Merge two sorted arrays
#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first sorted array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

    // Merge the arrays
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of first array
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of second array
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    cout << "Merged Sorted Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
//Write a program to Find common characters in strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    bool found = false;

    cout << "Common characters are: ";

    for (int i = 0; i < str1.length(); i++) {
        bool printed = false;

        for (int k = 0; k < i; k++) {
            if (str1[i] == str1[k]) {
                printed = true;
                break;
            }
        }

        if (printed)
            continue;

        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                cout << str1[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "No common characters found.";
    }

    return 0;
}
//Write a program to Sort names alphabetically
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of names: ";
    cin >> n;

    string names[n];

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
//Write a program to Sort words by length.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of words: ";
    cin >> n;

    string words[n];

    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Bubble Sort based on word length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}