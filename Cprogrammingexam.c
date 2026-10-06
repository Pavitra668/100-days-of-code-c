/*
Q108 (Logic Enhancers)

Write a Program to take an integer array nums. Print an array answer such
that answer[i] is equal to the product of all the elements of nums except
nums[i]. The product of any prefix or suffix of nums is guaranteed to fit
in a 32-bit integer.

Input 1:
nums = [1,2,3,4]

Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]

Output 2:
[0,0,9,0,0]

Follow-up:
Can you write a code that runs in O(n) time and without using division?
*/

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int nums[n], answer[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    /*
       First pass:
       answer[i] stores the product of all elements
       to the left of index i.
    */

    int prefix = 1;

    for (int i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    /*
       Second pass:
       Multiply answer[i] by the product of all elements
       to the right of index i.
    */

    int suffix = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}