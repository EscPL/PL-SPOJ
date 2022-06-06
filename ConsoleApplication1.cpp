#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--) {
        char pesel[11];
        int tab[11];

        for (int i = 0; i < 11; i++) {
            cin >> pesel[i];
            tab[i] = (int)pesel[i] - 48;
        }

        int sum = 0;
        sum += 1 * (tab[0] + tab[4] + tab[8] + tab[10]);
        sum += 3 * (tab[1] + tab[5] + tab[9]);
        sum += 7 * (tab[2] + tab[6]);
        sum += 9 * (tab[3] + tab[7]);

        if (sum % 10 == 0) cout << "D" << endl;
        else cout << "N" << endl;
    }
    return 0;
}