#include <stdio.h>

/*DIPU BISWAS 405A*/

int main()
{
    int array_size, idx, idx_1, idx_2;
    scanf("%d", &array_size);

    int array[array_size];

    for(idx = 0; idx < array_size; idx++) scanf("%d", &array[idx]);

    for(idx_1 = 0; idx_1 < array_size - 1; idx_1++) {
        for(idx_2 = idx_1 + 1; idx_2 < array_size; idx_2++) {
            if(array[idx_1] > array[idx_2]) {
                int temp = array[idx_1];
                array[idx_1] = array[idx_2];
                array[idx_2] = temp;
            }
        }
    }

    for(idx = 0; idx < array_size; idx++) printf("%d ", array[idx]);

    return 0;
}

