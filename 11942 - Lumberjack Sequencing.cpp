#include<iostream>
using namespace std;
int main()
{
    int test;
    cout << "Lumberjacks:" << endl;
    cin>> test;

    for(int i=0; i<test; i++)
    {
        int flag1=0,flag2=0;
        int arr[13];
        int j;
        for(j=0; j<10; j++)
        {
            cin>> arr[j];
        }
        for(int j=0; j<9; j++)
        {

            if(arr[j]>arr[j+1])
            {
                flag1++;
            }
            if(arr[j+1] > arr[j])
            {
                flag2++;
            }
        }
        if(flag1==9 || flag2==9)
        {
            cout << "Ordered" << endl;
        }
        else
        {
            cout << "Unordered" << endl;
        }
    }
    return 0;
}
