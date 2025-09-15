#include <iostream>
#include <climits>
using namespace std;

void subArrays(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        // cout << arr[start];
        for (int end = start; end < n; end++)
        {
            // cout << start << end << endl;
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ',';
        }
        cout << endl;
    }
}

// Kadane's Algorithm max subarray ;

void maxSubarry(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "max sum :" << maxSum << endl;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarry(arr, n);
    return 0;
}