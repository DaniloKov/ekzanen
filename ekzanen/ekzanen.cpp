// ekzanen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//В одновимірному масиві, що складається з цілих елементів, обчислити номер максимального елемента масиву(функція);
//добуток елементів масиву, розташованих між першим і другим нульовими елементами.Перетворити масив таким чином, 
//щоб у першій його половині розташовувалися елементи, що стояли на непарних позиціях, а в другій половині − елементи, 
//що стояли на парних позиціях.

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Розмір масиву=";
    cin >> n;
    if (n <= 0) { cout << "Такий масив не можливо зобразити"; }
    else {
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "Введіть a[" << i << "]=";
            cin >> a[i];
        }
        //код для групування 
        for (int i = 1; i < n; i = i + 2) // пишемо всі числа на непарних місцях
        {
            cout << a[i] << " ";
        }
        cout << a[0] << " ";    //пишемо число на нульовому місці
        for (int i = 2; i < n; i = i + 2) // пишемо числа на парних місцях
        {
            cout << a[i] << " ";
        }

        //код для номера максимального числа
        int maxn = a[0], ind;
        for (int i = 0; i < n; i++) {
            if (maxn < a[i])
            {
                maxn = a[i];
                ind = i;
            }

        }

        cout << endl << "Найбільше число під номером - " << ind << endl;


        
        int zero1 = -1;
        int zero2 = -1;

        
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                if (zero1 == -1) {
                    zero1 = i;
                }
                else {
                    zero2 = i;

                }
            }
        }

        
        if (zero1 == -1 or zero2 == -1) {
            cout <<endl<< "В масиві немеє 2 нулів" <<endl;
            
        }
        else {

            int dob = 1;
            for (int i = zero1 + 1; i < zero2; i++) {
                dob *= a[i];
            }
            cout << endl <<"Добуток між двома нулями дорівнює - "<< dob;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
