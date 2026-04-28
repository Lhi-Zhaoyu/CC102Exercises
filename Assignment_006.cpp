// TARRO, LANDIS ANGELO J.
// BSCS 1B

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n < 2){
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    int count = 0;

    fstream file("NUM.txt");
    cout << "Prime numbers found: " << endl;

    while (file >> num) {
        if (isPrime(num)) {
            cout << num << " is prime" << endl;
            count++;
        }
    }

    cout << "\nTotal primes found: " << count << endl;

    file.close();
    return 0;
}
