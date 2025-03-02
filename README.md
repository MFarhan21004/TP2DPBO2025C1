## Janji
Saya Muhammad Farhan dengan NIM 2309323 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
## Diagram 
![Image](https://github.com/user-attachments/assets/9c669f74-618e-43c8-83a9-c26ea1d35824)
## Desain Program
Program ini terdiri dari tiga kelas utama yang direpresentasikan dalam diagram sebelumnya:

🔹 Kelas PetShop (Induk)

Kelas ini berfungsi sebagai kelas dasar untuk semua produk yang dijual di PetShop. Atribut yang dimiliki:

ID → Nomor unik setiap produk

nama_produk → Nama produk

harga_produk → Harga produk dalam Rupiah

stok_produk → Jumlah stok tersedia

foto_produk → Nama file gambar produk

Tujuan: Kelas ini menjadi dasar bagi semua produk agar memiliki atribut yang sama terkait informasi produk secara umum.

🔹 Kelas Aksesoris (Turunan dari PetShop)

Kelas ini merepresentasikan produk aksesoris dengan tambahan atribut:

jenis → Jenis aksesoris (contoh: kalung, topi, dll.)

bahan → Bahan utama aksesoris (contoh: kulit, wol, kanvas)

warna → Warna produk

Tujuan: Memperluas PetShop dengan informasi khusus yang hanya berlaku untuk produk aksesoris.

🔹 Kelas Baju (Turunan dari Aksesoris)

Kelas ini merepresentasikan produk pakaian yang memiliki atribut tambahan:

untuk → Digunakan untuk hewan apa (contoh: Kucing)

size → Ukuran pakaian (S, M, L)

merk → Merek produk

Tujuan: Memperluas Aksesoris dengan informasi yang lebih spesifik terkait pakaian hewan.


## Alur program
Program ini dirancang untuk mengelola produk di PetShop, khususnya pakaian dan aksesoris untuk hewan peliharaan. Berikut adalah gambaran umum alur kerja program:

1️. Inisialisasi Program
Program pertama kali dijalankan sudah ada 5 objek awal

2️. Pengisian Data Produk
class Baju memiliki daftar produk bawaan yang berisi informasi seperti nama produk, harga, stok, jenis, bahan, warna, ukuran.
Di program ini kita bisa menambahkan produk sesuai pengunanya

3️. Penyimpanan Data
Produk yang sudah diolah akan disimpan ke dalam array yang berisi objek

4️. Menampilkan Produk
Program akan menampilkan daftar semua produk yang tersimpan dengan informasi seperti:
Nama produk,
Harga,
Stok,
Jenis produk,
Warna, bahan, untuk, size ,merk dan
Foto produk

