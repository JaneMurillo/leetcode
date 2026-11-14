#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> firstletter(26);
    string s;
    char f;
    cin >> s;
    //s = "atcoderregularcontest";
    //s = "abcdefghijklmnopqrstuvwxyz";
    //s = "fajsonlslfepbjtsaayxbymeskptcumtwrmkkinjxnnucagfrg";
    
    for(int i = 0; i < s.size(); i++){ 
        int a = s[i] - 'a'; // a -> 0 
        firstletter[a] += 1; 
    }
    
    // [1, 0, 2, 3, 2]
    
    for(int i = 0; i < firstletter.size(); i++){ // 1
        if(firstletter[i] == 0){ // 
            f = i + 'a'; // i = 1 -> b
            break;
        }
    }
    
    if(f == 0){
        cout << "None" << endl;
    } else {
        cout << f << endl;
    }
    
    return 0;
}