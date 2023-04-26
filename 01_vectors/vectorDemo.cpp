#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    // a vector needs some kind of data type provided on creation of the vector
    vector<int> myIntVector;

    myIntVector.push_back(42);
    myIntVector.push_back(20);
    myIntVector.push_back(10);

    cout << "myIntVector[0]: " << myIntVector[0] << endl;
    cout << "myIntVector[1]: " << myIntVector[1] << endl;
    cout << "myIntVector[2]: " << myIntVector[2] << endl;

    // string vector; a vector can be of any type that meets the requirements of the templated parameter
    vector<string> myStringVector;
    myStringVector.push_back("hello");
    myStringVector.push_back("goodbye");

    cout << "myStringVector[0]: " << myStringVector[0] << endl;
    cout << "myStringVector[1]: " << myStringVector[1] << endl;

    return 0;
}