#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int MAX = 10000000, MIN = -1000000;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> hashtag(n);
    for(int i = 0; i < n; i++){
        cin >> hashtag[i];
    }
    int minrow = MAX;
    int maxrow = MIN;
    int mincol = MAX;
    int maxcol = MIN;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(hashtag[i][j] == '#'){
                if(i < minrow) minrow = i;
                if( i > maxrow) maxrow = i;
                if(j < mincol) mincol = j;
                if( j > maxcol) maxcol = j;
            }
        }
    }
    int ch = (minrow + maxrow) / 2;
    int ck = (mincol + maxcol) / 2;
    cout << ch + 1 << " " << ck + 1 << endl;
}


int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}