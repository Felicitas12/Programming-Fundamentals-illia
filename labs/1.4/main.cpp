/**
 * Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
 * Lab 1.4
 */

#include <iostream>

using namespace std;

int main() {
    unsigned short usVar1;
    int iVar2;
    float fVar3;
    double dbVar4;

    // Опис вказівних змінних відповідних типів
    unsigned short *pt_us;
    int *pt_i;
    float *pt_f;
    double *pt_db;

    // Опис нетипізованої вказівної змінної
    void *pV;

    // Ініціювання вказівних змінних адресами змінних
    pt_us = &usVar1;
    pt_i = &iVar2;
    pt_f = &fVar3;
    pt_db = &dbVar4;

    // Ініціювання змінних, використовуючи операцію розіменування вказівних змінних
    *pt_us = 10;
    *pt_i = -528;
    *pt_f = 654.9962;
    *pt_db = -4.5e25;

    // Визначення розміру всіх змінних
    const int size_us = sizeof(usVar1);
    const int size_i = sizeof(iVar2);
    const int size_f = sizeof(fVar3);
    const int size_db = sizeof(dbVar4);

    const int size_pt_us = sizeof(usVar1);
    const int size_pt_i = sizeof(iVar2);
    const int size_pt_f = sizeof(fVar3);
    const int size_pt_db = sizeof(dbVar4);

    // Ініціювання нетипізованої вказівної змінної адресами типізованих вказівних змінних
    pV = &fVar3;

    return 0;


}