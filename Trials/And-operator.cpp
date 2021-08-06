#include<iostream>
using namespace std;
        // WAP to print whether a number is divisible by 2 and 3 or div by only one of them
int main()
{
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both."<<endl;
    }else if (n%2==0){
        cout<<"Divisible by only 2."<<endl;
    }else if (n%3==0){
        cout<<"Divisible by only 3."<<endl;
    }else {
        cout<<"Divisible by none."<<endl;
    }

    return 0;
}