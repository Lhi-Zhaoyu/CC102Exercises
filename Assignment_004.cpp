// TARRO, LANDIS ANGELO J.
// BSCS 1B

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const string sourceFileName = "color.txt";
    const string copyFileName = "color_copy.txt";

    ofstream outFile(sourceFileName);
    if (!outFile.is_open()) {
        cerr << "Error: Could not open " << sourceFileName << " for writing.\n";
        return 1;
    }

    outFile << "Red" << endl;
    outFile << "Blue" << endl;
    outFile << "Green" << endl;
    outFile << "Yellow" << endl;
    outFile << "Purple" << endl;

    outFile.close();

    ifstream inFile(sourceFileName);
    if (!inFile.is_open()) {
        cerr << "Error: Could not open " << sourceFileName << " for reading.\n";
        return 1;
    }

    ofstream copyFile(copyFileName);
    if (!copyFile.is_open()) {
        cerr << "Error: Could not open " << copyFileName << " for writing.\n";
        inFile.close();
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        copyFile << line << endl;
    }

    inFile.close();
    copyFile.close();

    cout << "Created " << sourceFileName << " and copied its contents to " << copyFileName << ".\n";
    return 0;
}

