#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    while(cin >> n){

        int MAX = 0;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > MAX){
                MAX = arr[i];
            }
        }

        if(MAX >= 20){
            cout << "3" << endl;
        }
        else if(MAX >= 10 && MAX < 20){
            cout << "2" << endl;
        }
        else{
            cout << "1" << endl;
        }
    }
}
