#include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n;
    cout << "enter a binary number: ";
    cin >> n;
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n % 10;
        if(bit == 1){
            ans = (bit * pow(2, i)) + ans;
        }
        n = n / 10;
        i ++;
    }
    cout <<"decimal is "<< ans << endl;
    // cout << (~n);
}