/* Traversal And Insertion In C

Author: Shashank Kashyap Vijay Kumar Pandey
Date Of Creation: June 10, 2022 

MIT LICENCE */

#include<stdio.h>

void display(int arr[], int size) {

    printf("Traversal...\n");

    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }

    printf("\n");

} // Method for Traversal

void insertion(int arr[], int size, int capacity, int index, int element) {

    if (size>=capacity){
        printf("Invalid Insertion\n");
    }

    else {
        for (int i = size-1; i >= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
    }

}

int main() {

    int arr[100] = {5,4,8,12,45};
    display(arr, 5);
    insertion(arr, 5, 100, 2, 99);
    display(arr, 6);

    return 0;

}

// References: CodeWithHarry DSA Course