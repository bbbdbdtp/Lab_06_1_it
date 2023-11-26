#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(int a[]) {
    for (int i = 0; i < 25; ++i) {
        a[i] = rand() % 51 - 20;
    }
}

void printArray(const int a[]) {
    for (int i = 0; i < 25; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void processAndCount(int a[], int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < 25; ++i) {
        if (a[i] > 0 && a[i] % 2 == 0) {
            count++;
            sum += a[i];
            a[i] = 0;
        }
    }
}

int main() {
    srand(time(0));

    int myArray[25];
    int count, sum;

    fillArray(myArray);

    cout << "Original Array: ";
    printArray(myArray);

    processAndCount(myArray, count, sum);

    cout << "Count of elements satisfying the criteria: " << count << endl;
    cout << "Sum of elements satisfying the criteria: " << sum << endl;

    cout << "Modified Array : ";
    printArray(myArray);

    return 0;
}