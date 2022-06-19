/* BinarySearch For Sorted Arrays In C

Author: Shashank Kashyap Vijay Kumar Pandey
Date Of Creation: June 19, 2022 

MIT LICENCE */

#include<stdio.h>

int binarySearch (int arr[], int size, int num) {

    int low, mid, high;

    low = 0;
    high = size - 1;

    while (low<=high) {

        mid = (low+high)/2;

        if (arr[mid] == num) {
            return mid;
        }
        if (arr[mid]<num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
} // Method for BinarySearch

int main() {

    int myArray[20] = {2,3,5,7,11,13,17,19,23,29};

    printf("%d\n", binarySearch(myArray, sizeof(myArray)/sizeof(int), 13));
    printf("%d\n", binarySearch(myArray, sizeof(myArray)/sizeof(int), 20));

    return 0;
}

// References: CodeWithHarry DSA Course