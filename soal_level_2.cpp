#include <iostream>
#include <string>
using namespace std;

int main() {
    int totaldetik;
    int hari, jam, menit, detik;

    cout << "Masukkan total detik: ";
    cin >> totaldetik;

    hari = totaldetik / 86400;
    jam = (totaldetik % 86400) / 3600;
    menit = (totaldetik % 3600) / 60;       
    detik = totaldetik % 60;

    cout << "\nHasil Detik" << endl;
    cout << totaldetik << " Detik = " << hari << " hari, " << jam << " jam, " << menit << " menit, " << detik << " detik" << endl;

    return 0;
}
