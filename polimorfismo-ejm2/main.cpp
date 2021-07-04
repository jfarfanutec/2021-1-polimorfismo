#include <iostream>

#include <iostream>
#include "array.h"
#include "Tipos.h"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    MyArray<int> a(arr, 5);
    int x = a.max();
    std::cout << x;
    return 0;
}