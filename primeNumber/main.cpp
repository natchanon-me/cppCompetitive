#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> getRidOfDevided(vector<int> arr, int n) {
    vector<int> newArr;
    for (int i = 0; i < arr.size(); ++i) {
            if (arr[i]%n == 0 && arr[i] != n) {
                continue;
            }else {
                newArr.push_back(arr[i]);
            }
        }
        return newArr;
}

vector<int> getPrimeIndex(vector<int> arr) {
    vector<int> elemArr;
    vector<int> result;
    for (int elements = 0; elements < arr.size(); ++elements) {
        int half = floor(arr[elements]/2);
        //vector<int> oddArr = getRidOfEven(arr[element]);
        for (int elem = 2; elem <= arr[elements]; ++elem ) {
            elemArr.push_back(elem);
        }
        for (int i = 2; i < half+1; ++i) {
            elemArr = getRidOfDevided(elemArr,i);
            //cout << elemArr[i] << endl;
        }

        result.push_back((elemArr[elemArr.size()-1] == arr[elements])? elemArr.size()-1 : -1);
        elemArr = {};
    }

    return result;
}

int main()
{
    vector<int> result = getPrimeIndex({17,257,65537});
    for (int i = 0; i < result.size(); ++i) {
           cout << result[i] << endl;
        }

    return 0;
}
