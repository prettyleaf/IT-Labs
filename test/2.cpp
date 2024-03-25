#include <iostream>
using namespace std;

int main()
{
    const int size = 15;
    int avg = 0;
    int m[size];
    int sum = 0;
    for (int i = 1; i<=15; i++) {
        sum+=i;
    }
    avg = sum / size;
    cout << avg << endl;
}
