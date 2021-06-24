
#include<iostream>
#include<cstring>
using namespace std;
int mian()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s.size()==5)
        {
            cout<<"3"<<endl;
        }

        else
        {
            if((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e'))
            {
                cout<<"1"<<endl;
            }

            else
            {
                cout<<"2"<<endl;
            }

        }
    }
    return 0;

}
