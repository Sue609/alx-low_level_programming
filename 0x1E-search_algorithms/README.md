- Binary search is a highly efficient algorithm for finding a specific element in a sorted array. It works by repeatedly dividing the search range in half, eliminating half of the remaining elements each time it compares the middle element to the target value.
- In binary search it can be performed through:
    - Iteration
    - Recurssion

- The general steps for both methods are discussed below:
    1. The array should already be sorted.
    2. Set two pointers low and high at the lowest and the highest positions respectively.
    3. Find the middle element mid of the array
    4. If x == mid, then return mid.Else, compare the element to be searched with m.
    5. If x > mid, compare x with the middle element of the elements on the right side of mid. This is done by setting low to low = mid + 1.
    6. Else, compare x with the middle element of the elements on the left side of mid. This is done by setting high to high = mid - 1.
    7. Repeat steps 3 to 6 until low meets high.
    8. x = 4 is found.