#include <iostream>
#include <string>

using namespace std::string;

int main() {
    string str = "some string";

    //  For every char in str, print the current char
    for (auto c : str) 
        cout << c << endl;

    string s2 = "Hello World"
    decltype(s2.size()) punct_cnt = 0; // decltype gives punct_cnt(wich is a variable) the same data type as s2.size(), wich is int
    //  Count the number of punctuation chars in s2
    for ( auto c : s2 )
        if ( ispunct(c) ) // if the char is punctuation
            ++punct_cnt;
    cout << punct_cnt << "punctuation characters in " << s << endl;

    //  Char operations
    isalnum(c) // true if c is a letter of digit
    isalpha(c) // true if c is a letter
    iscntrl(c) // true if c is a control char
    isdigit(c) // true if c is a digit
    isgraph(c) // true if c is not a space but is printable
    islower(c) // true if c is a lowercase letter
    isprint(c) // true if c is a printable char (has visible representation)
    ispunct(c) // true if c is a punctuation char (that is not a control char, digit, letter o printable whitespace)
    isspace(c) // true if c is whitespace (space, tab, vertical tab, return, newline, formfeed)
    isupper(c) // true if c is a uppercase letter
    isxdigit(c) // true if c is a hexadecimal digit
    tolower(c) // converts uppercase letter to lowercase, otherwise retuens c unchanched
    toupper(c) // converts lowecase letter to uppercase, otherwise returns c unchanged

    // example: convert to uppercase
    string s3 = "Hello World!!!";
    // string s3("Hello World!!!")
    for ( auto &c  : s3)  // c is a reference
        c = toupper(c);  // assigment chanfes the char in s3
    cout << s << endl;

    // Point to beginning of a string without using C-Style chars
    const char *str = s.c_str();

    return 0;
}