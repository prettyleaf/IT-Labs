#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <random>
#include <vector>
//#include <windows.h>
#include <algorithm>

using namespace std;



void Task01();
void Task02();
void Task03();
void Task04();
void Task05();
void Task06();
void Task07();
void Task08();
void Task09();
void Task10();
void Task11();
void Task12();
void Task13();
void obmenValues(int& a, int& b);
int sumArray(int* arr, int size);
void FillArray(int* const mas, const int size);
void ShowArray(const int* const mas, const int size);
int* getsNumber(int* arr, int size, int& newSize);
bool areStringsIdentical(const char* str1, const char* str2);

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int NumberTask;
    cout << "Введите номер задания(1-13)";
    cin >> NumberTask;
    if (NumberTask == 0)
    {
        exit;
    }
    else if (NumberTask == 1)
    {
        Task01();
    }
    else if (NumberTask == 2)
    {
        Task02();
    }
    else if (NumberTask == 3)
    {
        Task03();
    }
    else if (NumberTask == 4)
    {
        Task04();
    }
    else if (NumberTask == 5)
    {
        Task05();
    }
    else if (NumberTask == 6)
    {
        Task06();
    }
    else if (NumberTask == 7)
    {
        Task07();
    }
    else if (NumberTask == 8)
    {
        Task08();
    }
    else if (NumberTask == 9)
    {
        Task09();
    }
    else if (NumberTask == 10)
    {
        Task10();
    }
    else if (NumberTask == 11)
    {
        Task11();
    }
    else if (NumberTask == 12)
    {
        Task12();
    }
    else if (NumberTask == 13)
    {
        Task13();
    }
    else
    {
        cout << "Что-то на сложном..." << endl;
        exit;
    }

    return 0;
}

void FillArray(int* const mas, const int size)            // Заполняем ячейки массива
{
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 100;
    }
}

void ShowArray(const int* const mas, const int size)      // Вывод в консоль содержимое ячеек массива
{
    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << "\t";
    }
    cout << "\n";
}

void obmenValues(int& a, int& b) {
    int temp = a; // Сохраняем значение переменной a во временной переменной temp
    a = b; // Присваиваем a значение b
    b = temp; // Присваиваем b значение временной temp
}

int sumArray(int* arr, int size) {
    int sum = 0; // Инициализируем переменную sum нулем

    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Добавляем значение, на которое указывает arr + i, к переменной sum
    }

    return sum; // Возвращаем сумму
}

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



void Task01()
{
    int const size = 100;
    int* mas = new int[size];
    FillArray(mas, size);
    ShowArray(mas, size);
    delete[] mas;
}

void Task02()
{
    int const size = 100;
    int* mas = new int[size];
    FillArray(mas, size);

    int Sum = 0;

    for (int i = 0; i < size; i++) {
        Sum = Sum + mas[i];
    }
    int delta = Sum / 2;
    cout << delta << endl;
    delete[] mas;
}

void Task03()
{
    int const size = 100;
    int* mas = new int[size];
    FillArray(mas, size);

    int min = size;
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] < min) {
            min = mas[i];
        }
        else (max = mas[i]);
    }
    cout << "Минимальное: " << min << "\nМаксимальное: " << max << endl;
}

void Task04()
{
    int const size = 100;
    int* mas = new int[size];
    int finish = 0;
    int Number;
    cout << "Введите число до 100\n";
    cin >> Number;

    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 100;
        if (Number == mas[i])
        {
            cout << " Число " << mas[i] << " присутствует в массиве" << endl;
            int finish = 1;
        }
    }
    if (finish = 0) {
        cout << " Число " << Number << " не присутствует в массиве" << endl;
    }

    delete[] mas;
}

void Task05()
{
    int const size = 25;
    int* mas1 = new int[size];
    int* mas2 = new int[size];
    FillArray(mas1, size);
    FillArray(mas2, size);

    vector<int> sum;

    for (int i = 0; i < size; i++) {
        sum.push_back(mas1[i] + mas2[i]);
        cout << mas1[i] << " + " << mas2[i] << " = " << sum[i] << endl;
    }
    for (int i = 0; i < size; i++) {
        cout << sum[i] << "\t";
    }
    cout << "\n";

    delete[] mas1;
    delete[] mas2;
}

void Task06()
{
    int const size = 100;
    int* mas = new int[size];
    srand(time(NULL));
    vector<int> index;

    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 50;
        cout << i << " < index | number > " << mas[i] << endl; //debug
    }
    int number = 23; // ввод искомого номера
    for (int i = 0; i < size; i++)
    {
        if (number == mas[i])
        {
            index.push_back(i);
        }
    }
    if (index.empty() == true) {
        cout << "Такое число в массиве не сгенерировалось" << endl;
    }
    else {
        for (int i = 0; i < index.size(); i++) {
            cout << "Заданное число находится под индексом " << index[i] << endl;
        }
    }

    delete[] mas;
}

void Task07()
{
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int value_to_remove = 5;
    int index_to_remove = find(arr.begin(), arr.end(), value_to_remove) - arr.begin();
    if (index_to_remove != arr.size()) {
        arr.erase(arr.begin() + index_to_remove);
        cout << "Новый размер массива: " << arr.size() << endl;
    }
    else {
        cout << "Данное значение не найдено в массиве." << endl;
    }

}

void Task08()
{
    int size = 100;
    int* arr = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
    cout << "Массив случайных элементов: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
    delete[] arr;
}

void Task09()
{
    int array[] = { 1, 2, 3, 4, 5 }; // Исходный массив
    int arraySize = sizeof(array) / sizeof(array[0]); // Вычисляем размер массива

    int arraySum = sumArray(array, arraySize); // Вызываем sumArray для вычисления суммы

    cout << "Сумма элементов массива: " << arraySum << endl; // Вывод суммы элементов массива
}


void Task10()
{
    int x = 5;
    int y = 10;

    cout << "Исходные значения: x = " << x << ", y = " << y << endl;

    obmenValues(x, y); // Вызываем функцию для обмена значений

    cout << "После обмена: x = " << x << ", y = " << y << endl;
}

void Task11()
{
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
}

void Task12()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;

    int* evenArr = getsNumber(arr, size, newSize);

    for (int i = 0; i < newSize; i++) {
        cout << evenArr[i] << " "; // Выводим четные числа из нового массива
    }

    delete[] evenArr; // Освобождаем память, выделенную для нового массива
}

bool areStringsIdentical(const char* str1, const char* str2) {
    return strcmp(str1, str2) == 0;
}

void Task13()
{
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    cout << "Текста индентичны? " << boolalpha << areStringsIdentical(str1, str2) << endl;
}
