#include<iostream>
using namespace std;
int main()
{
    long long int year1,year2;
    int test, dd, mm,i,p;
    cin>>test;
    for(i=1; i<=test; i++)
    {
        int cnt=0;
        cin>> dd >> mm;
        cin>> year1 >> year2;
        if(dd!=29 || mm!=2)
        {
            cout << "Case " << i<< ":" <<" "<< year2-year1 << endl;
        }
        else
        {
            for(p=year1; p<=year2; p=p+4)
            {
                if((p%4==0 && p%100!=0) || p%400==0)
                {
                    cnt++;
                }
            }
            cout << "Case " << i<< ":" <<" "<< cnt-1 << endl;
        }
    }
    return 0;
}
