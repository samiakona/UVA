#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string kona;
    int i=1;

    while( cin >> kona && kona != "*")
    {
        if("Umrah" == kona )
        {
            cout << "Case " << i++ << ": " <<"Hajj-e-Asghar" << endl;
        }
        else if("Hajj" == kona)
        {
            cout << "Case " << i++ << ": " <<"Hajj-e-Akbar" << endl;
        }

    }

    return 0;
}
