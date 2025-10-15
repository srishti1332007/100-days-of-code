/*Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target 
and print the index of first and last occurrence. Print -1, -1 if the target is not present.*/

#include <stdio.h>
int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 8;
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}


//Follow-up(optional): Can you do it in O(log n) Time Complexity?

#include <stdio.h>
int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;  
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return first;
}

int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; 
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return last;
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 8;

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("%d,%d", first, last);
    return 0;
}
