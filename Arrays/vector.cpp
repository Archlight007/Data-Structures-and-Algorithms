#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Vector Syntax
    vector<int> arr={1,2,3,4,5,6};

    //Push-back function(it inserts an element in the last of array) 0(1)
    arr.push_back(7);

    // Size of vector(Number of elements)
    cout<<arr.size()<<endl;

    // Capacity of vector
    cout<<arr.capacity()<<endl;
    return 0;
}