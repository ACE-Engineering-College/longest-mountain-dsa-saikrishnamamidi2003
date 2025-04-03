#include <stdio.h>
// Function to find the longest mountain in an array..
int longestMountain(int arr[], int n)
{
   int longest = 0;
    int increase = 0, decrease = 0;

    for (int i = 1; i < n; i++) {
        if ((decrease && arr[i - 1] < arr[i]) || arr[i - 1] == arr[i])
            increase = decrease = 0;

        if (arr[i - 1] < arr[i])
            increase++;
        if (arr[i - 1] > arr[i])
            decrease++;

        if (increase > 0 && decrease > 0)
            longest = (longest > (increase + decrease + 1)) ? longest : (increase + decrease + 1);
    }
    return longest;
}
