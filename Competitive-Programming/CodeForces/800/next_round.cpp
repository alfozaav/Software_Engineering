#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int score;
    int counter = 0;
    vector<int> scores;

    for ( int i = 0; i < n; i++ ) {
        cin >> score;
        scores.push_back(score);
    }

    for ( int i = 0; i < scores.size(); i++ ) {
        if ( scores[i] >= scores[k - 1] && scores[i] > 0 ) counter++;
    }
    cout << counter << endl;
}