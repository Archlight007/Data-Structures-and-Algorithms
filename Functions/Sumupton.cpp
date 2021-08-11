#include<iostream>
using namespace std;

int Sumupton(int n){
    int ans=0;
    for (int i=1 ; i<=n ; i++){
        ans+=i;
    }
    cout<<ans;
    return ans;
}

int main(){
    int n;
    cin>>n;
    Sumupton(n);
    return 0;
}