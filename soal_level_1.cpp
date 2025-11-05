#include <iostream>
using namespace std;

int main()
{
    int waktu, j, m, s, sisa;

    cout << "Masukkan jumlah detik: ";
    cin >> waktu;

    j = waktu / 3600;
    sisa = waktu - j * 3600;
    m = sisa / 60;
    s = sisa - m * 60;

    cout << "\nKonversi:" << endl;
    cout << waktu << " detik = " << j << " jam " << m << " menit " << s << " detik" << endl;

    return 0;
}