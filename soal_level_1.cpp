#include <iostream>
#include <string>
using namespace std;

int main() {
    int totaldetik;
    int jam, menit, detik;

    cout << "Masukkan total detik: ";
    cin >> totaldetik;

    jam = totaldetik / 3600;
    menit = (totaldetik % 3600) / 60;       
    detik = totaldetik % 60;

    cout << "\nHasil Detik" << endl;
    cout << totaldetik << " Detik = " << jam << " jam, " << menit << " menit, " << detik << " detik" << endl;

    return 0;
}