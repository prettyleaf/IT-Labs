#include "lab #3.h"

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
	cout << "Введите номер задания(1-6): ";
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
		vector<int> R;
		int amount;
		cout << "Кол-во сопротивлений? : ";
		cin >> amount;
		for (int i = 1; i<=amount; i++){
			cout << "Введите " << i << "-ое сопротивление: ";
			cin >> R.emplace_back();
		}
		int R_ = 0;
		for (int i = 0; i<amount; i++){
			R_ = R_ + R[i];
		}
		cout << (R_ / amount) << endl;
	}
void Task02()
	{
		int a, square, volume;
		cout << "Длина ребра куба? : ";
		cin >> a;
		square = pow(a, 2);
		volume = pow(a, 3);
		cout << "Площадь: " << square << ", Объём:  " << volume << endl;
	}
void Task03()
	{
		vector<int> a;
		int p = 0;
		int S = 0;
		for (int i = 1; i<=3; i++){
			cout << "Введите " << i << "-ую сторону: ";
			cin >> a.emplace_back();
		}
		p = (a[0]+a[1]+a[2])/2;
		S = sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
		cout << "Площадь по формуле Герона: " << S << endl;
	}
void Task04()
	{
	for (int num = 0; num < 3; num++) {
			// 10 случайных чисел в диапазоне от 0 до 20000 и делим их на 10000, чтобы получить значения в интервале
			double result = (1.0 + (rand() % 100001)) / 10000;
			cout << result << "- Взятое число\n";
			if (result > 1 && result < 3) {
				cout << "Число - " << result << " - included!\n";
			}
			else cout << "Число - " << result << " - not included!\n";
		}

	}
void Task05()
	{
		double x, y;
		cout << "Введите X: \n";
		cin >> x;
		cout << "Введите Y: \n";
		cin >> y;
		if (x == y) {
			cout << "Используйте не одинаковые числа!\n";
			exit(0);
		}
		double min, max;
		if (x < y) {
			min = x;
			max = y;
		}
		else {
			min = y;
			max = x;
		}
		min = (min + max) / 2;
		max = 2 * min * max;
		cout << "X = " << min << endl;
		cout << "Y = " << max << endl;
	}
void Task06()
	{
		double x, y, z;
		cout << "Введите длины сторон треугольника (x, y, z): \n";
		cin >> x >> y >> z;
		// правило: большая сторона меньше суммы двух других сторон
		bool triangle_rule = false;
		if (x + y > z && x + z > y && y + z > x) {
			triangle_rule = true;
		}
		if (triangle_rule) {
			cout << "СУЩЕСТВУЕТ!\n" << endl;
		}
		else {
			cout << "Такого треугольника существовать не может.\n" << endl;
		}
	}
