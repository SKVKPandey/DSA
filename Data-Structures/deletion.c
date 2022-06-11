/* Deletion Of Element From Array In C

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

void deletion(int arr[], int size, int index) {

    for (int i = index; i <= size - 1; i++){
        arr[i] = arr[i+1];
    }

} // Method for Deletion

int main() {

    int arr[100] = {5,4,8,12,45};
    display(arr, 5);
    deletion(arr, 5, 2);
    display(arr, 4);

    return 0;

}

// References: CodeWithHarry DSA Course