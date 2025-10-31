//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

int main() {
    int m, n;
    int i, j, k;

    if (scanf("%d", &m) != 1) {
        return 0;
    }
    
    int nums1[1000];
    for (i = 0; i < m; i++) {
        if (scanf("%d", &nums1[i]) != 1) {
            return 0;
        }
    }

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int nums2[1000];
    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums2[i]) != 1) {
            return 0;
        }
    }

    int merged[2000];
    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    for (i = 0; i < m + n; i++) {
        printf("%d%s", merged[i], (i == m + n - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}

