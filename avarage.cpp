#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double A,B,C;
    cin >> A>>B;
    C=A/B;
    cout << fixed << setprecision(2) <<"MEDIA = "<< C << endl;
    return 0;
}