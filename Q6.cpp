#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int theMinimalistPainter()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int maxValue = INT_MIN;
    for (int number : nums)
        maxValue = max(maxValue, number);

    int sum = 0;
    bool maxRemoved = false;

    for (int number : nums)
    {
        if (number == maxValue && !maxRemoved)
        {
            maxRemoved = true;
            continue;
        }
        sum += number;
    }

    return sum;
}

int main()
{
    cout << "Sum Except Max: " << theMinimalistPainter() << endl;
    return 0;
}
