#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Vector Syntax
    vector<int> arr={1,2,3,4,5,6};

    // Command to remove last element 
    arr.pop_back(); 

    //Push-back function(it inserts an element in the last of array) 0(1)
    arr.push_back(7);

    // Print all elements of vector
    for (int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]<<endl;
    }

    // Size of vector(Number of elements)
    cout<<arr.size()<<endl;

    // Capacity of vector
    cout<<arr.capacity()<<endl;
    return 0;
}