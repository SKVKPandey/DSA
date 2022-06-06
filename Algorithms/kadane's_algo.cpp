/* Kadane's Algorithm For Largest Sum Contiguous Array In C++

Author: Shashank Kashyap Vijay Kumar Pandey
Date Of Creation: June 06, 2022 

MIT LICENCE */

#include<iostream>
#include<climits>
using namespace std;

int maxSumSubArray(int a[], int size){

    int maxSum = 0;
    int curSum = 0;

    for (int i = 0; i < size; i++) {

        curSum = curSum + a[i];
        if (maxSum<curSum){
            maxSum = curSum;
        }
        if (curSum<0){
            curSum = 0;
        }

    }

    return maxSum;

} //Kadane's Algorithm

int main() {

    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSumSubArray(a, n);
    cout << "Maximum contiguous sum is " << max_sum;

    return 0;

}

// References: GeeksForGeeks, Anuj Bhaiya DSA-One Course