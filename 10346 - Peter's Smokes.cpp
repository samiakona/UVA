#include<iostream>
using namespace std;
int main()
{
    int n,k,c,T;
    while(scanf("%d %d", &n, &k)!=EOF)
    {
        T = n;

		while(n >= k) {

			c = n / k;

			T = T + c;

			n = n % k;

			n = n + c;;

		}
		cout << T << endl;

    }

    return 0;
}
