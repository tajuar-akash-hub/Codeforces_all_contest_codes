//bruteforce solution 

#include <bits/stdc++.h>
using namespace std;

int time_calculation(string password)
{
    int total_time = 2; // Starting time

    for (int i = 1; i < password.size(); i++)
    { // Start from index 1
        if (password[i] == password[i - 1])
        {
            total_time += 1;
        }
        else
        {
            total_time += 2;
        }
    }
    return total_time;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string password;
        cin >> password;
        int Max_time = time_calculation(password);
        string best_password = "";

        // Trying all possible iterations
        for (int i = 0; i <= password.size(); i++)
        { // <= to include the position after the last character
            for (char j = 'a'; j <= 'z'; j++)
            {

                string new_password = password.substr(0, i) + j + password.substr(i); // creating substring

                int new_time = time_calculation(new_password);

                if (new_time > Max_time)
                {
                    Max_time = new_time;
                    best_password = new_password;
                }
            }
        }
        cout << best_password << endl;
    }
    return 0;
}
