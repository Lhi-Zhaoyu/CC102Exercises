// TARRO, LANDIS ANGELO J.
// BSCS 1B

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const string originalFile = "original.txt";
    const string sortedFile = "sorted.txt";

    ofstream outFile(originalFile);
    if (!outFile.is_open()) {
        cerr << "Error: Could not open " << originalFile << " for writing.\n";
        return 1;
    }

    outFile << "One" << endl;
    outFile << "Two" << endl;
    outFile << "Three" << endl;
    outFile << "Four" << endl;
    outFile << "Five" << endl;
    outFile << "Six" << endl;

    outFile.close();

    ifstream inFile(originalFile);
    if (!inFile.is_open()) {
        cerr << "Error: Could not open " << originalFile << " for reading.\n";
        return 1;
    }

    vector<string> words;
    string line;
    while (getline(inFile, line)) {
        words.push_back(line);
    }

    inFile.close();

    sort(words.begin(), words.end());

    ofstream sortFile(sortedFile);
    if (!sortFile.is_open()) {
        cerr << "Error: Could not open " << sortedFile << " for writing.\n";
        return 1;
    }

    for (const string& word : words) {
        sortFile << word << endl;
    }

    sortFile.close();

    cout << "Created " << originalFile << ", sorted the contents, and wrote to " << sortedFile << ".\n";
    return 0;
}
