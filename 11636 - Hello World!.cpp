#include<iostream>
using namespace std;
int main()
{
    int cnt=0, Case=1;
    int s,n;
    while(cin>>n && n>0)
    {
        s = 1,cnt = 0;
        while(s < n)
        {
            s+=s;
            cnt++;
        }
        cout << "Case " << Case++ << ": " << cnt << endl;
    }
    return 0;
}
