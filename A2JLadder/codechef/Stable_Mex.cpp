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
         vector<int> arr(n);
        for(int i =0 ; i< n ;i++){
                cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int c = 0;
        for(int i =0 ;i< n ;i++){
            if(c != arr[i]){
               
                break;
            }
            c++;
        }

        if(c > arr[n-1]){
            cout << -1 <<endl;}
            else{
                cout << c <<endl;
            }

    }
    return 0;
}