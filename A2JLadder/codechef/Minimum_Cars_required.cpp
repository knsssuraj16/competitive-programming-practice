#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
    fast
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       cout << (n % 4 == 0? n/4:n/4+1) << endl; 
    }
    return 0;
}