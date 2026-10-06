int thirdMax(int* nums, int numsSize) {
    long max1;
    long max2;
    long max3;
    int i;

    max1 = -2147483649;
    max2 = -2147483649;
    max3 = -2147483649;
    i = 0;
    while (i < numsSize)
    {
        if (nums[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] > max2 && nums[i] < max1)
        {
            max3 = max2;
            max2 = nums[i];
        }
        else if (nums[i] > max3 && nums[i] < max2)
            max3 = nums[i];
        i++;
    }
    if (numsSize < 3 || max3 == -2147483649)
        return ((int)max1);
    return ((int)max3);
}
