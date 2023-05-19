#include <iostream>
#include <string>

#include "hashtable.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    Hashtable ht;

    // empty find test
    cout << "find Joseph in empty hashtable: \"" << ht.find("Joseph") << "\" (\"\" is expected)" << endl;

    // simple add test
    cout << "add Joseph to empty hashtable: \"" << ht.add("Joseph") << "\" (\"0\" expected)" << endl;

    // simple find test
    cout << "find Joseph in hashtable containing just Joseph at the correct position: \"" << ht.find("Joseph") << "\" (\"Joseph\" is expected)" << endl;



    // overwrite add test
    cout << "add Jospeh to hashtable containing just Joseph at the correct position: \"" << ht.add("Jospeh") << "\" (\"-1\" expected)" << endl;
    // Test changed because data structure changed! cout << "add Jospeh to hashtable containing just Joseph at the correct position: \"" << ht.add("Jospeh") << "\" (\"0\" expected... we should add collision detection code to the add function...)" << endl;

    // overwritten find test
    cout << "find Joseph in hashtable containing just Jospeh at the correct position: \"" << ht.find("Joseph") << "\" (\"\" is expected)" << endl;

    // add additional values, fun!
    for(int i = 0; i < 100; ++i) {
        ht.add(std::to_string(i));
        cout << "add and find additional values (" << i << "): " << ht.find(std::to_string(i)) << endl;
    }
    for(int i = 0; i < 100; ++i) {
        cout << "add and find additional values (" << i << "): " << ht.find(std::to_string(i)) << endl;
    }



    return 0;
}