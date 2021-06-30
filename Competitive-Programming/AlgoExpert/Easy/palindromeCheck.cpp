//  Function that detects if a string is palindrome
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isPalindrome( string str ) {
    int length = str.size();
    int flag = 0;

    for ( int i = 0; i != length; i++ ) {
        if ( str[i] != str[length - i - 1] )
            flag = 1;
            break;
    }
    if (flag) return false;
    else return true;
}

int main() {
    string str = "abcdcba";
    cout << "The string " << str << " is a palindrome?" << endl;
    if ( isPalindrome(str) ) cout << "Yes, it is a palindrome." << endl;
    else cout << "No, it is not a palindrome." << endl;
    return 0;
}