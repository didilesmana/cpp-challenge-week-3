#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main() { // Fungsi utama yang akan dieksekusi saat program berjalan
    // Konversi Usia ke Hari
    int usia; // Mendeklarasikan variabel integer untuk usia
    std::cout << "Masukkan usia: "; // Menampilkan pesan ke layar
    std::cin >> usia; // Meminta input dari pengguna

    int tahun = usia; // Usia dalam tahun adalah usia itu sendiri
    int bulan = usia * 12; // Menghitung bulan dengan mengalikan usia dengan 12
    int hari = usia * 365; // Menghitung hari dengan mengalikan usia dengan 365
    int total_hari = usia; // Menginisialisasi total_hari dengan nilai usia

    // Menampilkan hasil konversi ke layar
    std::cout << tahun << " tahun = " << bulan << " bulan = " << hari << " hari" << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}