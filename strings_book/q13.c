//program to shwo the differnce between array of strings adn array of pointers to strings
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr[5][10];      // Array of strings
    char *arrp[5];        // Array of pointers

    printf("=== 1. String Assignment ===\n");

    // INVALID: array cannot be assigned
    // arr[0] = "January";

    // VALID
    strcpy(arr[0], "January");

    // VALID: pointer assignment
    arrp[0] = "January";

    printf("arr[0]  = %s\n", arr[0]);
    printf("arrp[0] = %s\n\n", arrp[0]);


    printf("=== 2. String Copy ===\n");

    // VALID
    strcpy(arr[1], "February");

    // INVALID: arrp[1] points nowhere
    // strcpy(arrp[1], "February");

    // VALID
    arrp[1] = malloc(10);
    strcpy(arrp[1], "February");

    printf("arr[1]  = %s\n", arr[1]);
    printf("arrp[1] = %s\n\n", arrp[1]);


    printf("=== 3. Character Modification ===\n");

    // VALID
    arr[0][0] = 'j';

    // INVALID (undefined behavior)
    // arrp[0][0] = 'j';

    printf("arr[0]  = %s\n", arr[0]);
    printf("arrp[0] = %s\n\n", arrp[0]);


    printf("=== 4. Dynamic Memory ===\n");

    arrp[2] = malloc(10);
    strcpy(arrp[2], "March");

    // VALID
    arrp[2][0] = 'm';

    printf("arrp[2] = %s\n\n", arrp[2]);


    printf("=== 5. Array Assignment ===\n");

    // INVALID
    // arr[2] = arr[1];

    // VALID
    strcpy(arr[2], arr[1]);

    printf("arr[2] = %s\n", arr[2]);

    // VALID
    arrp[3] = arrp[1];

    printf("arrp[3] = %s\n\n", arrp[3]);


    printf("=== 6. Reassignment ===\n");

    // INVALID
    // arr[0] = "April";

    // VALID
    arrp[0] = "April";

    printf("arrp[0] = %s\n\n", arrp[0]);


    printf("=== 7. sizeof ===\n");

    printf("sizeof(arr)     = %zu\n", sizeof(arr));
    printf("sizeof(arr[0])  = %zu\n", sizeof(arr[0]));

    printf("sizeof(arrp)    = %zu\n", sizeof(arrp));
    printf("sizeof(arrp[0]) = %zu\n\n", sizeof(arrp[0]));


    printf("=== 8. Pointer Arithmetic ===\n");

    // INVALID
    // arr[0]++;

    // VALID
    printf("Before : %s\n", arrp[0]);

    arrp[0]++;

    printf("After  : %s\n\n", arrp[0]);


    printf("=== 9. Free Memory ===\n");

    // INVALID
    // free(arr[0]);

    // INVALID
    // free(arrp[0]); // points to string literal

    // VALID
    free(arrp[1]);
    free(arrp[2]);

    return 0;
}
