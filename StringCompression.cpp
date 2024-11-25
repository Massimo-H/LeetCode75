//443
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size()==1)
            return 1;
        int count = 0;
        char prev =  chars[0];
        int j = 0; 
        for (int i=0; i<chars.size();i++){
            if (chars[i]==prev){
                count++;
            }
            if (chars[i]!=prev){
                chars[j] = prev;
                j++;
                if (count>1){ 
                    string str_count = to_string(count);
                    for (char c : str_count){
                        chars[j] = c;
                        j++;
                    }
                }
                prev = chars[i];
                count = 1;
            }
            if (i==chars.size()-1){
                chars[j]=chars[i];
                j++;
                if (count>1){ 
                string str_count = to_string(count);
                for (char c : str_count){
                    chars[j] = c;
                    j++;
                }    
        }
            }
        }
    
        return j;
    }
};