#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(4,7);
    for(int x : arr){
        cout<<x<<endl;
    }
    return 0;
}