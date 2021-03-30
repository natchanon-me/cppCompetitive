#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int> nums, int target) {
    vector<int> result;

    for(int element = 0; element < nums.size(); ++element) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[element] + nums[i] == target) {
                result.push_back(element);
                result.push_back(i);
            }
        }
    }
    return result;
}

int main()
{
    vector<int> result = twoSum({2, 7, 11, 15}, 9);

    for (int element : result) {
        cout << element << " ";
    }

    return 0;
}
