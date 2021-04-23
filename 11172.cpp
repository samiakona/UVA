#include<iostream>
using namespace std;
int main()
{
    int i, t, x, y;
    cin>> t;
    for(i=0; i<t; i++)
    {
        cin >> x >> y;
        if(x>y)
        {
            printf(">\n");
        }
        else if(x<y)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }

    }
    return 0;
}
