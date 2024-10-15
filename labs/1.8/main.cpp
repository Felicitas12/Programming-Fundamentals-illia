#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        cout << "Loop iteration: " << i << endl;
    }

    int a = -87, b = 511, c = 183;
    if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is greater than or equal to b" << endl;
    }

    int option = 1;
    switch (option) {
        case 1:
            cout << "Option 1 selected" << endl;
        break;
        case 2:
            cout << "Option 2 selected" << endl;
        break;
        default:
            cout << "Other option" << endl;
    }

    int counter = 1;
    int op1 = 100, op2 = -8, op3 = 132, op4 = 125;

    counter++;
    cout << "Counter after increment: " << counter << endl;

    if ((op1 & op2) < op3) {
        cout << "Result of (op1 & op2) < op3: True" << endl;
    } else {
        cout << "Result of (op1 & op2) < op3: False" << endl;
    }

    if ((op1 & op4) < op3) {
        cout << "Result of (op1 & op4) < op3: True" << endl;
    } else {
        cout << "Result of (op1 & op4) < op3: False" << endl;
    }

    cout << "100 & -8 = " << (op1 & op2) << endl;
    cout << "100 & 125 = " << (op1 & op4) << endl;

    return 0;
}
