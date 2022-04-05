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
    
    int n,m; 
    cin >> n >> m;

    for(int i =((n+1)/2); i<=n ;i++){
        if(i%m ==0){
            cout << i <<endl;
            return 0;
        }
    }
    cout << -1 <<endl; 
    

    return 0;
}