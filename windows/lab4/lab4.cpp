#include "lab4.h"

using namespace std;

void Task01();
void Task02();
void Task03();
void Task04();
void Task05();
void Task06();

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	char TaskNumber;
	cout << "Введите номер задания(1-6): \n";
	cin >> TaskNumber;
	switch (TaskNumber) {
	case '1': Task01(); break;
	case '2': Task02(); break;
	case '3': Task03(); break;
	case '4': Task04(); break;
	case '5': Task05(); break;
	case '6': Task06(); break;
	}

	return 0;
}
void Task01()
{
	int a, b, n;
	cout << "Введите кол-во рублей (A): \n";
	cin >> a;
	cout << "Введите кол-во копеек (B): \n";
	cin >> b;
	cout << "Введите кол-во пирожков (N): \n";
	cin >> n;
	if (a < 1 || b < 1 || n < 1) {
		cout << "Используйте только положительные числа!\n";
		exit(0);
	}

	int total_amount = (a * 100 + b) * n;
	int rubles = total_amount / 100;
	int cents = total_amount % 100;

	cout << "Стоимость покупки: " << rubles << "рублей и " << cents << "копеек";
}