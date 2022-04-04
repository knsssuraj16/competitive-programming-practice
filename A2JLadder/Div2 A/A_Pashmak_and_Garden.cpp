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
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 != x2 && y1 != y2 && abs(y2-y1) != abs(x2 - x1)){
        cout << -1 <<endl;
    }else if(x1 == x2){
        cout <<  x1 + abs(y1- y2)<<" " << y1 <<" " << x2 + abs(y1-y2) <<" "<< y2<<endl; 
    }else if(y1 == y2){
        cout << x1 << " " << y1 + abs(x1-x2) <<" " << x2 <<" "<< y2+abs(x1-x2) <<endl;
    } else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    

    return 0;
}