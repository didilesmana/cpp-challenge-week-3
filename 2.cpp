#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main()
{
    int num1, num2, num3; // Mendeklarasikan tiga variabel bilangan bulat

    // Meminta pengguna untuk memasukkan bilangan bulat pertama
    std::cout << "Masukkan bilangan bulat pertama: ";
    std::cin >> num1;

    // Meminta pengguna untuk memasukkan bilangan bulat kedua
    std::cout << "Masukkan bilangan bulat kedua: ";
    std::cin >> num2;

    // Meminta pengguna untuk memasukkan bilangan bulat ketiga
    std::cout << "Masukkan bilangan bulat ketiga: ";
    std::cin >> num3;

    // Menghitung rata-rata dari tiga bilangan
    double rataRata = (num1 + num2 + num3) / 3.0; // Menggunakan 3.0 untuk memastikan hasil pembagian adalah tipe data double

    // Menampilkan hasil rata-rata
    std::cout << "Rata-rata: " << rataRata << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}