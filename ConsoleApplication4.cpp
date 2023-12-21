#include <iostream>
#include <vector>

template <typename T, int size>
void rotateArray(T (&arr)[size]) {
    if (size <= 1) {
        return;
    }

    T lastElement1 = arr[size - 1];
    //T lastElement2 = arr[size - 2];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement1;
    //arr[1] = lastElement1;
}

int main() {
    
    setlocale(LC_ALL, "Ukrainian");
    int arr[] = { 1, 2, 3, 4, 5 };
    char arr1[] = { 'a', 'b', 'c', 'd', 'e' };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "До ротацiї (char): ";
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    rotateArray(arr1);

    std::cout << "Пiсля ротацiї (char): ";
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    rotateArray(arr1);

    std::cout << "Пiсля ротацiї (char): ";
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "До ротацiї: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    rotateArray(arr);

    std::cout << "Пiсля ротацiї: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    rotateArray(arr);
    std::cout << "Пiсля ротацiї: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}