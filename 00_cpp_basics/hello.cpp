#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;

using std::printf;

int main() {
    int eger = 42;
    float ing = 3.14;
    char mander = '\0';
    long long longNumber = 99999999;
    short stack = 65535;
    bool isTrue = false; // talk about truthiness and falsiness...!  Even works as a number, scary!
    
    int *intPtr = &eger;
    void *empty;  // complicated... could point to anything

    if(eger) {
        cout << "eger (" << eger << ") is truthy!" << endl;
        printf("eger (%i), is truthy! Plus some more values: ing: %f, mander: %c!\n", eger, ing, mander);
    } else {
        cout << "eger (" << eger << ") is falsey!" << endl;
    }

    if(mander) {
        cout << "mander (" << mander << ") is truthy!" << endl;
    } else {
        cout << "mander (" << mander << ") is falsey!" << endl;
    }

    cout << "!isTrue (" << !isTrue << ")!" << endl;

    cout << "intPtr (" << intPtr << ")!" << endl;
    cout << "&intPtr (" << &intPtr << ")!" << endl;
    cout << "*intPtr (" << *intPtr << ")!" << endl;

    cout << "Goodbye?" << endl << endl;

    return 0;
}
