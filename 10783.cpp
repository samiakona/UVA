#include<iostream>
using namespace std;

int main()
{
    int k,s;
    int T, Case;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        cin >> k >> s;
        int sum = 0;
        for(int j = k; j <=s; j++)
        {
            if(j%2!=0)
            {
                sum = sum + j;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}
