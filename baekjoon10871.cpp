#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int a;
	for (int i = 1; i <= n; i++) 
	{
		cin >> a;
		if (x > a)
		{
			cout << a << " ";
		}
	}
}