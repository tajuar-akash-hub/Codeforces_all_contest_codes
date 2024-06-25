#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long initialDifference = x1 - y1;
        long long finalDifference = x2 - y2;
        
        // if (initialDifference != 0) {
        //     if (finalDifference != 0) {
        //         if ((initialDifference > 0 && finalDifference > 0) || (initialDifference < 0 && finalDifference < 0)) {
        //             cout << "YES" << endl;
        //         } 
        //         else {
        //             cout << "NO" << endl;
        //         }
        //     } 
        //     else {
        //         cout << "NO" << endl;
        //     }
        // } 
        // else {
        //     cout << "NO" << endl;
        // }

        if ((initialDifference > 0 && finalDifference > 0) || (initialDifference < 0 && finalDifference < 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
