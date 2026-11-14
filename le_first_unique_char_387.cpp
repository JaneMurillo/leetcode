#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26);
        int ab = 0;
        
        // [4, 1, 1, 1]
        // [a, b, c, d]
        
        for(int i = 0; i < s.size(); i++){ // abacada
            ab = s[i] - 'a'; // 0 -> a
            freq[ab] += 1; // 
        }
        
        for(int i = 0; i < s.size(); i++){ // 0
            ab = s[i] - 'a';
            if(freq[ab] == 1){ // l
                return i; // 0
            }
        }
        return -1;
    }
};


int main() {
    
    Solution a;
    string inp = "leetcode";
    cout << "Case #1: \n" 
         << inp << " -> "
         << a.firstUniqChar(inp) << '\n';

    inp = "loveleetcode";
    cout << "Case #2: \n" 
         << inp << " -> "
         << a.firstUniqChar(inp) << '\n';
  
    inp = "aabb";
    cout << "Case #3: \n" 
         << inp << " -> "
         << a.firstUniqChar(inp) << '\n';
    
    return 0;
}