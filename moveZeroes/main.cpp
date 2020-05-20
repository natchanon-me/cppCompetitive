#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int> nums) {
    int n = nums.size();
    int reach = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            nums.push_back(0);
            nums.erase(nums.begin() + i);
            --i;
            reach++;
            if (reach == n) {
            break;
        }
            continue;
        }
        reach++;
        if (reach == n) {
            break;
        }
    }

}

int main()
{
    return 0;
}
