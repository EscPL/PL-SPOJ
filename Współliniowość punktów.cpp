#include <iostream>
using namespace std;

void check_collinearity(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    if (Ax == Bx || Ax == Cx || Bx == Cx) {
        if (Ax == Bx && Ax == Cx) {
            cout << "TAK" << endl;
            return;
        }
        else {
            cout << "NIE" << endl;
            return;
        }
    }
    float a1, a2, a3;
    a1 = (Ay - By) / (Ax - Bx);
    a2 = (Ay - Cy) / (Ax - Cx);
    a3 = (By - Cy) / (Bx - Cx);

    if (a1 == a2 && a1 == a3) cout << "TAK" << endl;
    else cout << "NIE" << endl;
}

int main()
{
    int test;
    cin >> test;

    while (test--) {
        float Ax, Ay, Bx, By, Cx, Cy;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

        check_collinearity(Ax, Ay, Bx, By, Cx, Cy);
    }
    return 0;
}
