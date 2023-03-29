#include <iostream>
using namespace std;

double pangkat(double x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * pangkat(x, n-1);
    }
}

int main() {
    double x;
    int n;
    cout << "|=== PROGRAM MENGHITUNG PANGKAT BILANGAN ===|"<<endl;
    cout << "|===        DENGAN FUNGSI REKURSIF       ===|"<<endl<<endl;
    cout << "Masukkan bilangan: ";
    cin >> x;
    cout << "Masukkan pangkat: ";
    cin >> n;
    double hasil = pangkat(x, n);
    cout << "Hasil Dari " << x << " pangkat " << n << " adalah : " << hasil << endl;
    return 0;
}
