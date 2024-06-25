#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int moves,resulted_tower_cubes;
    cin>>test;
    while(test--)
    {
        cin>>moves>>resulted_tower_cubes;

        int initial =0;
        
        for(int i=0;i<moves;i++)
        {
            if (initial > resulted_tower_cubes){
                initial--;
            }

            else{
                initial++;
            }

        }

        if (initial == resulted_tower_cubes){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

        
    }

   


   


}
  

  
