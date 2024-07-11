#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(k);
    for(auto &it : arr) cin >> it;
    sort(arr.begin(), arr.end());
    int count = 0;
    for(int i = 0; i < k-1; i++){
        if(arr[i] == 1){
            count++;
            continue;
        }
        count += arr[i] * 2 - 1;
    }
    cout << count << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}