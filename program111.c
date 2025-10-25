//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#include <stdlib.h>
void findFirstNegative(int arr[], int n, int k){
int Q[n];
int front = 0;
int rear = 0;
int i;
for (i = 0; i < n; i++) {
if (arr[i] < 0) {
Q[rear++] = i;
}
if (i >= k - 1) {
if (front < rear) {
printf("%d ", arr[Q[front]]);
} else {
printf("0 ");
}
if (front < rear && Q[front] == i - k + 1) {
front++;
}
}
}
printf("\n");
}
int main() {
int arr1[] = {-8, 2, 3, -6, 10};
int n1 = 5;
int k1 = 2;
findFirstNegative(arr1, n1, k1);
int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
int n2 = 8;
int k2 = 3;
findFirstNegative(arr2, n2, k2);
int arr3[] = {12, 1, 3, 5};
int n3 = 4;
int k3 = 3;
findFirstNegative(arr3, n3, k3);
return 0;
}

