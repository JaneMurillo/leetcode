#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501);
        int max_lucky = -1;
        
        for(int i = 0; i < arr.size(); i++){
            int in = arr[i];
            freq[in] += 1;
        }
        // [ 0 0 2 1 1 ]
        // [ 0 1 2 3 4 ]
        
        for(int i = 1; i < freq.size(); i++){
            if(freq[i] == i){
                    max_lucky = i;
            }
        }
        return max_lucky;
    }
};


int main() {
    
    Solution a;
    vector<int> inp = {2,2,3,4};
    cout << "Case #1: \n [";
    for (auto& it : inp) cout << it << ", ";
    cout << "] -> " << a.findLucky(inp) << '\n';

    inp = {1,2,2,3,3,3};
    cout << "Case #2: \n [";
    for (auto& it : inp) cout << it << ", ";
    cout << "] -> " << a.findLucky(inp) << '\n';
  
    inp = {2,2,2,3,3};
    cout << "Case #3: \n [";
    for (auto& it : inp) cout << it << ", ";
    cout << "] -> " << a.findLucky(inp) << '\n';
    
    return 0;
}