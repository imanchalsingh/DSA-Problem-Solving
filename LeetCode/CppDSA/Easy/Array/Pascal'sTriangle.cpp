#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++)
        {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }

        result.push_back(row);
    }

    for (const auto &row : result)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
