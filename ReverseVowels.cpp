//345
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int j = s.size()-1;
        int i = 0;
        while (i<j){
            while(i<j && find(vowels.begin(), vowels.end(), s[i]) == vowels.end()){
                i++;
            }
     
            while(i<j && find(vowels.begin(), vowels.end(), s[j]) == vowels.end()){
                j--;
            }
            char temp = s[j];
          
            s[j] = s[i];
           
            s[i] = temp;

            i++;
            j--;
        }
        return s;
    }
};


int main() {
    Solution solution;
    string s = "IceCreAm";

    cout << solution.reverseVowels(s);
    
    return 0;
}