#include <iostream>
#define NMAX 20
using namespace std;
int main()
{
	int a[NMAX][NMAX], n, x, i, j;
	cout << "n = "; cin >> n;
	cout << "x = "; cin >> x;
	for (i = 0; i < n; i++)
		a[0][i] = a[i][0] = x;
	for (i = 1; i < n; i++)
		for (j = 1; j < n; j++)
			a[i][j] = a[i][j-1] + a[i-1][j];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
