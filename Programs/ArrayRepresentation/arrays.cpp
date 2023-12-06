
#include<stdio.h>
#include<stdlib.h>

// Unit:1 = Arrays:
// DYNAMIC ARRAY : SUM AND AVERAGE, INSERTION, DELETION, SORTING, SEARCHING, TRAVERSAL / REVERSAL :
// Code by: Muzamil Gashroo:

int main() {

    // Memory allocation starts


    int* array = malloc(20 * sizeof(int));
    
    // Checking storage 
    // int array: {1,2,3,4,5,6,7,8,9,10,};

    if (array == NULL) {
        printf("Memory not allocated");
        free(array);
        return 1;
    }

    const char* name = "--------- Muzamil Gashroo ---------";
    printf("Code By : %s", name);
    printf("\nUnit:1 = Arrays:\nDYNAMIC ARRAY : SUM AND AVERAGE, INSERTION, DELETION, SORTING, SEARCHING, TRAVERSAL / REVERSAL : \n");
    // ---

    int size;
    printf("\nwrite size:");
    scanf("%d", &size);
    // ---

    if (size > 20 || size < 0) {
        printf("Size should not be more than 10 and less than 0");
        return 1;
    }
    // ---

    for (int i = 0; i < size; i++) {

        printf("\nwrite your elements:");
        scanf("%d", &array[i]);

    }
    // --

    printf("\nUnsorted ARRAY: ");
    for (int i = 0; i < size; i++) {

        printf("%d, ", array[i]);
    }

    //---  sorting starts ---

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nSorted ARRAY: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");
    // --- sorting ends ---

    // --- SUM AND AVERAGE STARTS ---

    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    printf("\nSum:%f", sum);
    float average = sum / size;
    printf("\nAverage:%f", average);

    // ---- Insertion Starts ----

    int location, newele;

    //--

    printf("\nGive index for insertion:");
    scanf("%d", &location);
    //--

    printf("\nGive New Element:");
    scanf("%d", &newele);
    //--

    for (int i = size - 1; i >= location; i--) {

        array[i + 1] = array[i];

    }


    printf("\nChecking ARRAY:");

    for (int i = 0; i < size; i++) {

        printf("%d,", array[i]);
    }

    size++;
    array[location] = newele;

    // --- Insertion Ends ---

    printf("\nUPDATED ARRAY:");

    for (int i = 0; i < size; i++) {

        printf("%d,", array[i]);
    }

    // // --- DELETION STARTS ---

    int delete;

    printf("\nGive index for deletion:");
    scanf("%d", &delete);

    for (int i = delete; i < size - 1; i++) {
        array[i] = array[i + 1];
    }


 printf("\nChecking ARRAY:");

    for (int i = 0; i < size; i++) {

        printf("%d,", array[i]);
    }
    // array[size - 1] = 0;  not nessaary
    size--;

    printf("\nUPDATED ARRAY:");

    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }

    // --- DELETION ENDS ---
    // --- SEARCHING STARTS ---

    int search;
    printf("\nsearch element: ");
    scanf("%d",&search);
     int found=0;   
    for(int i =0; i <size ; i++){
        if (array[i]==search){
            printf("yes");
            found=1;
            break;}
    }
    if(!found){
        printf("No");
    }
    printf("\nCode By: Muzamil Gashroo");

    free(array);
    return 0;
}
