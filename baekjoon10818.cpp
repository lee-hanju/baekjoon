#include <iostream>
#include<algorithm>
using namespace std;

int n[1000000];

int main() {
	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {	
		cin >> n[i];
	}
	cout << *min_element(n, n + size) << " " << *max_element(n, n + size) << endl;
}