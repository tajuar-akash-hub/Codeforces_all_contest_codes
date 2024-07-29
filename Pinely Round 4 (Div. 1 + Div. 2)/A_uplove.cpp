#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n;
        vector<int> v;
        int ans = 0;

        cin >> n;
        // taking elements of array

        for (int i = 0; i < n; i++)
        {

            int number;
            cin >> number;
            v.push_back(number);
        }
        // details explanation  : Check out my video

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {

                ans = max(ans, v[i]);
            }
        }
        cout << ans << endl;
    }

    // main logic's short explanation
    /*
    n will be odd so , so when we get even index number then there will be even number of value before it
    as the array 's index starts with 0 .
    for example
    we have 3 1 4 1 5 9 2
    here index starts with 0 , even indexes are : 0 , 2 , 4 , 6
    when index is 2 , the value is 4 (save it in a variable) before it there are two values .

    - > next index is 4 and value is 5 (save it).
    then
    -> last even index is 6 and value is 2 (definately not greater than 5)
    so 5 is the answer
    */
}