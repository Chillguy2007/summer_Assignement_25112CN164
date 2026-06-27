//Write a program to Create student record management system
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string course;
    float gpa;

public:
    // Constructor
    Student(int roll, string name, string course, float gpa) {
        this->rollNumber = roll;
        this->name = name;
        this->course = course;
        this->gpa = gpa;
    }

    // Getters
    int getRollNumber() const { return rollNumber; }
    string getName() const { return name; }
    string getCourse() const { return course; }
    float getGPA() const { return gpa; }

    // Display individual student details in a row
    void displayRecord() const {
        cout << left << setw(15) << rollNumber 
             << setw(25) << name 
             << setw(20) << course 
             << setw(10) << fixed << setprecision(2) << gpa << endl;
    }
};

class StudentManagementSystem {
private:
    vector<Student> records;

public:
    // 1. Add a new student record
    void addStudent() {
        int roll;
        string name, course;
        float gpa;

        cout << "\n--- Add New Student ---" << endl;
        cout << "Enter Roll Number: ";
        while (!(cin >> roll)) {
            cout << "Invalid input. Enter a numeric Roll Number: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cin.ignore(); // Clear newline character from buffer

        // Check if roll number already exists
        for (const auto& student : records) {
            if (student.getRollNumber() == roll) {
                cout << "Error: A student with Roll Number " << roll << " already exists!\n";
                return;
            }
        }

        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Course/Branch: ";
        getline(cin, course);
        cout << "Enter GPA: ";
        while (!(cin >> gpa) || gpa < 0.0 || gpa > 10.0) {
            cout << "Invalid GPA. Enter a value between 0.0 and 10.0: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        records.push_back(Student(roll, name, course, gpa));
        cout << "\nRecord added successfully!\n";
    }

    // 2. Display all student records
    void displayAll() const {
        if (records.empty()) {
            cout << "\nNo student records found.\n";
            return;
        }

        cout << "\n----------------------------------------------------------------------\n";
        cout << left << setw(15) << "Roll No" << setw(25) << "Name" << setw(20) << "Course" << setw(10) << "GPA" << endl;
        cout << "----------------------------------------------------------------------\n";
        for (const auto& student : records) {
            student.displayRecord();
        }
        cout << "----------------------------------------------------------------------\n";
    }

    // 3. Search student by Roll Number
    void searchStudent() const {
        if (records.empty()) {
            cout << "\nNo records available to search.\n";
            return;
        }

        int roll;
        cout << "\nEnter Roll Number to search: ";
        cin >> roll;

        for (const auto& student : records) {
            if (student.getRollNumber() == roll) {
                cout << "\nRecord Found:\n";
                cout << "----------------------------------------------------------------------\n";
                cout << left << setw(15) << "Roll No" << setw(25) << "Name" << setw(20) << "Course" << setw(10) << "GPA" << endl;
                cout << "----------------------------------------------------------------------\n";
                student.displayRecord();
                cout << "----------------------------------------------------------------------\n";
                return;
            }
        }
        cout << "Student with Roll Number " << roll << " not found.\n";
    }

    // 4. Delete a student record
    void deleteStudent() {
        if (records.empty()) {
            cout << "\nNo records available to delete.\n";
            return;
        }

        int roll;
        cout << "\nEnter Roll Number to delete: ";
        cin >> roll;

        for (auto it = records.begin(); it != records.end(); ++it) {
            if (it->getRollNumber() == roll) {
                records.erase(it);
                cout << "\nRecord deleted successfully!\n";
                return;
            }
        }
        cout << "Student with Roll Number " << roll << " not found.\n";
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;

    do {
        cout << "\n=== STUDENT RECORD MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search Student by Roll No" << endl;
        cout << "4. Delete Student Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                sms.addStudent();
                break;
            case 2:
                sms.displayAll();
                break;
            case 3:
                sms.searchStudent();
                break;
            case 4:
                sms.deleteStudent();
                break;
            case 5:
                cout << "\nExiting system. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
//Write a program to Create employee management system.
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
private:
    int id;
    string name;
    string designation;
    double salary;

public:
    // Constructor
    Employee(int empId, string empName, string empDesignation, double empSalary) {
        id = empId;
        name = empName;
        designation = empDesignation;
        salary = empSalary;
    }

    // Getters
    int getId() const { return id; }
    string getName() const { return name; }
    string getDesignation() const { return designation; }
    double getSalary() const { return salary; }

    // Setter for updating salary or designation
    void updateDetails(string newDesignation, double newSalary) {
        designation = newDesignation;
        salary = newSalary;
    }

    // Display individual employee record in a row
    void displayRecord() const {
        cout << left << setw(10) << id 
             << setw(25) << name 
             << setw(20) << designation 
             << setw(15) << fixed << setprecision(2) << salary << endl;
    }
};

class EmployeeManagementSystem {
private:
    vector<Employee> employees;

public:
    // 1. Add a new employee record
    void addEmployee() {
        int id;
        string name, designation;
        double salary;

        cout << "\n--- Add New Employee ---" << endl;
        cout << "Enter Employee ID: ";
        while (!(cin >> id)) {
            cout << "Invalid input. Enter a numeric ID: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cin.ignore(); // Clear newline character from buffer

        // Check if ID already exists
        for (const auto& emp : employees) {
            if (emp.getId() == id) {
                cout << "Error: Employee with ID " << id << " already exists!\n";
                return;
            }
        }

        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Salary: ";
        while (!(cin >> salary) || salary < 0) {
            cout << "Invalid Salary. Enter a positive numeric value: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        employees.push_back(Employee(id, name, designation, salary));
        cout << "\nEmployee record added successfully!\n";
    }

    // 2. Display all employee records
    void displayAll() const {
        if (employees.empty()) {
            cout << "\nNo employee records found.\n";
            return;
        }

        cout << "\n----------------------------------------------------------------------\n";
        cout << left << setw(10) << "Emp ID" << setw(25) << "Name" << setw(20) << "Designation" << setw(15) << "Salary" << endl;
        cout << "----------------------------------------------------------------------\n";
        for (const auto& emp : employees) {
            emp.displayRecord();
        }
        cout << "----------------------------------------------------------------------\n";
    }

    // 3. Search employee by ID
    void searchEmployee() const {
        if (employees.empty()) {
            cout << "\nNo records available to search.\n";
            return;
        }

        int id;
        cout << "\nEnter Employee ID to search: ";
        cin >> id;

        for (const auto& emp : employees) {
            if (emp.getId() == id) {
                cout << "\nRecord Found:\n";
                cout << "----------------------------------------------------------------------\n";
                cout << left << setw(10) << "Emp ID" << setw(25) << "Name" << setw(20) << "Designation" << setw(15) << "Salary" << endl;
                cout << "----------------------------------------------------------------------\n";
                emp.displayRecord();
                cout << "----------------------------------------------------------------------\n";
                return;
            }
        }
        cout << "Employee with ID " << id << " not found.\n";
    }

    // 4. Update an existing employee's details
    void updateEmployee() {
        if (employees.empty()) {
            cout << "\nNo records available to update.\n";
            return;
        }

        int id;
        cout << "\nEnter Employee ID to update: ";
        cin >> id;

        for (auto& emp : employees) {
            if (emp.getId() == id) {
                string newDesignation;
                double newSalary;
                
                cin.ignore(); // Clear buffer
                cout << "Current details: " << emp.getDesignation() << " | Salary: " << emp.getSalary() << endl;
                cout << "Enter New Designation: ";
                getline(cin, newDesignation);
                cout << "Enter New Salary: ";
                while (!(cin >> newSalary) || newSalary < 0) {
                    cout << "Invalid Salary. Enter a valid positive value: ";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }

                emp.updateDetails(newDesignation, newSalary);
                cout << "\nRecord updated successfully!\n";
                return;
            }
        }
        cout << "Employee with ID " << id << " not found.\n";
    }

    // 5. Delete an employee record
    void deleteEmployee() {
        if (employees.empty()) {
            cout << "\nNo records available to delete.\n";
            return;
        }

        int id;
        cout << "\nEnter Employee ID to delete: ";
        cin >> id;

        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if (it->getId() == id) {
                employees.erase(it);
                cout << "\nRecord deleted successfully!\n";
                return;
            }
        }
        cout << "Employee with ID " << id << " not found.\n";
    }
};

int main() {
    EmployeeManagementSystem ems;
    int choice;

    do {
        cout << "\n=== EMPLOYEE MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Add Employee Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Update Employee Details" << endl;
        cout << "5. Delete Employee Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        
        if (!(cin >> choice)) {
            cout << "Invalid choice type. Please enter a number between 1 and 6.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                ems.addEmployee();
                break;
            case 2:
                ems.displayAll();
                break;
            case 3:
                ems.searchEmployee();
                break;
            case 4:
                ems.updateEmployee();
                break;
            case 5:
                ems.deleteEmployee();
                break;
            case 6:
                cout << "\nExiting system. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please select an option from 1 to 6." << endl;
        }
    } while (choice != 6);

    return 0;
}
//Write a program to Create salary management system.
#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float basicSalary, hra, da, pf, netSalary;

public:
    void input()
    {
        cout << "\nEnter Employee ID: ";
        cin >> empId;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary()
    {
        hra = basicSalary * 0.20;   // 20% HRA
        da = basicSalary * 0.10;    // 10% DA
        pf = basicSalary * 0.08;    // 8% PF

        netSalary = basicSalary + hra + da - pf;

        cout << "\nSalary Calculated Successfully!\n";
    }

    void display()
    {
        cout << "\n========== Employee Salary Details ==========\n";
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA (10%)      : " << da << endl;
        cout << "PF (8%)       : " << pf << endl;
        cout << "Net Salary    : " << netSalary << endl;
    }
};

int main()
{
    Employee emp;
    int choice;

    do
    {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Enter Employee Details\n";
        cout << "2. Calculate Salary\n";
        cout << "3. Display Salary Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp.input();
            break;

        case 2:
            emp.calculateSalary();
            break;

        case 3:
            emp.display();
            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}
//Write a program to Create marksheet generation system.
#include <iostream>
#include <iomanip>
using namespace std;

class Marksheet
{
private:
    int rollNo;
    string name;
    float marks[5];
    float total = 0, percentage;
    char grade;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter marks of 5 subjects (out of 100):\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = total / 5;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\n========== MARKSHEET ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Student Name: " << name << endl;

        cout << "\nMarks:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " : " << marks[i] << endl;
        }

        cout << fixed << setprecision(2);
        cout << "\nTotal Marks : " << total << " / 500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;

        if (grade == 'F')
            cout << "Result      : Fail" << endl;
        else
            cout << "Result      : Pass" << endl;
    }
};

int main()
{
    Marksheet student;

    student.input();
    student.calculate();
    student.display();

    return 0;
}