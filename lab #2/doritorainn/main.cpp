#include <iostream>

using namespace std;

int sum(int *arr, int &size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    int size = 10;
    int *array = new int[size];
    for (int i = 0; i<size; i++){
        array[i]=i;
    }
    sum(array, size);
    for(int i = 0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << ", сумма = " << sum(array, size) << endl;
    delete[] array;
}
