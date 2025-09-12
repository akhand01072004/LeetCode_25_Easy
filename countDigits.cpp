#include<bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    int count = 0;
    int n = num;
    while(num > 0){
        int dig = num % 10;
        if(dig != 0 && n % dig == 0){   
            count++;
        }
        num = num / 10;
    }
    return count;
}

int main(){
    int num = 121;
    cout<<countDigits(num);

}