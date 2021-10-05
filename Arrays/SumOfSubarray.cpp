#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        int s=0;
        for(int j=i ; j<n ; j++){
            s+=arr[j];
            cout<<s<<endl;
        }
    }
    delete [] arr;
    return 0;
}