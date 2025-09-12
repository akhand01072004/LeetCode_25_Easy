#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
        int count[26] = {0};
        
        for(char ch : sentence) {
            count[ch - 'a'] = 1;
        }
        
        for(int i = 0; i < 26; ++i) {
            if(count[i] == 0)
                return false;
        }
        
        return true;
        
}

int main(){
    string str = "thequickbrownfoxjumpsoverthelazydog";
    cout<<checkIfPangram(str);
}
