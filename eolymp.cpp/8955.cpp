#include <iostream>

using namespace std;

int main() {

    int num, res = 0;
    cin >> num; // получение от пользователя размера массива
    if (!(num >= 1 && num <= 100)) { // проверка на условия
        return 1;
    }

    int *arr = new int[num]; // Выделение памяти для массива

    for (int i = 0; i < num; i++) {
        cin >> arr[i]; // Заполнение массива
    }

    for (int i = 0; i < num; ++i) { //отсортируем положительные числа
        if (arr[i] > 0){
            res++;
        }
    }

    if (res == 0) {
       cout << "NO";
        return 0;
    }

    cout << res << endl;

    for (int i = 0; i < num; i++) {
        if (arr[i] > 0) { cout << arr[i] << " ";
        }
    }

    delete [] arr; // очистка памяти
    return 0;

}