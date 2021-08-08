#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=i ; j++){
            int k=(i+j)%2;
            if (k==0){
                cout<<"1";
            } else {
                cout<<"0";
            }
        } cout<<endl;
    }
    return 0;
}
//OUTPUT
//1
//01
//010
//1010
//10101