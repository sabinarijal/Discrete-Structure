#include <stdio.h>

void fillArray(int *array) {
    int i, num;
    for(i = 0; i < 10; i++) {
        printf("Array[%d]: ", i);
        scanf("%d", (array+i) );
    }
}


void displayArray(int *array) {
    int i;
    for(i = 0; i < 10; i++) {
        printf("%d ", *(array+i));
    }
}

void ascendingSort(int *array) {
    int i, j, temp;
    for(i = 0; i < 10; i++) {
        temp = *(array+i);
        j = i-1;
        while(j >=0 && *(array+j) > temp) {
            *(array+j+1) = *(array+j);
            j--;
        }
        *(array+j+1) = temp;
    }
}

void descendingSort(int *array) {
    int i, j, temp;
    for(i = 0; i < 10; i++) {
        temp = *(array+i);
        j = i-1;
        while(j >=0 && *(array+j) < temp) {
            *(array+j+1) = *(array+j);
            j--;
        }
        *(array+j+1) = temp;
    }
}

int main() {
    
    int array;

    fillArray(&array);

    printf("Array before sorting:\n{");
    displayArray(&array);

    printf("}\n\nArray after sorting in ascending order:\n{");
    //Calling the function to sort an array in ascending order
    ascendingSort(&array);
    displayArray(&array);

    printf("}\n\nArray after sorting in descending order:\n{");
    displayArray(&array);

    printf("}");
    return 0;
}
