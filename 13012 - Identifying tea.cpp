#include<iostream>
using namespace std;
int main()
{
    int T;
    int flag=0;
    int data;

    while(scanf("%d", &data)!=EOF)
    {
        flag=0;
        int arr[5];
        for(int i=0; i<5; i++)
        {
            cin>>arr[i];
            if(arr[i]==data)
                flag++;
        }
        cout<< flag<<endl;
        flag=0;
    }

    return 0;
}


















