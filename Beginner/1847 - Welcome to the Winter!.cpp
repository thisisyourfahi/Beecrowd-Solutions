#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(b < a && c >= b) {
        cout << ":)";
    }
    else if(b > a && c <= b) {
        cout << ":(";
    }
    else if((b > a && c > b) && (c - b) < (b - a)) {
        cout << ":(";
    }
    else if((b > a && c > b) && (c - b) >= (b - a)) {
        cout << ":)";
    }
    else if((b < a && c < b) && (b - c) < (a - b)) {
        cout << ":)";
    }
    else if((b < a && c < b) && (b - c) >= (a - b)) {
        cout << ":(";
    }
    else if(a == b && c > b) {
        cout << ":)";
    }
    else if(a == b && c <= b) {
        cout << ":(";
    }

    cout << endl;
    return 0;
}
