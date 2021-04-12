#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char c = toupper(s[0]);
    string s2;

    s2.push_back(c);
    for ( int i = 1; i < s.size(); i++ ) {
      s2.push_back(s[i]);
    }

    cout << s2 << endl;
}