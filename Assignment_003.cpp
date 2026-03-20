// TARRO, LANDIS ANGELO J.
// BSCS 1B

#include <iostream>
using namespace std;

// STUDENT STRUCT
struct studentStruct {
    int studentID;
    string name;
    string course;
    double gpa;
};

// CHECKS ID IF THERE IS DUPLICATE
bool CHECK_ID(studentStruct s[], int index) {
    for (int i = 0; i < index; i++) {
        if (s[index].studentID == s[i].studentID) {
            return true;
        }
    }
    return false;
}

// INPUT STUDENTS
void input(studentStruct s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << "Student " << i + 1 << endl;

        do {
            cout << "Enter Student ID: ";
            cin >> s[i].studentID;
            cin.ignore();

            if (CHECK_ID(s, i)) {
                cout << "Student ID already exists!\n";
            }
        } while (CHECK_ID(s, i));

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Course: ";
        getline(cin, s[i].course);

        cout << "Enter GPA: ";
        cin >> s[i].gpa;
        cin.ignore();
    }
}

// DISPLAY FUNCTION
void displayGrid(studentStruct s[], int n) {
    cout << endl;
    cout << "ID\tName\tCourse\tGPA\tStanding" << endl;

    for (int i = 0; i < n; i++) {
        string standing;

        if (s[i].gpa >= 90 && s[i].gpa <= 100)
            standing = "Excellent";
        else if (s[i].gpa >= 80)
            standing = "Very Good";
        else if (s[i].gpa >= 70)
            standing = "Good";
        else if (s[i].gpa >= 60)
            standing = "Passing";
        else
            standing = "Failed";

        cout << s[i].studentID << "\t" << s[i].name << "\t" << s[i].course << "\t" << s[i].gpa << "\t" << standing << endl;
    }
}

// MAIN
int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    studentStruct student[100]; 

    input(student, n);
    displayGrid(student, n);

    return 0;
}