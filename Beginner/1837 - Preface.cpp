// I don't know what I have code. But it works!
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a > 0){
        cout << a / b << " " << a % b << endl;
    }
    else{
        if(a % b == 0){
            cout << a / b << " 0" << endl;
        }
        else{
            if(b > 0){
                int q = a / b - 1;
                int r =  q * b * -1 + a;
                cout << q << " " << r << endl;
            }
            else{
                int q = abs(a / b) + 1;
                int r = q * b * -1 + a;
                cout << q << " " << r << endl;
            }
        }
    }
}
