#include <stdio.h>

int main()
 {
    int n;

    printf("Total no of elements in array: ");
    scanf("%d", &n);

    int nums[n];

    printf("nums= ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int result = maximum(nums, n);

    printf("Maximum subarray sum: %d\n", result);

    return 0;
}

int maximum(int nums[], int size)
 {
    int mSum = nums[0];
    int cSum = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (cSum > 0) {
            cSum += nums[i];
        } else {
            cSum = nums[i];
        }

        if (cSum > mSum) 
    	{
            mSum = cSum;
        }
    }

    return mSum;
}

