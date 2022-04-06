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
        int a, b;
         cin >> a>>b;
         if(a >=b*30){
             cout << "YES";
         }else {
             cout << "NO";
         }
         cout <<endl;
    }
    return 0;
}