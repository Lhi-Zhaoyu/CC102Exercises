//TARRO, LANDIS ANGELO J.
//BSCS 1B

#include<bits/stdc++.h>
using namespace std;

int main() {
    char rerun;

    do {
        double sales[5][4] = {0};

        int salesperson, product;
        double amount;
        char choice;

        do {
            cout << "Enter Salesperson (1-4): ";
            cin >> salesperson;
            cout << "Enter Product (1-5): ";
            cin >> product;
            cout << "Enter Amount: ";
            cin >> amount;

            sales[product - 1][salesperson - 1] += amount;

            cout << "Add more? [y/Y]: ";
            cin >> choice;
        } while (tolower(choice) == 'y');



        cout << "\n";
        cout << "Product\t\tSP 1\t\tSP 2\t\tSP 3\t\tSP 4\t\tTotal\n";

        double colTotal[4] = {0};
        double grandTotal = 0;

        for (int i = 0; i < 5; i++) {
            double rowTotal = 0;

            cout << "Product " << i + 1 << "\t";
            cout << sales[i][0] << "\t\t";
            cout << sales[i][1] << "\t\t";
            cout << sales[i][2] << "\t\t";
            cout << sales[i][3] << "\t\t";

            rowTotal = sales[i][0] + sales[i][1] + sales[i][2] + sales[i][3];
            cout << rowTotal << "\n";

            colTotal[0] += sales[i][0];
            colTotal[1] += sales[i][1];
            colTotal[2] += sales[i][2];
            colTotal[3] += sales[i][3];

            grandTotal += rowTotal;
        }



        cout << "Total\t\t";
        cout << colTotal[0] << "\t\t";
        cout << colTotal[1] << "\t\t";
        cout << colTotal[2] << "\t\t";
        cout << colTotal[3] << "\t\t";
        cout << grandTotal << "\n";



        cout << "\nRepeat? [y/Y]: ";
        cin >> rerun;
    } while (tolower(rerun) == 'y');
}