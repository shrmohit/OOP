// File handling is used to perform read and write operation on a file.
// read/write are classes in file handling
// read -> ofstram
// write -> ifstream
#include <iostream>
#include <fstream>
using namespace std;

int main()
{ // WRITE
    // File ko open karna
    ofstream fopn;
    fopn.open("zoom.txt");
    // file me write kar sakta hu
    fopn << "Hello India";

    fopn.close(); // resource release kar paauon
                  // READ
    // file ko open karna
    ifstream fin;
    fin.open("zoom.txt");
    // file read karo
    char c;
    // fin >> c;
    c = fin.get();
    while (!fin.eof())
    {
        cout << c;
        // fin >> c; // not take space as a character
        c = fin.get();
    };
    // note space as a character
    fin.close();
}