#include <iostream>
#include <limits>
using namespace std;

// Функція для обчислення суми непарних елементів масиву
double sumOfOddElements(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        if ((int)arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    const int size = 10; // Задайте розмір масиву
    double arr[size];

    // Введення даних в масив
    cout << "enter " << size << " diysnih chisel u masiv:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Обчислення суми непарних елементів масиву та виведення результату
    double sumOdd = sumOfOddElements(arr, size);
    cout << "Suma neparnih elementiv masivu: " << sumOdd << endl;

    // Знайдемо максимальний та мінімальний елементи та їхні позиції в масиві
    double maxElement = arr[0];
    double minElement = arr[0];
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }

    // Обчислення добутку елементів між максимальним і мінімальним
    double product = 1.0;
    int start = (maxIndex < minIndex) ? maxIndex : minIndex;
    int end = (maxIndex > minIndex) ? maxIndex : minIndex;
    for (int i = start + 1; i < end; ++i) {
        product *= arr[i];
    }
    cout << "Dobutok elementiv mij max ta min: " << product << endl;

    // Сортування масиву за спаданням
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] < arr[j]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Виведення відсортованого масиву
    cout << "masiv, vidsortovaniy za spadannyam: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
