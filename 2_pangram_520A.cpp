#include <bits/stdc++.h>
using namespace std;


string to_lowercase(string word){
    for(int i = 0; i < word.size(); i++){
        if('A' <= word[i] && word[i] <= 'Z'){
            word[i] = word[i] - 'A' + 'a';
        }
    }
    return word;
}

bool is_pangram(string word){
    vector<int> pangram(26);
    for(int i = 0; i < word.size(); i++){
       int val_asc = word[i] - 'a'; 
       pangram[val_asc] += 1;
    }
    
    bool is_pangram = true;
    
    for(int j = 0; j < pangram.size();j++){
        if(pangram[j] == 0)
            is_pangram = false;
    }
    return is_pangram;
}


int main() {
    int n;
    string word, lowercase_word;
    bool answer = false;
    cin >> n >> word;
    /*
    n = 35
    word =TheQuickBrownFoxJumpsOverTheLazyDog
    */
    
    lowercase_word = to_lowercase(word);
    answer = is_pangram(lowercase_word);
    
    if(answer == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}