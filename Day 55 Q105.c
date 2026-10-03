*/Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

```c
#include <stdio.h>

int main() {
    int n, i, j;
    int count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority element = %d\n", majority);

    return 0;
}
```

**Sample Test Case 1**

Input:

```text
Enter size of array: 7
Enter array elements:
2 2 1 1 1 2 2
```

Output:

```text
Majority element = 2
```

**Sample Test Case 2**

Input:

```text
Enter size of array: 5
Enter array elements:
1 2 3 4 5
```

Output:

```text
Majority element = -1
```

**Time Complexity:** `O(n²)`

**O(n) follow-up:** Yes. The **Boyer-Moore Voting Algorithm** can find a candidate in `O(n)` time and `O(1)` extra space, followed by a second pass to verify that it actually occurs more than `n/2` times.
