#include<iostream>
using namespace std;

//Deklarasi Global
    float p,l;

//implementasi prosedure & fungsi
void input()
{
    cout << "masukkan panjang :";
    cin >> p;
    cout << "masukkan lebar :";
    cin >> l;
}
float LuasPersegi(){
    return p*l;
}
