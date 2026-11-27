#include <iostream>
#include <vector>
using namespace std;

string sortString(string &s)
{
    vector<int> freq(26, 0);

    // count frequency
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }

    string ans = "";

    // rebuild in sorted order
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] > 0)
        {
            ans += (char)(i + 'a');
            freq[i]--;
        }
    }

    return ans;
}

// Driver Code
int main()
{
    string s = "xzy";

    cout << sortString(s);

    return 0;
}