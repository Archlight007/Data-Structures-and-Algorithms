#include<iostream>
using namespace std;

void Fact(int num){
    int fact1=1;
    for (int i=2 ; i<=num ; i++){
        fact1=fact1*i;
    }
    cout<<fact1;
    return;
}
int main(){
    int n;
    cin>>n;
    Fact(n);
    return 0;
}