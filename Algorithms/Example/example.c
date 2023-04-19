// In the case of a more strict language we will have the main function as the test...
#include <stdio.h>

int* example(int* array) {
    return array;
}

int main(int argc, char** argv) {
    int test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* out = example(test);
    for (int i = 0; i < 10; i++) {
        printf("%d, ", out[i]);
    }
    printf("\n");
    return 0;
}