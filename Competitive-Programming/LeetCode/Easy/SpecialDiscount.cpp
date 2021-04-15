// Final Prices With a Special Discount in a Shop
#include <iostream>
#include <vector>

using namespace std;
vector<int> finalPrices(vector<int>& prices);
void printVector(vector<int>& arrPrint);

int main() {
    int n, c;
    vector<int> prices;

    cout << "How many items you´ll pass?" << endl;
    cin >> n;

    cout << "Please enter " << n << "numbers to fill vector!" << endl;
    for ( int i = 0; i < n; i++) {
        cin >> c;
        prices.push_back(c);
    }
    printVector(prices);

    cout << "Vector filled!" << endl;

    finalPrices(prices);

    return 0;
}

vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    vector<int> res;
    for ( int i = 0; i != prices.size(); i++ ) {
        res.push_back(prices[i]);
        for ( int j = i + 1; j != prices.size(); j++ ) {
            if ( prices[j] <= prices[i] ) {
                res[i] -= prices[j];
                break;
            }
        }
    }

    printVector(res);
    return res;
}

void printVector(vector<int>& arrPrint) {
    for ( int i = 0; i < arrPrint.size(); i++ ) {
        cout << arrPrint[i];
    }
    cout << endl;
}