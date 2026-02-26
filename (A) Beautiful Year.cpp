#include <bits\stdc++.h>
#define long long 'll'
#define nline '\n'

using namespace std;
bool check(int num)
{
    string str = to_string(num);
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[i] == str[j])
                return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int num;
    cin >> num;
    num++;
    while (check(num) != true)
    {
        num++;
    }
    cout << num;
}