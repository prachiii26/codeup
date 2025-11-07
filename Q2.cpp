#include <iostream>
#include <vector>
using namespace std;

int theSumThatStandsOut()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int sum = 0;
    for (int number : nums)
        sum += number;

    int prefixsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int suffixsum = sum - prefixsum - nums[i];
        if (prefixsum == suffixsum)
            return i;
        prefixsum += nums[i];
    }
    return -1;
}  

int main() {
    int index = theSumThatStandsOut();
    if(index != -1) 
    cout << "The index where prefix and suffix sums are equal: " << index << endl;
    else
    cout << "No such ndex found. " <<  endl;
    return 0;
}
