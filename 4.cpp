#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main() { // Fungsi utama yang akan dieksekusi saat program berjalan
    float pi = 3.14159; // Mendeklarasikan variabel pi dengan nilai 3.14159
    float r, luas, keliling; // Mendeklarasikan variabel r, luas, dan keliling dengan tipe data float

    // Meminta pengguna untuk memasukkan jari-jari lingkaran
    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> r; // Mengambil input dari pengguna dan menyimpannya di variabel r

    // Menghitung luas dan keliling lingkaran
    luas = pi * r * r; // Menghitung luas lingkaran
    keliling = 2 * pi * r; // Menghitung keliling lingkaran

    // Menampilkan hasil perhitungan luas dan keliling lingkaran
    std::cout << "Luas lingkaran: " << luas << std::endl;
    std::cout << "Keliling lingkaran: " << keliling << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}