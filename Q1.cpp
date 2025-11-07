#include <iostream>
#include <vector>
using namespace std;
int theEfficientTraveler() {
    int n, initialEnergy;
    cout << "Enter the number of cities(array size):";
    cin >> n;
    vector<int> nums(n);
    cout <<"Enter energy costs for each city:";
    for (int i = 0; i<n; i++) 
    cin>> nums[i];
    cout <<"Enter initial energy:";
    cin >> initialEnergy;
    for(int i = 0; i <nums.size();i++){
         if(initialEnergy - nums[i] >=0)
           initialEnergy -= nums[i];
            else
        return i;
    }
  return nums.size() -1;
}

int main() {
    cout <<"Farthest city index you can reach : "<<theEfficientTraveler();
    return 0;
}

