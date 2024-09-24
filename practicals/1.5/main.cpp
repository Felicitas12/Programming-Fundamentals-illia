/**
 * Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initRandomizer() {
    // Ініціалізація генератора випадкових чисел з поточним часом
    srand(time(0));  // srand(time(NULL)) could also be used
}

int main() {
    // Задано послідовність значень А[n] і деяке значення P. Знайти індекс першого входження Р у послідовність А[n].

        initRandomizer();

       {

            int n;
            cout << "Введіть довжину послідовності: ";
            cin >> n;

            int* arr = new int[n];
            // Populate the array with random values
            for (int i = 0; i < n; i++) {
                arr[i] = rand() % 100;
            }

            // cout the array
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int p;
            cout << "Введіть значення P: ";
            cin >> p;

            int index = -1; // Initialize index to -1 to indicate not found
            for (int i = 0; i < n; i++) {
                if (arr[i] == p) {
                    index = i;
                    break; // Exit the loop once the first occurrence is found
                }
            }

            if (index != -1) {
                cout << "Перше входження значення " << p << " знаходиться на індексі " << index << endl;
            } else {
                cout << "Значення " << p << " не знайдено в послідовності." << endl;
            }

            delete[] arr;
            arr = nullptr;
       }
    //Задано послідовність значень А[n]. Знайти найменше значення серед додатних елементів послідовності А[n].
       {
            int n;
            cout << "Введіть довжину послідовності: ";
            cin >> n;

            int* arr = new int[n];
            // Populate the array with random values
            for (int i = 0; i < n; i++) {
                arr[i] = rand() % 100;
            }

            // cout the array
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int minPositive = INT_MAX; // Initialize minPositive to a large value
            for (int i = 0; i < n; i++) {
                if (arr[i] > 0 && arr[i] < minPositive) {
                    minPositive = arr[i];
                }
            }

            if (minPositive != INT_MAX) {
                cout << "Найменше додатне значення в послідовності становить: " << minPositive << endl;
            } else {
                cout << "Додатні значення не знайдено в послідовності." << endl;
            }

            delete[] arr;
            arr = nullptr;
       }
    // Задано послідовність значень А[n]. Знайти найбільше і найменше значення та поміняти їх місцями.
       {
            int n;
            cout << "Введіть довжину послідовності: ";
            cin >> n;

            int* arr = new int[n];
            // Заповнення масиву випадковими значеннями
            for (int i = 0; i < n; i++) {
                arr[i] = rand() % 100;
            }

            // Виводимо масив
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int min = arr[0];
            int max = arr[0];
            int minIndex = 0;
            int maxIndex = 0;

            for (int i = 1; i < n; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                    minIndex = i;
                }
                if (arr[i] > max) {
                    max = arr[i];
                    maxIndex = i;
                }
            }

            // Перестановка максимального і мінімального значень
            int temp = arr[minIndex];
            arr[minIndex] = arr[maxIndex];
            arr[maxIndex] = temp;

            cout << "Модифікований масив після перестановки максимального і мінімального значень: ;
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            delete[] arr;
            arr = nullptr;
       }
    return 0;
}
