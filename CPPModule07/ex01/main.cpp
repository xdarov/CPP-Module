#include "iter.hpp"

int main(void) {
    std::string arr[3] = {"Hello", "world", "!"};
    int newArr[5] = {1, 2, 5, 3, 5};

    iter(arr, 3, printT);
    iter(newArr, 5, printT);
    return 0;
}