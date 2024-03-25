#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
/*
int main()
{
    const int size = 100;
    int m[size], sum = 0, avg = 0, min = 0, max = 0, search;
    srand(time(0));
    for (int i = 0; i < size; i++) {
        m[i] = rand() % 100;
//        cout << m[i] << endl; // задача номер 1
    }
    for (int i = 0; i < size; i++) {
        sum+=m[i];
    }
    avg = sum / size;
//    cout << avg << endl; // задача номер 2
    for (int i = 0; i < size; i++) {
        if (m[i] <= min) {
            min = m[i];
        }
        if (m[i] >= max) {
            max = m[i];
        }
    }
//    cout << min << endl;
//    cout << max << endl; // задача номер 3
}
*/

/*
int main() // number 4
{
    int a = 100;
    const int size = 100;
    int mas[size];
    srand(time(NULL));
    for (int i = 0; i<=size; i++) {
        mas[i] = rand() % 100;
    }
    int number = 99; // ввод искомого номера
    for (int i = 0; i<=size; i++){
        if (number == mas[i])
        {
            cout << mas[i] << " присутствует в массиве" << endl;
            return 0;
        }
    }
    cout << number << " не присутствует в массиве" << endl;
    return 0;
}*/

/*
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

/*
int main() // number 6
{
    const int a = 100;
    int mas[a];
    srand(time(NULL));
    vector<int> index;

    for (int i = 0; i<=a; i++) {
        mas[i] = rand() % 100;
       // cout << i << " < index | number > " << mas[i] << endl; //debug
    }
    int number = 11; // ввод искомого номера
    int cnt = 1;
    for (int i = 0; i<=a; i++){
        if (number == mas[i])  {
            index.push_back(i);
            index[cnt] = i;
            cnt++;
        }
        }
    if (index.empty()==true) {
        cout << "Wasnt generated" << endl;}
    else {
    for (int i = 0; i <= index.size()-1; i++) {
        cout << "Was generated " << index[i] << endl;
    }
    }
    return 0;
}*/

/*
int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value_to_remove = 5;
    int index_to_remove = std::find(arr.begin(), arr.end(), value_to_remove) - arr.begin();

    if (index_to_remove != arr.size()) {
        arr.erase(arr.begin() + index_to_remove);
        std::cout << "New array size: " << arr.size() << std::endl;
        std::cout << "Number of removed elements: " << 1 << std::endl;
    } else {
        std::cout << "Value not found in the array." << std::endl;
    }

    return 0;
}
*/ //variant 1 (copy-paste)

/*int main()
{
    int a = 10;
    int index;
    srand(time(NULL));
    vector <int> array;

    for (int i = 0; i<=a; i++) {
        array.push_back(rand() % 100);
        cout << i << " < index | number > " << array[i] << endl; //debug
    }
    cout << "Напишите индекс: ";
    cin >> index;
    array.erase(array.begin() + index);
    array.resize(array.size()-1);
    for (int i = 0; i<=array.size(); i++) {
        cout << " " << array.size() << " " << array[i] << endl;
    }
}*/ // stable!!!