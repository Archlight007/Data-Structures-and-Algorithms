#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int* arr = new int;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int mx=-1999999;
    for(int i=0 ; i<n ; i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    
    delete [] arr;
    return 0;
}