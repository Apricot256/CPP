#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int a[5];

    // Initialize array
    for (int i = 0; i < 5; i++){
        printf("Input a number for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int *b = a;

    // overwrite array
    for(int i = 0; i < 5; i++){
        *(b+i) = 0;
        printf("Update a number for a[%d] is %d\n", i, a[i]);
    }
    return 0;
}
