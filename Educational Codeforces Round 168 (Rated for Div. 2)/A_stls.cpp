#include <bits/stdc++.h>
using namespace std;
int main()
{
    // explanation of stl substring
    // string s = "Akash is my name";
    string s = "akash"; 
    //   string s_sub = s.substr(12,4); //starting index and length of the chracter

    // using find to find index of string
    //  int index = s.find("name");
    //  cout<<index;

    // without manually inputting value
    // for (int i = 0; i < s.size(); i++)
    // {
    //     int index = s.find("Akash");
    //     string s_sub = s.substr(index, 5);
    //     cout<<s_sub<<endl;
    // }

    // now let's generate some substring putting some character a to z

    for (int i = 0; i < s.size(); i++)
    {
        for(char j = 'a' ; j<='z';j++){
            string temp = s.substr(0,i) + j + s.substr(i);
            cout<<temp<<endl;
        }
        cout<<endl;
    }
}