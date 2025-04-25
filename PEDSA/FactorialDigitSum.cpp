#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int>& number, int x) {
    int carry = 0;
    for (int i = 0; i < number.size(); i++) {
        int product = number[i] * x + carry;
        number[i] = product % 10;
        carry = product / 10;
    }

    while (carry) {
        number.push_back(carry % 10);
        carry /= 10;
    }
}

int factorialDigitSum(int n) {
    vector<int> result = {1};

    for (int i = 2; i <= n; i++) {
        multiply(result, i);
    }

    int sum = 0;
    for (int digit : result) {
        sum += digit;
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = factorialDigitSum(n);
    cout << "Sum of digits in " << n << "! is: " << sum << endl;

    return 0;
}
