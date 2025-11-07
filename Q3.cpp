#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int flipTheSwitch()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array (0s and 1s only): ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int ZeroCount = 0, OneCount = 0;

    for (int number : nums)
    {
        if (number == 0)
            ZeroCount++;
        else if (number == 1)
            OneCount++;
        else
            cout << "Warning: Non-binary input detected (" << number << "). Ignoring.\n";
    }
    return min(ZeroCount, OneCount);
}

int main() {
    int flips=flipTheSwitch();
    cout<<"Minimum flips required:" <<flips <<endl;
    return 0;
}
