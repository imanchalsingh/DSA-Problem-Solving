#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int> &number)
{
    int carry = 0;
    for (int i = 0; i < number.size(); i++)
    {
        int product = number[i] * 2 + carry;
        number[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        number.push_back(carry % 10);
        carry /= 10;
    }
}

int main()
{
    vector<int> number;
    number.push_back(1);

    for (int i = 1; i <= 1000; i++)
    {
        multiply(number);
    }

    int digitSum = 0;
    for (int digit : number)
    {
        digitSum += digit;
    }

    cout << "Sum of digits of 2^1000 is: " << digitSum << endl;

    return 0;
}
