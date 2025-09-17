#include <iostream>
#include <climits>
using namespace std;

int rainTap(int *hights, int n)
{
    int leftMax[20000];
    int rightMax[20000];
    leftMax[0] = hights[0];
    rightMax[n - 1] = hights[n - 1];
    for (int i = 0; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], hights[i]);
    }

    // rightside

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], hights[i]);
    }

    // max waterTap
    int waterTap = 0;

    for (int i = 0; i < n; i++)
    {
        int currentWater = min(leftMax[i], rightMax[i]) - hights[i];
        if (currentWater > 0)
        {
            waterTap += currentWater;
        }
    }
    return waterTap;
}

int main()
{
    int hights[6] = {4, 2, 0, 3, 2, 5};
    int n = sizeof(hights) / sizeof(int);
    cout << rainTap(hights, n);
    return 0;
}
