/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int i, j;
    *returnSize=2;
    int* a=(int *)malloc(*returnSize * sizeof(int));
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (nums[i]+nums[j]==target && i!=j)
            {
                a[0]=i;
                a[1]=j;
            }
        }
    }
    return a;
}
