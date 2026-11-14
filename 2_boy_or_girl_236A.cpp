#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> herhis(26);
    string user;
    int sum = 0;
    cin >> user;
    //user = "xiaodao";
    //user = "wjmzbmr";

    for(int i = 0; i < user.size(); i++){ // wjmzbmr
        int pos = user[i] - 'a';
        herhis[pos] += 1;
    }
    
    for(int i = 0; i < herhis.size(); i++){
        if(herhis[i] >= 1){
            sum++;
        }
    }
    if(sum % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}