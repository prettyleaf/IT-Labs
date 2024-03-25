// Задача 2
#include <iostream>

// Функция для вычисления суммы элементов массива
int sumArray(int* arr, int size) {
    int sum = 0; // Инициализируем переменную sum нулем

    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Добавляем значение, на которое указывает arr + i, к переменной sum
    }

    return sum; // Возвращаем сумму
}

int main() {
    int array[] = { 1, 2, 3, 4, 5 }; // Исходный массив
    int arraySize = sizeof(array) / sizeof(array[0]); // Вычисляем размер массива

    int arraySum = sumArray(array, arraySize); // Вызываем sumArray для вычисления суммы

    std::cout << "Сумма элементов массива: " << arraySum << std::endl; // Вывод суммы элементов массива

    return 0;
}

// Задача 3
#include <iostream>

// Функция для обмена значений двух переменных с использованием ссылок
void obmenValues(int& a, int& b) {
    int temp = a; // Сохраняем значение переменной a во временной переменной temp
    a = b; // Присваиваем a значение b
    b = temp; // Присваиваем b значение временной temp
}

int main() {
    int x = 5; 
    int y = 10; 

    std::cout << "Исходные значения: x = " << x << ", y = " << y << std::endl;

    obmenValues(x, y); // Вызываем функцию для обмена значений

    std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

    return 0;
}

// Задача 4
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    char* arr = new char[size];

    cout << "Введите " << size << " символов: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Массив задом наперед: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i];
    }

    delete[] arr;

    return 0;
}

// Задача 5 
#include <iostream>

int* getsNumber(int* arr, int size, int& newSize) {
    int* evenArr = new int[size]; // Создаем новый массив для четных чисел
    newSize = 0; // Инициализация нового размера массива

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { // Проверяем, является ли текущее число четным
            evenArr[newSize] = arr[i]; // Если да, добавляем его в новый массив
            newSize++; // Увеличиваем размер нового массива
        }
    }

    return evenArr; 
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;

    int* evenArr = getsNumber(arr, size, newSize);

    for (int i = 0; i < newSize; i++) {
        std::cout << evenArr[i] << " "; // Выводим четные числа из нового массива
    }

    delete[] evenArr; // Освобождаем память, выделенную для нового массива

    return 0;
}

//Задача 6
#include <iostream>
#include <cstring>

bool areStringsIdentical(const char* str1, const char* str2) {
    return std::strcmp(str1, str2) == 0;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    std::cout << "Тексты индентичны? " << std::boolalpha << areStringsIdentical(str1, str2) << std::endl;
    return 0;
}