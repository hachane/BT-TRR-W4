#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n; int a[100]{}, c[100]{}, max1 = 0; // khai bao du ra mot chut de tranh tran mang
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (max1 < a[i]) max1 = a[i];
	}
	max1++;// de tao mang danh dau tu 0 1 2 3 ..... max1 co max1 + 1 phan tu
	int b[100] = {0};
	for (int i = 0; i < n; i++)	    b[a[i]]++;
	for (int i = 1; i < max1; i++)  b[i] += b[i - 1];
	for (int i = 0; i < n; i++)
	{
		c[b[a[i]]] = a[i];
		b[a[i]]--;
	}
	for (int i = 1; i <= n; i++) cout << c[i] << " ";
	return 0;
}
