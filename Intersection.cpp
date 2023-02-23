#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n; int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int dem = 0; // bien luu so lan so sanh
	for (int j = 1; j < n; j++)
	{
		int i = 0; 
		while(a[j] > a[i]) 
		{
		i = i + 1; 
		dem++; // moi lan so sanh a[j] voi a[i] ta se tang bien dem len 1 don vi
		} 
		dem++; // cong them lan so sanh cuoi cung de thoat khoi vong lap
		int m = a[j];
		for (int k = j; k > i; k--) a[k] = a[k - 1];
		a[i] = m;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl << dem;
	return 0;
}
