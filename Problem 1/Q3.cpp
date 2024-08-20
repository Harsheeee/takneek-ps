#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    for (int i=0;i<tests;i++){
        int n,m;
        cin>>n>>m;
        if (n<=m){
            cout<<(-1)<<"\n";
        }
        else{
            cout<<(m*2+1)<<"\n";
        }
        
    }

}
