#include "hashtable.h"

Hashtable::Hashtable(int initialSize) {
    size = 0;
    capacity = initialSize;

    values = new string[capacity];
}

Hashtable::~Hashtable() {
    delete[] values;
}

int Hashtable::hash(string key) {
    int result = 0;

    for(auto character : key) {
        result += character; // add unicode values together!
    }

    return result % capacity; // mod capacity so that the index is guaranteed to be in my table!
}

int Hashtable::add(string newKey) {
    int result = 0;

    // find index of key, place value at index position in values array
    int index = hash(newKey);

    // should have collision detection and handling... and update size appropriately
    if(values[index] == "" && newKey != "") {
        size++;
    } else { // either collision or inserting a newKey of ""
        result = -1;
    }

    // then write to correct position
    values[index] = newKey;

    return result; // maybe a different return value on collision?
}

// Calculate index from key, find and return that index from values array if it matches the proposed key, return an empty string otherwise.
string Hashtable::find(string key) {
    string result = "";

    // find index of key
    int index = hash(key);
    
    // grab value stored at index in values array
    result = values[index];

    // check if value is the expected value!
    if(result != key) {
        result = "";
    }

    // return resulting value
    return result;
}
