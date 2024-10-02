#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minimumValue = arr[0];
    int minimumIndex = 1;
    for(int i = 0; i < n; i++){
        if(minimumValue > arr[i]){
            minimumValue = arr[i];
            minimumIndex = i + 1;
        }
    }

    cout << minimumIndex << endl;
    return 0;
}
