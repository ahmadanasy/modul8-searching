#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Fungsi binary search untuk mencari huruf dalam string
int binarySearch(const string &str, char target) {
    int left = 0;
    int right = str.length() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (str[mid] == target) {
            return mid; // huruf ditemukan
        } else if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // huruf tidak ditemukan
}

int main() {
    string kalimat;
    char huruf;

    // Input kalimat
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    // Mengurutkan kalimat terlebih dahulu agar binary search dapat bekerja
    sort(kalimat.begin(), kalimat.end());
    
    // Input huruf yang dicari
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;
    
    // Melakukan binary search pada kalimat
    int posisi = binarySearch(kalimat, huruf);
    
    // Mengecek apakah huruf ditemukan atau tidak
    if (posisi != -1) {
        cout << "Huruf \"" << huruf << "\" ditemukan pada posisi ke-" << posisi + 1 << " dalam kalimat." << endl;
    } else {
        cout << "Huruf \"" << huruf << "\" tidak ditemukan dalam kalimat." << endl;
    }
    
    return 0;
}