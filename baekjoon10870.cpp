#include <iostream>
using namespace std;
int f(int num)
{
    static int mem[21];//메모이제이션
    if (mem[num] != 0)
    {
        return mem[num];
    }
    if (num == 0 )
    {
        return mem[num] = 0;
    }
    if (num == 1)
    {
        return mem[num] = 1;
    }
    return mem[num] = f(num - 1) + f(num - 2);
}
int main() {
    int num;
    cin >> num;
    cout << f(num);
}