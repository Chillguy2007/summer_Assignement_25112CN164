//Write a program to Create student record system using arrays and strings.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[100], marks[100];
    string name[100];
    int n = 0, choice, r;
    bool found;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll[n];
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name[n]);
            cout << "Enter Marks: ";
            cin >> marks[n];
            n++;
            cout << "Student Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No records found.\n";
            } else {
                cout << "\nRoll No\tName\t\tMarks\n";
                for (int i = 0; i < n; i++) {
                    cout << roll[i] << "\t"
                         << name[i] << "\t\t"
                         << marks[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> r;
            found = false;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cout << "\nStudent Found\n";
                    cout << "Roll No: " << roll[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student Record Not Found!\n";
            break;

        case 4:
            cout << "Enter Roll Number to Update: ";
            cin >> r;
            found = false;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cin.ignore();
                    cout << "Enter New Name: ";
                    getline(cin, name[i]);
                    cout << "Enter New Marks: ";
                    cin >> marks[i];
                    cout << "Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student Record Not Found!\n";
            break;

        case 5:
            cout << "Enter Roll Number to Delete: ";
            cin >> r;
            found = false;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    for (int j = i; j < n - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }
                    n--;
                    cout << "Record Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student Record Not Found!\n";
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
//Write a program to Create mini library system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int bookID[100], n = 0, choice, id;
    string title[100], author[100], status[100];
    bool found;

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Book ID: ";
            cin >> bookID[n];
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, title[n]);

            cout << "Enter Author Name: ";
            getline(cin, author[n]);

            status[n] = "Available";
            n++;

            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\nID\tTitle\t\tAuthor\t\tStatus\n";
                for (int i = 0; i < n; i++) {
                    cout << bookID[i] << "\t"
                         << title[i] << "\t\t"
                         << author[i] << "\t\t"
                         << status[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (bookID[i] == id) {
                    cout << "\nBook Found\n";
                    cout << "ID: " << bookID[i] << endl;
                    cout << "Title: " << title[i] << endl;
                    cout << "Author: " << author[i] << endl;
                    cout << "Status: " << status[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";
            break;

        case 4:
            cout << "Enter Book ID to Issue: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (bookID[i] == id) {
                    if (status[i] == "Available") {
                        status[i] = "Issued";
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book is Already Issued!\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";
            break;

        case 5:
            cout << "Enter Book ID to Return: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (bookID[i] == id) {
                    if (status[i] == "Issued") {
                        status[i] = "Available";
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book is Already Available!\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";
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
//Write a program to Create mini employee management system
#include <iostream>
#include <string>
using namespace std;

int main() {
    int empID[100], salary[100];
    string name[100], department[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> empID[n];
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name[n]);

            cout << "Enter Department: ";
            getline(cin, department[n]);

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\nID\tName\t\tDepartment\tSalary\n";
                for (int i = 0; i < n; i++) {
                    cout << empID[i] << "\t"
                         << name[i] << "\t\t"
                         << department[i] << "\t\t"
                         << salary[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID: " << empID[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Department: " << department[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";
            break;

        case 4:
            cout << "Enter Employee ID to Update: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Department: ";
                    getline(cin, department[i]);

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Employee Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";
            break;

        case 5:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    for (int j = i; j < n - 1; j++) {
                        empID[j] = empID[j + 1];
                        name[j] = name[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }

                    n--;
                    cout << "Employee Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";
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
//Write a program to Develop complete mini project using arrays, strings and functions.
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX], marks[MAX];
string name[MAX];
int n = 0;

// Function to add student
void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents() {
    if (n == 0) {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\nRoll\tName\t\tMarks\n";
    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

// Function to search student
void searchStudent() {
    int r;
    cout << "\nEnter Roll Number to Search: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "\nStudent Found\n";
            cout << "Roll No: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Function to update student
void updateStudent() {
    int r;
    cout << "\nEnter Roll Number to Update: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Record Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Function to delete student
void deleteStudent() {
    int r;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            for (int j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}