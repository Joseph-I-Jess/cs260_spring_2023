#include "hashtable.h"

Hashtable::Hashtable(int initialSize) {
    size = 0;
    capacity = initialSize;

    values = new string[capacity];
}

Hashtable::~Hashtable() {
    delete[] values;
}

// Find index of key by adding unicode values together and modding by table capacity, returning the index
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

    // then write to correct position (current collision handling technique: overwrite old value...)
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

string Hashtable::remove(string oldKey) {
    string result = "";
    //calculate index with hash
    int index = hash(oldKey);

    // get value from index of array
    result = values[index];

    // check if value is the expected value!
    if(result != oldKey) {
        result = "";
    } else {
        values[index] = ""; // actually delete the value!
        size--;
    }

    // return that value
    return result;
}

int Hashtable::getSize() { return size; }
int Hashtable::getCapacity() { return capacity; }
