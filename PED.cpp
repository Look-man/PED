#include <bits/stdc++.h>
#include <string>
#define int  long long
#define test int t;cin>>t;while(t--)
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    test{
        long long A,B;
        cin>>A>>B;
        if(A==1 && B==1){
            cout<<"NO"<<endl;
        }
        if(A==1 && B==2){
            cout<<"NO"<<endl;
        }
        if(A==2 && B==1){
            cout<<"NO"<<endl;
        }
        if(A==2 && B==2){
            cout<<"NO"<<endl;
        }
        if(B==2) {
        long long z=A*(2*B);
        long long x=A;
        long long y=A*(2*B-1);
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else{
            long long z=A*B;
        long long x=A;
        long long y=A*(B-1);
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
        }

    }
    return 0;
}
   
