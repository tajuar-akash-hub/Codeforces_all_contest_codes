#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    

    while (n--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1<y1 && x2 <y2 ){
            cout<<"YES"<<endl;;
        }
        else if(x1>y1 && x2>y2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




    }

        
    return 0;
}
