#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    
    while(tests--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int maxColour= std::max({a,b,c});
        if (maxColour<=((a+b+c)-maxColour+1)){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    

}

