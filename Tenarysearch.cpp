#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n; int x; cin >> x;
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	int i = 0, j = n - 1;
	while(i < j)
	{
		int m1 = i + (j - i)/3;
		int m2 = j - (j - i + 3)/3;// để làm tròn xuống; hay nói cách khác là: chọn điểm m2 thụt xuống 1 trút để tránh việc lặp vô hạn
		if(x > a[m2]) i = m2 + 1;
		else if(x < a[m1])  j = m1 - 1;
		else
		{
			i = m1;
			j = m2;
		}
	}
	if (x == a[i]) cout << i; // nx: nếu phần tử cần tìm có nhiều giá trị giống nhau; nếu chúng ở giữa hoặc cuối mảng thì thuật này sẽ tìm ra ptu đầu tiên
	else cout << "no";// nếu chúng ở đầu mảng thì thuật này sẽ tìm ra ptu cuối cùng ?? tai sao :vv: qua nhiều lần tính tay thử ....
	return 0;
}
