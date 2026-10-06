int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int j = 0; // Pointer for the position of unique elements
    for (int i = 1; i < numsSize; i++) {
        if (nums[j] != nums[i]) {
            j++;
            nums[j] = nums[i]; // Move the unique element to the next position
        }
    }
    return j + 1; // Return the length of the array with unique elements
}
