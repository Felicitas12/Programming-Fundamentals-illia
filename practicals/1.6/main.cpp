#include <iostream>
#include <vector>

using namespace std;

vector<int> XOR(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back((a[i] != b[i]) ? 1 : 0);
    }
    return result;
}

int main() {

  //Перше завдання===================================
    {
        int A;
        cout << "Введіть ціле число A: ";
        cin >> A;

        int count_0 = 0;
        int count_1 = 0;

        while (A != 0) {
            if (A % 2 == 0) {
                count_0++;
            } else {
                count_1++;
            }
            A /= 2;
        }

        cout << "Кількість бітів 0: " << count_0 << endl;
        cout << "Кількість бітів 1: " << count_1 << endl;

        if (count_0 > count_1) {
            cout << "В двійковому поданні більше бітів 0." << endl;
        } else if (count_1 > count_0) {
            cout << "В двійковому поданні більше бітів 1." << endl;
        } else {
            cout << "Кількість бітів 0 та 1 однакова." << endl;
        }
    }
    //Дргуе завдання===================================

    {
        std::vector<int> a = {0, 1, 0, 1};
        std::vector<int> b = {1, 0, 1, 0};

        vector<int> result = XOR(a, b);

        cout << "Послідовність a: ";
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl;

        cout << "Послідовність b: ";
        for (int x : b) {
            cout << x << " ";
        }
        cout << endl;

        cout << "Результат XOR: ";
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}