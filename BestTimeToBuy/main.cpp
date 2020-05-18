#include <iostream>
#include <vector>

using namespace std;

const int IFN = 1e9 + 5;

int maxProfit(vector<int> prices) {
    int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i-1]) {
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
}

int main()
{
    int x = maxProfit({1,2,3,4,5});
    cout << x << endl;
    return 0;
}
