//151
#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<char> reversed_word;
        string reversed;
        int i = s.length()-1;
        int countSpace = 0;
        for (int i=s.length()-1;i>=0;i--){
            if (s[i]!=' ')
                reversed_word.push(s[i]);
            if (s[i]==' '){
                if (!reversed_word.empty()){
                    while(!reversed_word.empty()){
                        reversed+=reversed_word.top();
                        reversed_word.pop();
                    }
                    reversed+=' ';
                }
            }
        }
        while(!reversed_word.empty()){
            reversed+=reversed_word.top();
            reversed_word.pop();
        }
        int last_idx = reversed.length()-1;
        if (reversed[last_idx]==' ')
            reversed.erase(last_idx);
        return reversed;
    }
    
};


int main() {
    Solution solution;
    string str1 = "  hello world  ";
    
    cout << solution.reverseWords(str1);

    return 0;
}