// TARRO, LANDIS ANGELO J.
// BSCS 1B

#include <iostream>
using namespace std;

// GRADE POINTER FUNCTION
void analyzeGrades(int *matrix, int students, int subjects) {

    cout << "\nGrade Matrix:\n";

    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            cout << *(matrix + i * subjects + j) << "\t";
        }
        cout << endl;
    }

    // AVERAGE
    cout << "\nAverage Grade per Student:\n";

    for(int i = 0; i < students; i++) {
        int sum = 0;

        for(int j = 0; j < subjects; j++) {
            sum += *(matrix + i * subjects + j);
        }

        double average = (double)sum / subjects;
        cout << "Student " << i + 1 << ": " << average << endl;
    }

    // HIGHEST GRADE
    int highest = *matrix;

    for(int i = 0; i < students * subjects; i++) {
        if(*(matrix + i) > highest) {
            highest = *(matrix + i);
        }
    }

    cout << "\nHighest Grade in the Matrix: " << highest << endl;
}


// MAIN
int main() {
    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    int grades[students][subjects];

    cout << "\nEnter grades:\n";
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            cout << "Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    analyzeGrades(&grades[0][0], students, subjects);

    cout << endl;
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            cout <<  grades[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
