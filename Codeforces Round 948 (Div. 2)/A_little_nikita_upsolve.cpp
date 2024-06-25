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

        if(moves%2 != resulted_tower_cubes%2) {
			cout<<"No\n";
			continue;
		}

		if(moves < resulted_tower_cubes) {
			cout<<"No\n";
			continue;
		}
		cout<<"Yes\n";

        
        
    }

   


   


}
  

  
