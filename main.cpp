#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        max=max^arr[i];
    }
    cout << max;
}
/*
9
1
1
2
3
3
4
4
5
5
 */