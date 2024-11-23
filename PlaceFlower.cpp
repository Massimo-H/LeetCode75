//605
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 2;
        int len = flowerbed.size();
        if (n==0)
            return true;

        if (len ==1 && n==1){
            return flowerbed[0] == 0;
        }

        if (flowerbed[0]==0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            n--;
        }
        while(n>0 && i < len-1){
            //cout << "right now at" <<flowerbed[i];
            if (flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1]==0){
                n--;
                flowerbed[i] =1;
            }
            i++;
        }
        
        if (flowerbed[len-1]==0 &&  flowerbed[len-2]==0)
            n--;
        
        
        return n<=0;
    }
};



int main() {
    Solution solution;
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;

    cout << solution.canPlaceFlowers(flowerbed,n);
    
    return 0;
}