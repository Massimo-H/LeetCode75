//1431
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results;
        int max = candies[0];
        for (int i=1;i<candies.size();i++){
            if (candies[i]>max)
                max = candies[i];
        }
        for (int i=0;i<candies.size();i++){
            results.push_back(candies[i]+extraCandies>= max);
        }
        return results;
    }
};

int main() {
    Solution solution;
    vector<int> candies = {10, 20, 30, 40};
    int extraCandies = 20;

    vector<bool> res = solution.kidsWithCandies(candies,extraCandies);
    for (bool r: res){
        cout << r;
    }
    return 0;
}
