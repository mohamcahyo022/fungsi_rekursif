#include <iostream>
using namespace std;

double deretGeometri(double a, double r, int n) {
    if (n == 1) {
        return a;
    } else {
        return r * deretGeometri(a, r, n-1);
    }
}

int main() {
    double a, r;
    int n;
    cout << "|=== PROGRAM MENGHITUNG DERET GEOMETRI ===|"<<endl;
    cout << "|===       DENGAN FUNGSI REKURSIF      ===|"<<endl<<endl;
    cout << "Masukkan nilai awal: ";
    cin >> a;
    cout << "Masukkan rasio: ";
    cin >> r;
    cout << "Masukkan jumlah suku: ";
    cin >> n;
    double hasil = deretGeometri(a, r, n);
    cout << "Jumlah suku ke " <<n<<" adalah : " << hasil << endl;
    return 0;
}
