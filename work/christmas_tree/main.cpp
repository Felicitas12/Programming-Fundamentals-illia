/**
* Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups
 
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main () {

/*. 
Задано ціле значення А. Визначити, яких бітів (0 чи 1)
більше в його двійковому поданні.
*/

int a = 5;
int ones = 0;  
int zeros = 0;
cout << "Число 5 у двійковій системі: " <<bitset<8>(a) << endl;

for (int i = 0; i<8; i++){
    if ( a & (1 << i)) {
        ones++;
        }
        else {
             zeros++; 
            }

    }
    cout << "Кількість одиниць: " << ones << endl;
    cout << "Кількість нулів: " << zeros << endl;

    if (ones > zeros) {
        cout << "Одиниць більше." << endl;
        } 
        else if (zeros > ones) {
        cout << "Нулів більше." << endl;
            } 
            else {
        cout << "Кількість нулів і одиниць однакова." << endl;
    }

     {
    /**
     * 2. Задано дві послідовності, які складаються з 0 та 1.
Скласти специфікацію для моделювання операцій XOR.
     */

    vector<int> arr = {0, 0, 1, 0};
    vector<int> arr1 = {0, 1, 0, 1,};

    int minSize = min(arr.size(), arr1.size());
    vector<int> arr2 (minSize);

    // Виконання операції XOR

    for (int i = 0; i < minSize; ++i) {
        arr2[i] = arr[i] ^ arr1[i];
         }
         cout << "Результат XOR: ";

        for (int i = 0; i < minSize; ++i) {
        cout << arr2[i] << endl;
         }
         return 0;

     }


 }