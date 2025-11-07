#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool smartPairFinder()
{
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter the target sum: ";
    cin >> target;

    unordered_set<int> seenNumbers;

    for (int number : nums)
    {
        int complement = target - number;
        if (seenNumbers.find(complement) != seenNumbers.end())
            return true;
        seenNumbers.insert(number);
    }
    return false;
}

int main()
{
    cout << "Pair Exists: " << (smartPairFinder() ? "true" : "false") << endl;
    return 0;
}
