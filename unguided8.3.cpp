#include <iostream>
using namespace std;

// Fungsi untuk mencari jumlah kemunculan suatu angka dalam array dengan Sequential Search
int hitungAngka(const int data[], int ukuran, int angka) {
    int jumlah = 0;
    for (int i = 0; i < ukuran; ++i) {
        if (data[i] == angka) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    const int ukuran = 10;
    int data[ukuran] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int angkaYangDicari = 4;
    
    // Menghitung jumlah kemunculan angka 4 dalam data menggunakan Sequential Search
    int jumlahAngka4 = hitungAngka(data, ukuran, angkaYangDicari);
    
    // Menampilkan hasil
    cout << "Jumlah angka " << angkaYangDicari << " dalam data adalah: " << jumlahAngka4 << endl;
    
    return 0;
}