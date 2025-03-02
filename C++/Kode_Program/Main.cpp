#include <iostream> // Library untuk fungsi input-output
#include <string>   // Library untuk tipe data string
#include <iomanip>  // Library untuk fungsi manipulasi input-output

using namespace std; // Menggunakan namespace std untuk mempermudah pemanggilan fungsi standar

#include "Petshop.cpp"   // Menggunakan file header Petshop.cpp
#include "Aksesoris.cpp" // Menggunakan file header Aksesoris.cpp
#include "Baju.cpp"      // Menggunakan file header Baju.cpp

int main()
{
    Baju shop[51];                                         // Array untuk menyimpan daftar barang hingga maksimal 51 item
    int n;                                                 // Variabel untuk menyimpan jumlah data yang akan ditambahkan oleh pengguna
    int id, harga, stok;                                   // Variabel untuk menyimpan ID, harga, dan stok item
    string nama, jenis, bahan, warna, untuk, ukuran, merk; // Variabel untuk menyimpan atribut barang

    // 5 data awal sebelum input pengguna
    shop[0].Set_ID(1);
    shop[0].Set_Nama("Kalung Kucing");
    shop[0].Set_Harga(85000);
    shop[0].Set_Stok(15);
    shop[0].Set_Jenis("Kalung");
    shop[0].Set_Bahan("Kulit");
    shop[0].Set_Warna("Coklat");
    shop[0].Set_Untuk("Kucing");
    shop[0].Set_Ukuran("M");
    shop[0].Set_Merk("MeowLux");

    shop[1].Set_ID(2);
    shop[1].Set_Nama("Baju Kucing");
    shop[1].Set_Harga(130000);
    shop[1].Set_Stok(10);
    shop[1].Set_Jenis("Baju");
    shop[1].Set_Bahan("Wol");
    shop[1].Set_Warna("Merah");
    shop[1].Set_Untuk("Kucing");
    shop[1].Set_Ukuran("S");
    shop[1].Set_Merk("PurrSty");

    shop[2].Set_ID(3);
    shop[2].Set_Nama("Topi Kelinci");
    shop[2].Set_Harga(60000);
    shop[2].Set_Stok(20);
    shop[2].Set_Jenis("Topi");
    shop[2].Set_Bahan("Katun");
    shop[2].Set_Warna("Biru");
    shop[2].Set_Untuk("Kelinci");
    shop[2].Set_Ukuran("M");
    shop[2].Set_Merk("BunnyTr");

    shop[3].Set_ID(4);
    shop[3].Set_Nama("Harness Cat");
    shop[3].Set_Harga(140000);
    shop[3].Set_Stok(12);
    shop[3].Set_Jenis("Harness");
    shop[3].Set_Bahan("Nilon");
    shop[3].Set_Warna("Hitam");
    shop[3].Set_Untuk("Kucing");
    shop[3].Set_Ukuran("L");
    shop[3].Set_Merk("SafePaw");

    shop[4].Set_ID(5);
    shop[4].Set_Nama("Jaket Burung");
    shop[4].Set_Harga(160000);
    shop[4].Set_Stok(8);
    shop[4].Set_Jenis("Jaket");
    shop[4].Set_Bahan("Rajut");
    shop[4].Set_Warna("Kuning");
    shop[4].Set_Untuk("Burung");
    shop[4].Set_Ukuran("S");
    shop[4].Set_Merk("FeathrF");

    // Menampilkan header tabel data
    shop[0].TampilHeader();

    // Menampilkan data awal yang sudah ada di array
    for (int i = 0; i < 5; i++)
    {
        shop[i].TampilData();
    }

    // Menampilkan footer tabel
    shop[0].TampilFooter();

    // Meminta input dari pengguna untuk menambahkan data baru
    cout << "Masukkan jumlah data yang ingin di tambahkan : ";
    cin >> n;

    // Loop untuk menambahkan data baru sesuai jumlah yang diinputkan pengguna
    for (int i = 5; i < n + 5; i++)
    {
        shop[i].Set_ID(i + 1); // Set ID barang secara otomatis
        cin >> nama;
        shop[i].Set_Nama(nama);
        cin >> harga;
        shop[i].Set_Harga(harga);
        cin >> stok;
        shop[i].Set_Stok(stok);
        cin >> jenis;
        shop[i].Set_Jenis(jenis);
        cin >> bahan;
        shop[i].Set_Bahan(bahan);
        cin >> warna;
        shop[i].Set_Warna(warna);
        cin >> untuk;
        shop[i].Set_Untuk(untuk);
        cin >> ukuran;
        shop[i].Set_Ukuran(ukuran);
        cin >> merk;
        shop[i].Set_Merk(merk);
    }

    // Menampilkan kembali data setelah ditambahkan oleh pengguna
    shop[0].TampilHeader();
    for (int i = 0; i < n + 5; i++)
    {
        shop[i].TampilData();
    }
    shop[0].TampilFooter();
}
