#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--) {
        char pesel[11];
        int digits[11];

        for (int i = 0; i < 11; i++) {
            cin >> pesel[i];
            digits[i] = (int)pesel[i] - 48;
        }

        int sum = 0;
        sum += 1 * (digits[0] + digits[4] + digits[8] + digits[10]);
        sum += 3 * (digits[1] + digits[5] + digits[9]);
        sum += 7 * (digits[2] + digits[6]);
        sum += 9 * (digits[3] + digits[7]);

        if (sum > 0 && sum % 10 == 0) cout << "D" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
