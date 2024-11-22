//1768
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int j = 0;
        int n2 = word2.length();
        string merged = "";

        for(int i=0; i<n1;i++){
            merged += word1[i];
            if (j<n2){
                merged+=word2[j];
                j++;
            }
        }
        while (j<n2){
            merged+=word2[j];
            j++;
        }
        return merged;
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class

    // Test case 1
    string word1 = "abc";
    string word2 = "pqr";
    string result = solution.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;  // Outputs: "apbqcr"

    // Test case 2
    word1 = "ab";
    word2 = "pqrs";
    result = solution.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;  // Outputs: "apbqrs"

    // Test case 3
    word1 = "abcd";
    word2 = "pq";
    result = solution.mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;  // Outputs: "apbqcd"

    return 0;
}
