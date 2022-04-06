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
        vector<int> arr(n);
        
         for(int i=0; i< n; i++){
             cin >> arr[i];
            
         }
        int countE =0,countO=0;
         for(int i =0; i< n; i++){
             if(arr[i] % 2 != 0){
                 countO++;
             }if(arr[i] % 2 == 0){
                 countE++;
             }
         }
        // int take = min(countE,countO);
         if(countE ==0  || countO ==0){
             cout<< 0<<endl;
         }else {
              int take = countO % 2 == 0 ?countO/2: INT_MAX;
              cout << min(take,countE)<<endl;
         }

    }
    return 0;
}