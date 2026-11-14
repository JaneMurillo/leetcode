#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26);
        int ab = 0, sum = 0, b, a, l, o, n;
        b = 'b' - 'a'; // 1
        a = 'a' - 'a'; // 0
        l = 'l' - 'a';
        o = 'o' - 'a';
        n = 'n' - 'a';
        
        for(int i = 0; i < text.size(); i++){
            ab = text[i] - 'a';
            freq[ab] +=1;
        }
        
        int bf = freq[b];
        int af = freq[a];
        int lf = freq[l] / 2;
        int of = freq[o] / 2;
        int nf = freq[n];
            
        int respuesta = min( { bf, af, lf, of, nf } ); // 
        return respuesta;
    }
};


int main() {
    
    Solution a;
    string inp = "nlaebolko";
    cout << "Case #1: \n" 
         << inp << " -> "
         << a.maxNumberOfBalloons(inp) << '\n';

    inp = "loonbalxballpoon";
    cout << "Case #2: \n" 
         << inp << " -> "
         << a.maxNumberOfBalloons(inp) << '\n';
  
    inp = "leetcode";
    cout << "Case #3: \n" 
         << inp << " -> "
         << a.maxNumberOfBalloons(inp) << '\n';
    
    return 0;
}