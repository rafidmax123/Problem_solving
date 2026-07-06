#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    cout << n << endl;

    for (int note : notes) {
        int count = n / note;
        n %= note;
        cout << count << " nota(s) de R$ " << note << ",00" << endl;
    }

    return 0;
}