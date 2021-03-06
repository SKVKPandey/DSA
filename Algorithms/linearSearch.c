/* LinearSearch For Arrays In C

Author: Shashank Kashyap Vijay Kumar Pandey
Date Of Creation: June 12, 2022 

MIT LICENCE */

#include<stdio.h>

int linearSearch (int arr[], int size, int num) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
} // Method for LinearSearch

int main() {

    int myArray[20] = {91,23,37,84,59,119,108,88};

    printf("%d\n", linearSearch(myArray, sizeof(myArray), 59));
    printf("%d\n", linearSearch(myArray, sizeof(myArray), 589));

    return 0;
}

// References: CodeWithHarry DSA Course