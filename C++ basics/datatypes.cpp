#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a=12; //initialisation
    
    cout<<"Size of int:"<<sizeof(a)<<endl;
    
    float b;
    cout<<"Size of float:"<<sizeof(b)<<endl;
    
    char c;
    cout<<"Size of charcater:"<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool:"<<sizeof(d)<<endl;

    short int si;
    long long int li;
    cout<<"Size of short int:"<<sizeof(si)<<endl;
    cout<<"Size of long int:"<<sizeof(li)<<endl;
    
    return 0;
}