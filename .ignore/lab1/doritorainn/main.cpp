#include <iostream>
#include <random>
#include <vector>

using namespace std;


/* [1]
 int main()
{
     int a = 100;
     int mas[a];
     srand(time(NULL));
     for (int i = 0; i<=a; i++) {
         mas[i] = rand();
          }

        for (int i = 0; i <=a; i++){
          cout << mas[i] << endl;
          }
    return 0;
}*/

/* [2]
 int main()
{
    int a = 100;
    int mas[a];
    srand(time(NULL));
    for (int i = 0; i<=a; i++) {
        mas[i] = rand() % a;
    }

    int sum = 0;

    for (int i = 0; i<=a; i++){
        sum = sum + mas[i];
    }
    int delta = sum/2;
    cout << delta << endl;
    return 0;}*/

/* [3]
int main()
{
    int a = 100;
    int mas[a];
    srand(time(NULL));
    for (int i = 0; i<=a; i++) {
        mas[i] = rand() % a;
    }
    int min = a;
    int max = 0;
     for (int i = 0; i <=a; i++){
        if (mas[i] < min){
            min = mas[i];
        }
        else (max = mas[i]);
    }
     cout << min << " " << max << endl;
    return 0;
}*/

/* [4]
int main()
{
    int a = 100;
    int mas[a];
    srand(time(NULL));
    for (int i = 0; i<=a; i++) {
        mas[i] = rand() % 100;
    }
    int number = 23; // ввод искомого номера
    for (int i = 0; i<=a; i++){
        if (number == mas[i])
        {
            cout << " Число " << mas[i] << " присутствует в массиве" << endl;
            return 0;
        }
    }
    cout << " Число " << number << " не присутствует в массиве" << endl;
    return 0;
}*/

/* [5]
int main()
{
    int a = 20;
    int mas1[a];
    int mas2[a];
    srand(time(NULL));

    for (int i = 0; i<=a; i++) {
        mas1[i] = rand() % a;
        mas2[i] = rand() % a;
    }

    vector<int> sum;

    for (int i = 0; i<=a; i++){
        sum.push_back(mas1[i] + mas2[i]);
        cout << mas1[i] << " + " << mas2[i] << " = " << sum[i] << endl;
    }
    for (int i = 0; i<=a; i++){
        cout << sum[i] << endl;
    }
    return 0;
}*/

/* [6]
int main()
{
    int a = 100;
    int mas[a];
    srand(time(NULL));
    vector<int> index;

    for (int i = 0; i<=a; i++) {
        mas[i] = rand() % 50;
        cout << i << " < index | number > " << mas[i] << endl; //debug
    }
    int number = 23; // ввод искомого номера
    int cnt = 1;
    for (int i = 0; i<=a; i++){
        if (number == mas[i])  {
            index.push_back(i);
            index[cnt] = i;
            cnt++;
        }
        }
    if (index.empty()==true) {
        cout << "Такое число в массиве не сгенерировалось" << endl;}
    else {
    for (int i = 0; i <= index.size()-1; i++) {
        cout << "Заданное число находится под индексом " << index[i] << endl;
    }
    }
    return 0;
}*/

/* [7]
int main()
{
    int a = 10;
    int index, number;
    srand(time(NULL));
    vector <int> array;

    for (int i = 0; i<a; i++) {
        array.push_back(rand() % 100);
        cout << i << " < index | number > " << array[i] << endl; //debug
    }
    cout << "Напишите искомое число: ";
    cin >> number;
    for (int i = 0; i<array.size(); i++) {
        if (number == array[i]) {
            index = i;
        }
    }
    array.erase(array.begin() + index);
    for (int i = 0; i<array.size(); i++) {
        cout << i << " < index | number > " << array[i] << endl;
    }
}
*/

