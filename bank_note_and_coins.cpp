#include <iostream>
using namespace std;

int main() {
    double value;
    cin >> value;

    int cents = int(value * 100 + 0.5);

    int notes[] = {100, 50, 20, 10, 5, 2};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int note : notes) {
        int count = cents / (note * 100);
        cents %= note * 100;
        cout << count << " nota(s) de R$ " << note << ",00" << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int coin : coins) {
        int count = cents / coin;
        cents %= coin;

        int reais = coin / 100;
        int centavos = coin % 100;
        cout << count << " moeda(s) de R$ " << reais << ",";
        if (centavos < 10) cout << "0";
        cout << centavos << endl;
    }

    return 0;
}