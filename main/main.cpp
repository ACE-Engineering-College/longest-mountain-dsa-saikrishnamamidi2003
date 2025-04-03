#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestMountain(int arr[], int n)
    {
        int longest = 0 ;
        int increase = 0 , decrease = 0 ;
        for (int i = 1 ; i <n ; i++) {
            if ((decrease && arr[i-1] < arr[i]) || arr[i-1] == arr[i])
                increase = decrease = 0 ;

            increase += (arr[i-1] < arr[i]);
            decrease += (arr[i-1] > arr[i]);

            if (increase != 0 && decrease != 0)
                longest = max(longest , increase + decrease + 1 );
        }
        return longest ; 
    }
};
