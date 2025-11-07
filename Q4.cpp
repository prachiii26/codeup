#include<iostream>
#include<vector>
using namespace std;
int theOddOneOut()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int result = 0;
    for (int number : nums)
        result ^= number;

    return result;
}

int main(){
    int uniqueElement = theOddOneOut();
    cout <<"The odd one out is: "<< uniqueElement << endl;
    return 0;
}
