#include <stdio.h>
#include <stdlib.h>

int main() {
    int length, result = 0;
    //printf("Enter length: ");
    scanf("%d", &length); // получение от пользователя размера массива
    if (!(length >= 1 && length <= 100)) { // проверка на условия
        return 1;
    }
    int *array = (int *) malloc(length);// Выделение памяти для массива

    for (int i = 0; i < length; i++) {
        //printf("array[%d]", i); // Заполнение массива
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (int i = 0; i < length; ++i) { //отсортируем положительные числа
        if (array[i] > 0) {
            result++;
        }
    }
    if (result == 0) {
        printf("NO");
        return 0;
    }



    printf("The result: %d", result);
    printf("\n");

    for (int i = 0; i < length; i++) {
        if (array[i] > 0) {
            printf("%d ", array[i]);
        }
    }
    free(array);

    return 0;
}

////Wrote this task in c++, before I remembered it should be on C)
////#include <iostream>
////
////using namespace std;
////
////int main() {
////
////    int num, res = 0;
////    cin >> num; // получение от пользователя размера массива
////    if (!(num >= 1 && num <= 100)) { // проверка на условия
////        return 1;
////    }
////
////    int *arr = new int[num]; // Выделение памяти для массива
////
////    for (int i = 0; i < num; i++) {
////        cin >> arr[i]; // Заполнение массива
////    }
////
////    for (int i = 0; i < num; ++i) { //отсортируем положительные числа
////        if (arr[i] > 0){
////            res++;
////        }
////    }
////
////    if (res == 0) {
////       cout << "NO";
////        return 0;
////    }
////
////    cout << res << endl;
////
////    for (int i = 0; i < num; i++) {
////        if (arr[i] > 0) {
////          cout << arr[i] << " ";
////        }
////    }
////
////    delete [] arr; // очистка памяти
////    return 0;
////
////}