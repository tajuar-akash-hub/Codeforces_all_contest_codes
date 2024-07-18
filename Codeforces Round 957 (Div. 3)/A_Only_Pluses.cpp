#include <bits/stdc++.h>
using namespace std;
void solve(int n1, int n2, int n3)
{
    long long int max_number;
    vector <long long int> v;
    
    for (int i = 0; i <= 5; i++)
    {


        for (int j = 0; j <= 5; j++)
        {

            for (int k = 0; k <= 5; k++)
            {

                if (i + j + k <= 5)
                {

                    // cout << i << " " << j << " " << k << endl;
                    max_number = (n1+i) * (n2+j) * (n3+k);
                    v.push_back(max_number);
                    
                    

                }
            }
        }
    }
    long long int max_value ;
    max_value = *max_element(v.begin(),v.end());
    cout<<max_value<<endl;

    
}
int main()
{
    int test; cin>>test;
    while(test--){
        vector <int> v;
        for(int i=0;i<3;i++){
            int n;
            cin>>n;
            v.push_back(n);
            
        }

        sort(v.begin(),v.end());
        long long int n1,n2,n3;
        n1=v[0];
        n2=v[1];
        n3 = v[2];
        solve(n1,n2,n3);
        
      

    }


}