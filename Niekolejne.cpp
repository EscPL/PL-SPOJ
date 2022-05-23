#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number == 2 || number == 1) {
        cout << "NIE";
        return 0;
    }
    
    for (int i = 1; i <= number; i += 2) {
        cout << i << " ";
    }
    for (int i = 0; i <= number; i += 2) {
        cout << i << " ";
    }
    
    return 0;
}
