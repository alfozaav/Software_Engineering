#include <iostream>

using namespace std;

int main() {
    int matrix[5][5];
    int posR, posC;
    int middlePosition = 2;

    //  Capture Matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    //  Find the One
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1 ) {
                posR = i;
                posC = j;
            }
        }
        cout << endl;
    }

    //  Steps to find middle position in Rows
    if ( posR == middlePosition) {
        posR = 0;
    }
    else if ( posR > middlePosition ) {
        posR = posR - middlePosition;
    } else if ( middlePosition > posR ) {
        posR = middlePosition - posR;
    }

    //  Steps to find 
    if ( posC == middlePosition) {
        posC = 0;
    }
    else if ( posC > middlePosition ) {
        posC = posC - middlePosition;
    } else if ( middlePosition > posC ) {
        posC = middlePosition - posC;
    }

    cout << posR + posC << endl;
    
}

