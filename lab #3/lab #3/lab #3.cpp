#include "lab #3.h"

using namespace std;

void Task01(); // lab 1 (3)
void Task02();
void Task03();
void Task04();
void Task05();
void Task06();
void Task07(); // lab 2 (4)
void Task08();
void Task09();
void Task10();
void Task11();
void Task12();
void Task13(); // lab 3 (5)
void Task14();
void Task15();
void Task16();
void Task17();
void Task18();

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int TaskNumber;
	cout << "Задания 1-6 - лаб. работа 1.\n 7-12 - работа 2.\n 13-18 работа 3.\n";
	cout << "Введите номер задания(1-18): ";
	cin >> TaskNumber;
	switch (TaskNumber) {
	case 1: Task01(); break; // lab 1 (3)
	case 2: Task02(); break;
	case 3: Task03(); break;
	case 4: Task04(); break;
	case 5: Task05(); break;
	case 6: Task06(); break;
	case 7: Task07(); break; // lab 2 (4)
	case 8: Task08(); break;
	case 9: Task09(); break;
	case 10: Task10(); break;
	case 11: Task11(); break;
	case 12: Task12(); break;
	case 13: Task13(); break; // lab 3 (5)
	case 14: Task14(); break;
	case 15: Task15(); break;
	case 16: Task16(); break;
	case 17: Task17(); break;
	case 18: Task18(); break;
	}

	return 0;
}
void Task01()
{
	vector<int> R;
	int amount;
	cout << "Кол-во сопротивлений? : ";
	cin >> amount;
	for (int i = 1; i <= amount; i++) {
		cout << "Введите " << i << "-ое сопротивление: ";
		cin >> R.emplace_back();
	}
	int R_ = 0;
	for (int i = 0; i < amount; i++) {
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
	for (int i = 1; i <= 3; i++) {
		cout << "Введите " << i << "-ую сторону: ";
		cin >> a.emplace_back();
	}
	p = (a[0] + a[1] + a[2]) / 2;
	S = sqrt(p * (p - a[0]) * (p - a[1]) * (p - a[2]));
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
		Task05();
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
void Task07()
{
	int a, b, n;
	cout << "Введите стоимость пирожка в рублях (A): \n";
	cin >> a;
	cout << "Введите стоимость пирожка в копейках (B): \n";
	cin >> b;
	cout << "Введите кол-во пирожков (N): \n";
	cin >> n;
	if (a < 0 || b < 0 || n < 0) {
		cout << "Используйте только положительные числа!\n";
		Task07();
	}

	int total_amount = (a * 100 + b) * n;
	int rubles = total_amount / 100;
	int cents = total_amount % 100;

	cout << "Стоимость покупки: " << rubles << " рублей и " << cents << " копеек"<< endl;
}
void Task08()
{
	int n;
	cout << "Введите число N: \n";
	cin >> n;

	int hours = n / 3600;
	int minutes = (n % 3600) / 60;
	int seconds = (n % 3600) % 60;
	// приписывается 0 если итоговое число меньше 10, т.е. не двузначное чтобы всё было по условию задачи
	cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << endl;
}
void Task09()
{
	int velocity, time;
	cout << "Введите скорость V: \n";
	cin >> velocity;
	// rule check for entered velocity
	if (velocity < -1000 || velocity > 1000) {
		cout << "Пожалуйста, придерживайтесь условия задачи: -1000 <= V <= 1000 !!!\n";
		Task09();
	}
	cout << "Введите время T: \n";
	cin >> time;
	// rule check for entered time
	if (time > 1000 || time < 0) {
		cout << "Пожалуйста, придерживайтесь условия задачи: 0 <= T <= 1000 !!!\n";
		Task09();
	}
	int distance = velocity * time;
	int result = distance % 109;
	if (velocity < 0) {
		result = (109 - result) % 109;
	}
	cout << "Вася остановился на отметке: " << result << endl;
}
void Task10() {
	int year;
	cout << "Введите год: ";
	cin >> year;

	bool LeapYear;
	if (year % 4 == 0 && year % 100 != 0) {
		LeapYear = true;
	}
	else {
		LeapYear = false;
	}

	if (LeapYear) {
		cout << year << " год является високосным. В этом году 366 дней.\n" << endl;
	}
	else {
		cout << year << " год НЕ является високосным. В этом году 365 дней.\n" << endl;
	}
}
void Task11() { /* http://chessknigi.ru/chess-article/kak-hodit-ladja.html */
	int x1, y1;
	cout << "Введите координаты первой клетки (X,Y): \n";
	cin >> x1 >> y1;
	// проверка, в пределах ли доски
	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) {
		cout << "Клетка вне предела доски!\n";
		Task11();
	}
	int x2, y2;
	cout << "Введите координаты второй клетки (X,Y): \n";
	cin >> x2 >> y2;
	// проверка, в пределах ли доски
	if (x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
		cout << "Клетка вне предела доски!\n";
		Task11();
	}

	// передвижение возможно, при условии, что x || y = const, иначе движение идет под углом, что невозможно
	if (y1 == y2 || x1 == x2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
void Task12() {
	int length, width, amount;
	cout << "Введите длину, ширину и количество долек: \n";
	cin >> length >> width >> amount;

	if (length <= 0 || width <= 0 || amount <= 0) {
		cout << "Таких шоколадок не бывает, увы.\n";
		Task12();
	}

	int length_cut = length / 2;
	int width_cut = width / 2;

	if ((length_cut - amount) >= 1) {
		cout << "Length - YES" << endl;
	}
	else {
		cout << "Length - NO" << endl;
	}
	
	if ((width_cut - amount) >= 1) {
		cout << "Width - YES" << endl;
	}
	else {
		cout << "Width - NO" << endl;
	}


	/*// length || width check
	if (length % amount == 0 || width % amount == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}*/
}
void Task13() {
	for (int i = 0; i < 100; ++i) {
		int last_digit = i % 10;
		if (last_digit != 5 && last_digit != 8) {
			cout << i << endl;
		}
	}
}
void Task14() {
	double operation(int N);
	int N = 0;
	cout << "Введите N: " << endl;
	cin >> N;
	float number = operation(N);
	cout << number << endl;
}
double operation(int N) {
		float number;
		int i = 1;
		while (true) {
		float test = (float)1/i;
		number = number+test;
		i++;
		if (number > N) {
			return number;
		}
	}
	}

void Task15() {
	int size, num;
	string values;
	// cin >> size; // нужен ли размер массива если мы используем вектор??
	cin >> values;
	getline(cin, values); // тот же самый ввод строки поскольку cin не воспринимает пробелы
	stringstream ss(values); 
	vector<int> array/*(size)*/;
	while ( ss >> num )
  	array.push_back( num );
	for (auto n : array) {
		if (n%2==0){
        cout << n << " ";
    }
	}
}

void Task16(){
	int size, num;
	string values;
	// cin >> size; // нужен ли размер массива если мы используем вектор??
	cin >> values;
	getline(cin, values); // тот же самый ввод строки поскольку cin не воспринимает пробелы
	stringstream ss(values); 
	vector<int> array/*(size)*/;
	while ( ss >> num )
  	array.push_back( num );
	if (is_sorted(array.begin(), array.end()) == true){
		cout << "По возрастанию" << endl;
	} else cout << "Не по возрастанию" << endl;
}

void Task17(){
	int size, num, min;
	string values;
	// cin >> size; // нужен ли размер массива если мы используем вектор??
	cin >> values;
	getline(cin, values); // тот же самый ввод строки поскольку cin не воспринимает пробелы
	stringstream ss(values); 
	vector<int> array/*(size)*/;
	while ( ss >> num )
  	array.push_back( num );
	for (auto n : array) {
	if (array[n] > 0 && array[n] > *min_element(array.begin(), array.end())){ // max_element предоставлен библиотекой STL
	min = *min_element(array.begin(), array.end());
	}
	cout << min << endl;
}
}

void Task18() {
	int size, num;
	string values;
	// cin >> size; // нужен ли размер массива если мы используем вектор??
	cin >> values;
	getline(cin, values); // тот же самый ввод строки поскольку cin не воспринимает пробелы
	stringstream ss(values);
	vector<int> array/*(size)*/;
	while (ss >> num)
		array.push_back(num);
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > 0) {
				if (array[j + 1] < 0) {
					int temp;
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
	}
}