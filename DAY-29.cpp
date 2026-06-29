//Write a program to Create menu-driven calculator.
#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2;

    do {
        cout << "\n===== MENU-DRIVEN CALCULATOR =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;

            case 5:
                cout << "Exiting Calculator..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
//Write a program to Create menu-driven array operations system
#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, i, key;
    int sum, max, min;

    do {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====" << endl;
        cout << "1. Insert Elements" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Find Largest Element" << endl;
        cout << "4. Find Smallest Element" << endl;
        cout << "5. Find Sum of Elements" << endl;
        cout << "6. Search an Element" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter " << n << " elements:\n";
            for (i = 0; i < n; i++) {
                cin >> arr[i];
            }
            break;

        case 2:
            if (n == 0) {
                cout << "Array is empty!" << endl;
            } else {
                cout << "Array Elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            if (n == 0) {
                cout << "Array is empty!" << endl;
            } else {
                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Largest Element = " << max << endl;
            }
            break;

        case 4:
            if (n == 0) {
                cout << "Array is empty!" << endl;
            } else {
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                cout << "Smallest Element = " << min << endl;
            }
            break;

        case 5:
            if (n == 0) {
                cout << "Array is empty!" << endl;
            } else {
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum of Elements = " << sum << endl;
            }
            break;

        case 6:
            if (n == 0) {
                cout << "Array is empty!" << endl;
            } else {
                cout << "Enter element to search: ";
                cin >> key;
                bool found = false;

                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at index " << i << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Element not found!" << endl;
            }
            break;

        case 7:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}
//Write a program to Create menu-driven string operations system.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, temp;
    int choice;

    do {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====" << endl;
        cout << "1. Enter String" << endl;
        cout << "2. Display String" << endl;
        cout << "3. Find Length" << endl;
        cout << "4. Reverse String" << endl;
        cout << "5. Convert to Uppercase" << endl;
        cout << "6. Convert to Lowercase" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            break;

        case 2:
            cout << "String: " << str << endl;
            break;

        case 3:
            cout << "Length = " << str.length() << endl;
            break;

        case 4:
            temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String: " << temp << endl;
            break;

        case 5:
            temp = str;
            for (int i = 0; i < temp.length(); i++) {
                temp[i] = toupper(temp[i]);
            }
            cout << "Uppercase String: " << temp << endl;
            break;

        case 6:
            temp = str;
            for (int i = 0; i < temp.length(); i++) {
                temp[i] = tolower(temp[i]);
            }
            cout << "Lowercase String: " << temp << endl;
            break;

        case 7:
            cout << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}
//Write a program to Create inventory management system
#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product p[100];
    int n = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Product ID: ";
            cin >> p[n].id;
            cin.ignore();
            cout << "Enter Product Name: ";
            getline(cin, p[n].name);
            cout << "Enter Quantity: ";
            cin >> p[n].quantity;
            cout << "Enter Price: ";
            cin >> p[n].price;
            n++;
            cout << "Product Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No products available.\n";
            } else {
                cout << "\nID\tName\t\tQuantity\tPrice\n";
                for (i = 0; i < n; i++) {
                    cout << p[i].id << "\t"
                         << p[i].name << "\t\t"
                         << p[i].quantity << "\t\t"
                         << p[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> id;
            found = false;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "\nProduct Found\n";
                    cout << "ID: " << p[i].id << endl;
                    cout << "Name: " << p[i].name << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                    cout << "Price: " << p[i].price << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found!\n";
            break;

        case 4:
            cout << "Enter Product ID to Update: ";
            cin >> id;
            found = false;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "Enter New Quantity: ";
                    cin >> p[i].quantity;
                    cout << "Quantity Updated Successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found!\n";
            break;

        case 5:
            cout << "Enter Product ID to Delete: ";
            cin >> id;
            found = false;
            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    for (int j = i; j < n - 1; j++) {
                        p[j] = p[j + 1];
                    }
                    n--;
                    cout << "Product Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Product Not Found!\n";
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
