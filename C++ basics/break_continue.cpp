#include<iostream>    // Neha odd dates pr bhr jaayegi jb tk pocketmoney hai uske paas.
using namespace std;

int main(){

    int pocketmoney=3000;
    for(int date=1 ; date<=30 ; date++){
        if (date%2==0){
            continue;
        }
        if (pocketmoney==0){
            break;
        } 
        cout<<"Can go today\n";
        pocketmoney=pocketmoney-300;
    } 
    cout<<"No!!! You can't go.\n";

    return 0;
}