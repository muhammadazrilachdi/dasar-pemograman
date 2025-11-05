#include <iostream>
using namespace std;

int main()
{
    int n, hr, jm, mn, dt, x;

    cout << "Masukkan jumlah detik: ";
    cin >> n;

    hr = n / 86400;
    x = n - hr * 86400;
    jm = x / 3600;
    x = x - jm * 3600;
    mn = x / 60;
    dt = x - mn * 60;

    cout << "\n>> Hasil Konversi <<" << endl;
    cout << n << " detik = " << hr << " hari " << jm << " jam " << mn << " menit " << dt << " detik" << endl;

    return 0;
}