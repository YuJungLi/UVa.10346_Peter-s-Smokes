#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n, k;
	while (cin >> n >> k)
	{
		int sum = n;
		while (n / k)
		{
			sum += n / k;
			n = n / k + n%k;
		}
		cout << sum << endl;
	}
	return 0;
}