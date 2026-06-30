#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int product1_code,product2_code,product1_unite,product2_unite;
    double product1_price,product2_price, total;
    cin>>product1_code >>product1_unite>>product1_price;
    cin>>product2_code >>product2_unite>>product2_price;
    total = product1_unite * product1_price + product2_unite * product2_price;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}