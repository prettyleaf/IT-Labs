#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL)); //генератор случайных чисел

	int size; // запрос у пользователя размер массива
	cout << "Введите размер массива: " << endl;
	cin >> size;

		int* array = new int[size]; // динамически выделить память для массива
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}

	//вывод массива

	cout << "массив: \n"; // заполнить массив случайными числами
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	//очистка выделенной памяти

	delete[] array;
	return 0;
}