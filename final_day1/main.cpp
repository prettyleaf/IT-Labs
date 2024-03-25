#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <vector>
#include <windows.h>

using namespace std;

void task1() {
}    
    int sum_array(int* arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
    void func1()
    {
        int size2 = 8;
        int* arr = new int[size2];
        for (int i = 0; i < size2; ++i) {
            arr[i] = rand() % 100;
        }
        int sum = sum_array(arr, size2);
        cout << sum << endl;
        delete[] arr;
    }



int main() {
    SetConsoleCP(1251); // ru localization 
    SetConsoleOutputCP(1251); // ru localization 
    func1();
    return 0;
}
