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
    
    int n ;
     cin >>n;
     vector<int> arr1;
     vector<int> arr2;
     vector<int> arr3;
      
     for(int i =0; i< n; i++){
         int a;
         cin >> a;
         if(a ==1 ){
             arr1.push_back(i+1);
         }
         else if(a ==2 ){
             arr2.push_back(i+1);
         }
        else if(a ==3 ){
             arr3.push_back(i+1);
         }
     }
     int mn = min(arr1.size(),min(arr2.size(),arr3.size()));
     cout << mn <<endl; 

     for(int i = 0 ; i< mn; i++){
         cout << arr1[arr1.size()-1]<<" " << arr2[arr2.size()-1]<<" " << arr3[arr3.size()-1]<<endl;
         arr1.pop_back();
         arr2.pop_back();
         arr3.pop_back();
        
     }
    return 0;
}