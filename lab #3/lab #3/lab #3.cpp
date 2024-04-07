

#include "lab #3.h"

using namespace std;

void Task01();
void Task02();
void Task03();
// void Task04();
// void Task05();
// void Task06();

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	
	char TaskNumber;
	cout << "Введите номер задания(1-6)";
	cin >> TaskNumber;
	switch (TaskNumber) {
	case '1': Task01(); break;
	case '2': Task02(); break;
	case '3': Task03(); break;
	// case '4': Task04();
	// case '5': Task05();
	// case '6': Task06();
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
		int p,S;
		for (int i = 1; i<=3; i++){
			cout << "Введите " << i << "-ую сторону: ";
			cin >> a.emplace_back();
		}
		p = (a[0]+a[1]+a[2])/2;
		S = sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
		cout << "Площадь по формуле Герона: " << S << endl;
	}