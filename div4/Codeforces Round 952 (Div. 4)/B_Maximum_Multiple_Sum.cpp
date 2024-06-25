#include <bits/stdc++.h>
using namespace std;
int main()
{
  
  
  int test; 
  cin>> test;
  while(test--){
    vector <int> v1;
    
    int n;
    int x ;
    cin>>n;

    vector <int> v;
    for(int i=2;i<=n;i++){
        v.push_back(i);
    }

    
   
    for(int i=0;i<v.size();i++){
        int sum = 0;
        for(int j=v[i];j<=n;j=j+v[i]){
            sum = sum + j;
        }
        v1.push_back(sum);

    }

    // Find the maximum sum and corresponding x
        int maxSumIndex = max_element(v1.begin(), v1.end()) - v1.begin();
        int maxX = v[maxSumIndex];

        // Output the optimal value of x
        cout << maxX << endl;

    


    




    

    //code 


    



  }  
}