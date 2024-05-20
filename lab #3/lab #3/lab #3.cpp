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
void Task19(); // lab 4 (6)
void Task20();
void Task21();
void Task22();
void Task26(); // lab 5 (7)
void Task27();
void Task28();
void Task29();
void Task30();
void Task31();
void Task32();

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int TaskNumber;
	cout << "Задания 1-6 - лаб. работа 1.\n7-12 - лаба 2.\n13-18 лаба 3.\n19-25 лаба 4.\n26-32 лаба 5." << endl;
	cout << "Введите номер задания(1-18): " << endl;
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
	case 19: Task19(); break; // lab 4 (6)
	case 20: Task20(); break;
	case 21: Task21(); break;
	case 22: Task22(); break;
	case 26: Task26(); break; // lab 5 (7)
	case 27: Task27(); break;
	case 28: Task28(); break;
	case 29: Task29(); break;
	case 30: Task30(); break;
	case 31: Task31(); break;
	case 32: Task32(); break;
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
	int n;
	cout << "Введите кол-во элементов массива: \n" << endl;
	cin >> n;
	vector<int> arr(n);
	cout << "Задайте значения элементов:" << endl;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i += 2) {
		cout << arr[i] << " ";
	}
}

void Task16() {
	int n;
	cout << "Введите кол-во элементов массива: \n" << endl;
	cin >> n;
	vector<int> array(n);
	cout << "Задайте значения элементов:" << endl;
	for (int i = 0; i < n; ++i) {
		cin >> array[i];
	}
	if (is_sorted(array.begin(), array.end()) == true){
		cout << "По возрастанию" << endl;
	} else cout << "Не по возрастанию" << endl;
}

void Task17() {
	int n;
	cout << "Введите кол-во элементов массива: \n" << endl;
	cin >> n;
	vector<int> array(n);
	cout << "Задайте значения элементов:" << endl;
	for (int i = 0; i < n; ++i) {
		cin >> array[i];
	}

	int min_positive = INT_MAX; // максимальное значение int как начальное значение

	for (int i = 0; i < n; i++) {
		if (array[i] > 0 && array[i] < min_positive) {
			min_positive = array[i]; // если элемент положительный и < минимального положительного, меняем значение на этот элемент
		}
	}

	if (min_positive == INT_MAX) { // если ни один элемент не был положительным, выведем сообщение
		cout << "В массиве нету положительных элементов! " << endl;
	}
	else {
		cout << "Наименьший положительный элемент: " << min_positive << endl;
	}
}

void Task18() {
	int n;
	cout << "Введите кол-во элементов массива: \n" << endl;
	cin >> n;
	vector<int> arr(n);
	cout << "Задайте массив:" << endl;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int last = arr[n - 1]; // сохранение последнего элемента. да, костыль, и что?
	for (int i = n - 1; i > 0; --i) {
		arr[i] = arr[i - 1]; // сдвиг вправо на один
	}
	arr[0] = last; // последний элемент на первую позицию

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
}

bool funcXOR(bool x, bool y) {
	return x != y;
}

void Task19() {
	bool x, y;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "Введите значение y: ";
	cin >> y;
	cout << "x XOR y = " << funcXOR(x, y) << endl;
}

bool vowel(char letter) {
	letter = tolower(letter); // преобразование в строчную букву
	switch (letter) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
	}
}

void Task20() {
	char letter;
	cout << "Введите букву: ";
	cin >> letter;

	if (vowel(letter)) {
		cout << letter << " - гласная." << endl;
	} else {
		cout << letter << " - не гласная." << endl;
	}
}

double calcfinalscore(vector<int> scores) {
	if (scores.size() < 3) {
		cout << "Не может быть меньше 3-х оценок.\n";
		Task21();
	}
	sort(scores.begin(), scores.end()); //  сортировка в порядке возростания
	scores.erase(scores.begin()); // удалить минимальную оценку
	scores.erase(scores.end() - 1); // удалить максимальную
	double sum = 0;
	for (int score : scores) { 
		// цикл по всем элементам массива numbers, тоже самое что for(int number = 0;number < 5;number++)
		// спасибо о великие stackoverflow и cyberforum
		sum += score;
	}
	return sum / scores.size();
}
// // // // // // // // // 
// PROBABLY FIX REQUIRED // 
// PROBABLY FIX REQUIRED //
// PROBABLY FIX REQUIRED //
// // // // // // // // //

void Task21() {
	vector<int> scores;
	int score;
	for (int score : scores) {
		cin >> score;
		if (score < 0) {
			cout << "Оценка не может быть отрицательной. пу-пу-пу."; // молю не пиши пу-пу-пу в отчет
		}
	}
	scores.push_back(score);

	double finalscore = calcfinalscore(scores);
	cout << scores.front() << " и " << scores.back() << " - отброшенные оценки" << endl;
	cout.precision(2); // количество цифр после запятой
	cout << fixed << finalscore << endl; // fixed - полученное число после precision
}

int count_digits(int n) {
	if (n == 0) {
		return 1;
	}

	int count = 0;
	while (n > 0) {
		n /= 10;
		count++;
	}
	return count;
}

void Task22() {
	int n;
	cout << "Введите число: ";
	cin >> n;
	int digits = count_digits(n);
	cout << digits << endl;
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void Task26() {
	int a = 5;
	int b = 7;
	swap(a, b);
	cout << a << " " << b << endl;
}

bool containsChar(const char* str, char target)
{
	for (; *str; ++str) {
		if (*str == target) {
			return true;
			break;
		}
	}
	return false;
}

void Task27() {
	char string[] = "bc";
	cout << containsChar(string, 'a') << endl;
}

void reverseString(char* str) {
	if (str[0] == '\0') {
		return;
	}
	else {
		reverseString(&str[1]);
		cout << str[0];
	}
}

void Task28() {
	/*char enteredText;
	cout << "Введите текст: ";
	cin >> enteredText;*/
	char chto[] = "Hello World!";
	reverseString(chto);
}