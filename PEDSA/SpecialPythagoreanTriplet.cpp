#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    for (a = 1; a < 1000; ++a) {
        for (b = a + 1; b < 1000 - a; ++b) {
            c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                cout << "Triplet found: a = " << a << ", b = " << b << ", c = " << c << endl;
                cout << "Product abc = " << a * b * c << endl;
                return 0;
            }
        }
    }

    cout << "No triplet found." << endl;
    return 0;
}
