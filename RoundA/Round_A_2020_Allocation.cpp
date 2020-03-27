#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int T=1;T<=t;T++){
        int n,b,ans=0;
        cin>>n>>b;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            b-=arr[i];
            if(b>=0)ans++;
            else
            break;
        }
        cout<<"Case #"<<T<<" "<<ans<<endl;
    }
    return 0;
}
