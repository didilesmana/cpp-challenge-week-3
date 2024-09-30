#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main() { // Fungsi utama yang akan dieksekusi saat program berjalan
    int celsius; // Mendeklarasikan variabel integer untuk menyimpan nilai suhu dalam Celcius
    std::cout << "Input suhu celcius: "; // Menampilkan pesan "Input 27suhu celcius: " ke layar
    std::cin >> celsius; // Membaca input dari pengguna dan menyimpannya ke variabel celsius

    // Menghitung suhu dalam Fahrenheit menggunakan rumus konversi
    double fahrenheit = (celsius * 9.0 / 5.0) + 32; 
    // Menampilkan hasil konversi ke layar
    std::cout << celsius << " Celcius = " << fahrenheit << " Fahrenheit" << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}