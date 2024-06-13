#include <iostream>
#include <string>
#include <cctype> // Untuk fungsi isalpha dan tolower

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat
int hitungVokal(const string &kalimat)
{
    int jumlahVokal = 0;
    for (char huruf : kalimat)
    {
        // Mengonversi huruf menjadi huruf kecil
        char lowerHuruf = tolower(huruf);
        // Memeriksa apakah huruf merupakan huruf vokal
        if (lowerHuruf == 'a' || lowerHuruf == 'e' || lowerHuruf == 'i' || lowerHuruf == 'o' || lowerHuruf == 'u')
        {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main()
{
    string kalimat;
    // Input kalimat dari pengguna
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    // Menghitung jumlah huruf vokal dalam kalimat
    int jumlahVokal = hitungVokal(kalimat);
    
    // Menampilkan hasil
    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal << endl;
    
    return 0;
}