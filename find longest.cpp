#include <iostream>

#include <fstream>

#include <cstdlib>

std::string word;

std::string longest_word;

using namespace std;

struct Sort {

       int size;

};

int main()

{
 ifstream inStream;


 string  word;

 string longest_word;

 Sort size;
inStream.open("words.txt", ifstream ::in);

while(inStream) {
    inStream >> word;

    if (word.size () > longest_word.size ())

    longest_word = word;

}
cout << longest_word << endl;

    system("PAUSE");

    return EXIT_SUCCESS;


inStream.close( );

}
