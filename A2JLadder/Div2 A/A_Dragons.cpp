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
    
    int n,s;
    cin >> s >> n;
    vector<pair<int,int>> arr(n);
    for(int i =0 ;i<n ;i++){
         cin  >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(),arr.end());
    bool check  =true;
    for(int i =0; i< n; i++){
        if(s<=arr[i].first){
            // cout << " s" << s <<endl;
            check = false;
            break;
        }
        // s-= arr[i].first;
        s+= arr[i].second;
        // cout << " ters";
    }
    if(check){
        cout << "YES"<< endl;

    }else {
        cout << "NO" <<endl;
    }

    return 0;
}