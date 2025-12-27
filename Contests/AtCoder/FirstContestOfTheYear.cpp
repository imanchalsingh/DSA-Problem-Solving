#include <iostream>

using namespace std;

int main()
{
    int D, F;
    if (!(cin >> D >> F))
        return 0;
    int days_passed_after_first_contest = ((D - F) / 7) * 7;
    int last_contest_day = F + days_passed_after_first_contest;
    int next_year_contest = (last_contest_day + 7) - D;

    cout << next_year_contest << endl;

    return 0;
}
