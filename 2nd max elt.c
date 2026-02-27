#include <stdio.h>

int SMax(int nums[], int n) {
    if (n < 2)
        return nums[0];

    int max = nums[0];
    int second = nums[0];
    int foundSecond = 0;

    //maximum
    for (int i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    // second maximum
    for (int i = 0; i < n; i++) {
        if (nums[i] < max) {
            if (!foundSecond || nums[i] > second) {
                second = nums[i];
                foundSecond = 1;
            }
        }
    }

    if (!foundSecond)
        return max;

    return second;
}

int main() {
    int nums[] = {3, 2, 1, 5, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("%d", SMax(nums, n));

    return 0;
}