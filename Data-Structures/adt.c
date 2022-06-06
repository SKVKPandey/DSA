/* Abstract Data Type In C

Author: Shashank Kashyap Vijay Kumar Pandey
Date Of Creation: June 06, 2022 

MIT LICENCE */

#include<stdio.h>
#include<stdlib.h>

struct myArray {

    int total_size; //Defines the total size of Array
    int used_size; //Defines the used size of Array
    int *ptr; //Defines the pointer for the starting element of Array

};

void createArray(struct myArray *a, int tSize, int uSize){

    (*a).total_size = tSize; //Total size of Array 
    (*a).used_size = uSize; //Used size of Array
    (*a).ptr = (int *) malloc (tSize*sizeof(int)); //Reserved memory in Heap.

    /* Alternative way of declaring memory pointers

    a->total_size = tSize; //Total size of Array 
    a->used_size = uSize; //Used size of Array
    a->ptr = (int *) malloc (tSize*sizeof(int)); //Reserved memory in Heap.

    */

}  //Method defined for creation of Array

void setVal(struct myArray *a){

    int n;
    for (int i = 0; i < a->used_size; i++) {

        printf("Enter Element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;

    }

} //Method defined for inserting values in Array

void show(struct myArray *a){

    for (int i = 0; i < a->used_size; i++) {

        printf("%d\n", a->ptr[i]);

    }

} //Method defined for showing values inserted in Array

int main(){

    struct myArray series; //Declares series as the myArray Array
    createArray(&series, 10, 2); //Creating the Array series

    printf("\nRunning setVal now...\n");
    setVal(&series);

    printf("\nRunning show now...\n");
    show(&series);

    return 0;

}

// References: CodeWithHarry DSA Course
