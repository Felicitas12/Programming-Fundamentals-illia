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
    // Seed the random number generator with the current time
    srand(time(0));  // srand(time(NULL)) could also be used
}

int main() {
    // Задано послідовність значень А[n] і деяке значення P. Знайти індекс першого входження Р у послідовність А[n].

        initRandomizer();

       {

            int n;
            cout << "Enter the length of the sequence: ";
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
            cout << "Enter the value P: ";
            cin >> p;

            int index = -1; // Initialize index to -1 to indicate not found
            for (int i = 0; i < n; i++) {
                if (arr[i] == p) {
                    index = i;
                    break; // Exit the loop once the first occurrence is found
                }
            }

            if (index != -1) {
                cout << "The first occurrence of " << p << " is at index " << index << endl;
            } else {
                cout << "Value " << p << " not found in the sequence." << endl;
            }

            delete[] arr;
            arr = nullptr;
       }
    //Задано послідовність значень А[n]. Знайти найменше значення серед додатних елементів послідовності А[n].
       {
            int n;
            cout << "Enter the length of the sequence: ";
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
                cout << "The smallest positive value in the sequence is: " << minPositive << endl;
            } else {
                cout << "No positive values found in the sequence." << endl;
            }

            delete[] arr;
            arr = nullptr;
       }
    // Задано послідовність значень А[n]. Знайти найбільше і найменше значення та поміняти їх місцями.
       {
            int n;
            cout << "Enter the length of the sequence: ";
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

            // Swap the maximum and minimum values
            int temp = arr[minIndex];
            arr[minIndex] = arr[maxIndex];
            arr[maxIndex] = temp;

            cout << "The modified array after swapping the maximum and minimum values: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            delete[] arr;
            arr = nullptr;
       }
    return 0;
}
