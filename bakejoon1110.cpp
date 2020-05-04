#include <iostream>  
using namespace std;

int main() {
    int n;
    int result;
    int cnt = 0;
    cin >> n;
    result = n;
    int fir, sec;
    while (1) {
        if (result < 10) {
            fir = 0;
            sec = result;
        }
        else {
            fir = result / 10;
            sec = result % 10;


        }

        result = (fir + sec) % 10;
        result = (sec * 10) + result;
        cnt++;
        if (result == n) { break; }

    }

    cout << cnt;
}