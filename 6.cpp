#include <iostream> // Mengimpor pustaka iostream untuk input dan output

int main() { // Fungsi utama yang akan dieksekusi saat program berjalan
    // Program 1: Menghitung Sisa Pembagian
    int input1, input2; // Mendeklarasikan variabel integer untuk bilangan yang dibagi dan bilangan pembagi
    std::cout << "Input bilangan yang dibagi: "; // Menampilkan pesan "Input bilangan yang dibagi: " ke layar
    std::cin >> input1; // Membaca input dari pengguna dan menyimpannya ke variabel input1
    std::cout << "Input bilangan pembagi: "; // Menampilkan pesan "Input bilangan pembagi: " ke layar
    std::cin >> input2; // Membaca input dari pengguna dan menyimpannya ke variabel input2

    // Menghitung hasil bagi dan sisa pembagian
    int hasil = input1 / input2; 
    int sisa = input1 % input2; 

    // Menampilkan hasil pembagian dan sisa pembagian ke layar
    std::cout << input1 << " dibagi " << input2 << " adalah " << hasil << " dengan sisa " << sisa << std::endl;

    return 0; // Mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}