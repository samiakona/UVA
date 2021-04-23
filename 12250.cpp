#include<bits/stdc++.h>

using namespace std;

int main()
{
    string kona;
    int t = 1;

    cin >> kona;
    while (kona != "#")
    {
        printf("Case %d: ", t);

        if (kona == "HELLO")
            cout<< "ENGLISH"<<'\n';

        else if (kona == "HOLA")
            cout<< "SPANISH" <<'\n';

        else if (kona == "HALLO")
            cout<< "GERMAN" <<'\n';

        else if (kona == "BONJOUR")
            cout<< "FRENCH"<<'\n';

        else if (kona == "CIAO")
            cout<< "ITALIAN"<<'\n';

        else if (kona == "ZDRAVSTVUJTE")
            cout<< "RUSSIAN"<< '\n';

        else
            cout<< "UNKNOWN"<<'\n';

        ++t;

        cin >> kona;
    }

    return 0;
}

