/**
 * Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        float a = 42.6;
        float b = 3.0;
        int c = 12;
        int d = 79;


        bool res = ((a != b) && (!(c >= d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int a = 55;
        int b = 55;
        int c = 110;
        int d = 112;


        bool res = ((a != b) && (!(c >= d)));
        cout << "res: " << boolalpha << res << endl;
    }



    int A = 9872; // from table 12
    int B = 29;
    int C = 54.12f;
    int D = 6;
    int E = -11234;

    bool res = (A & ~B * -C) == ((D * E) << sizeof(long));
    cout << "res: " << boolalpha << res << endl;

    return 0;
}