#include<iostream>
using namespace std;

int Sumtilln(int n){
    int ans = (n*(n+1))/2;
    cout<<ans;
    return ans;
}

int main(){

    int n;
    cin>>n;
    Sumtilln(n);
    return 0;
}