
#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int nums2[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 1: %d\n", search(nums1, 6, 9));
    printf("Test Case 2: %d\n", search(nums2, 6, 2));

    return 0;
}
