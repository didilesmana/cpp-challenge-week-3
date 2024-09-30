#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main() { // Fungsi utama yang akan dieksekusi saat program berjalan
    int hours; // Mendeklarasikan variabel integer untuk menyimpan nilai jam
    std::cout << "Input Jam: "; // Menampilkan pesan "Input Jam: " ke layar
    std::cin >> hours; // Membaca input dari pengguna dan menyimpannya ke variabel hours

    // Menghitung jumlah menit dalam jam yang diberikan
    int minutes = hours * 60; 

    // Menghitung jumlah detik dalam jam yang diberikan
    int seconds = hours * 3600; 

    // Menampilkan hasil konversi ke layar
    std::cout << hours << " jam = " << minutes << " menit = " << seconds << " detik" << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}