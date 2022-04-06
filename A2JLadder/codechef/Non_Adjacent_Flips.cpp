#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9+7
// #define int long long
#define float double
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
    fast
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       string s;
        cin >> s;
        int status = 0;
        for(int i =0 ; i< n;i++){
            if(i>0 && s[i] == '1' && s[i-1] == '1' ){
                status = 2;
                // cout << " sd"<<endl;
            }else if(s[i]=='1'){
                status = max(status,1);
            }
        }
        cout << status <<endl;
    }
    return 0;
}