//school renovation

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,q; cin>>n>>q;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int bob =0;
    while(q--){
        int t; cin>>t;
        if(t == 1){//move right
            int L; cin>>L;
            bob = max(0,bob-L);
        }
        else if(t ==2){//move left
            int R; cin>>R;
            bob += R;
            bob = min(n-1,bob+R);
        }
        else if(t==3){
            int X,Y; cin>>X>>Y;
            if(bob>=0 && bob<n){
                a.erase(a.begin()+bob); 
                a.insert(a.begin()+bob,X);
                a.insert(a.begin()+bob+1,Y);
                n+=2; //increase the size of the vector
            }
        }
    }
    for(auto v:a){
        cout<<v<<" ";
    }
    cout<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
