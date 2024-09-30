#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main() {
    int num1, num2; // Mendeklarasikan dua variabel bilangan bulat

    // Meminta pengguna untuk memasukkan bilangan bulat pertama
    std::cout << "Masukkan bilangan bulat pertama: ";
    std::cin >> num1;

    // Meminta pengguna untuk memasukkan bilangan bulat kedua
    std::cout << "Masukkan bilangan bulat kedua: ";
    std::cin >> num2;

    // Melakukan operasi aritmatika dasar
    int penjumlahan = num1 + num2; // Penjumlahan
    int pengurangan = num1 - num2; // Pengurangan
    int perkalian = num1 * num2; // Perkalian
    int pembagian = num1 / num2; // Pembagian

    // Menampilkan hasil operasi aritmatika
    std::cout << "Penjumlahan: " << penjumlahan << std::endl;
    std::cout << "Pengurangan: " << pengurangan << std::endl;
    std::cout << "Perkalian: " << perkalian << std::endl;
    std::cout << "Pembagian: " << pembagian << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}
