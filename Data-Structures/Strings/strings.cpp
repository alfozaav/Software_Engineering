#include <iostream>
#include <string>

using namespace std::string;

int main() {
    //  Initialize
    string s1;
    string s2 = s1;
    string 3 = "hiya";
    string s4(10, 'c');

    // Common Operations
    cin >> s1; //   Read input into s1;
    int size = s1.size(); // Returns number of chars in s1
    bool isEmpty = s1.empty(); //  Returns if is empty or not
    string s5 = s2 + s3;

    //  Get a string from input but keep whitespaces
    string line;
    while (getline(cin, line)
        cout << line << endl;

    return 0;
}