//TARRO, LANDIS ANGELO J.
//BSCS 1B

#include <bits/stdc++.h>
using namespace std;

int main(){

    int students;
    int quizzes;
    char rerun;

    do{
    
    cout << "Enter Number of Students: ";
    cin >> students;

    cout << "Enter Number of Quizzes per Student: ";
    cin >> quizzes;

    int scores[students][quizzes];

    for (int i = 0; i < students; i++) {
            cout << "\nStudent " << i + 1 << ":\n";
            for (int j = 0; j < quizzes; j++) {
                cout << "  Quiz " << j + 1 << ": ";
                cin >> scores[i][j];
            }
        }



        cout << "\nStudent\t\t";
        for (int j = 0; j < quizzes; j++)
            cout << "Quiz " << j + 1 << "\t";
        cout << "Average\n";



        cout << "\t\t";
        for (int j = 0; j < quizzes; j++)
            cout << "\t";
        cout << "\n";


       
        for (int i = 0; i < students; i++) {
            double sum = 0;
            for (int j = 0; j < quizzes; j++)
                sum += scores[i][j];
            double avg = sum / quizzes;

            cout << "Student " << i + 1 << "\t";
            for (int j = 0; j < quizzes; j++)
                cout << scores[i][j] << "\t";
            cout << avg << "\n";
        }
    
    cout << endl;
    cout << "Repeat? [y/Y]: ";
    cin >> rerun;   

    } while (tolower(rerun) == 'y');
}
