#include<bits/stdc++.h>

using namespace std;


int main ()
{
    int n , i , cnt=0 , maxx=1 , com=1 ;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>=ar[i-1])
        {
            cnt++;
            com = max(com,cnt);
        }
        else
        {
           cnt=1;
        }
    }
    cout<<com<<endl;
}

// int main() {
//     int n;
//     cin >> n;

//     int num;
//     vector<int> nums;

//     for ( int i = 0; i < n; i++ ) {
//         cin >> num;
//         nums.push_back(num);
//     }

//     int counter = 0;

//     for ( int i = 0; i < nums.size(); i++ ) {
//         if ( nums[i] <= nums[ i + 1] ) {
//             counter++;
//         } 
//     }

//     cout << endl << counter << endl;
// }