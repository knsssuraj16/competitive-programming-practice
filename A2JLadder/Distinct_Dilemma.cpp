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
       set<int> s; 
         for(int i=0; i< n; i++){
             cin >> arr[i];
         }
         for(int i =0 ;i< n; i++){
             for(int j = arr[i] -1; j> arr[i]/2; j--){
                 s.insert(arr[i]-j);
                 s.insert(j);
             }
         }
         cout<< s.size()<<endl;

    }
    return 0;
}