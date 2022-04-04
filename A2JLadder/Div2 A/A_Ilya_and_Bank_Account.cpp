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
    cin >>t;
    if( t> 0){
        cout << t << endl;
    }else{
       int ls = t%10;
       int a = t /10;
       int b = t /100 * 10 + ls;
        cout<<max(a,b) <<endl;
    }
    return 0;
}