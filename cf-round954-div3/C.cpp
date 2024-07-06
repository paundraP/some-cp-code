#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void update(string &s, vector<int> &ind, string &c){
    sort(ind.begin(), ind.end());
    auto it = unique(ind.begin(), ind.end());
    ind.erase(it, ind.end());
    sort(c.begin(), c.end());
    map<int, char> updated;
    for(int i = 0; i < ind.size(); i++){
        updated[ind[i]] = c[i];
    }
    for(const auto &it : updated){
        s[it.fi - 1] = it.si;
    }
}

void solve(){
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    vector<int> ind(m);
    for(int &i : ind) cin >> i;
    string c;
    cin >> c;
    update(s, ind, c);
    cout << s << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}