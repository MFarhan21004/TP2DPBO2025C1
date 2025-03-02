from Petshop import Petshop  # Mengimpor kelas Petshop dari file terpisah
from Aksesoris import Aksesoris  # Mengimpor kelas Aksesoris dari file terpisah
from Baju import Baju  # Mengimpor kelas Baju dari file terpisah

def main():
    # Membuat objek dari kelas Baju
    shop = [Baju() for _ in range(51)]  # Membuat 51 objek Baju dalam list

    # Mengisi atribut objek Baju dengan data default

    # Default data 1 - Baju untuk Kucing
    shop[0].Set_ID(1)
    shop[0].Set_Nama("Baju_Kucing")
    shop[0].Set_Harga(100000)
    shop[0].Set_Stok(10)
    shop[0].Set_Jenis("Kaos")
    shop[0].Set_Ukuran("S")
    shop[0].Set_Warna("Merah")
    shop[0].Set_Untuk("Kucing")
    shop[0].Set_Size("S")
    shop[0].Set_Merk("MeowStyle")

    # Default data 2 - Jaket untuk Kelinci
    shop[1].Set_ID(2)
    shop[1].Set_Nama("Jaket_Kelinci")
    shop[1].Set_Harga(120000)
    shop[1].Set_Stok(8)
    shop[1].Set_Jenis("Jaket")
    shop[1].Set_Ukuran("M")
    shop[1].Set_Warna("Biru")
    shop[1].Set_Untuk("Kelinci")
    shop[1].Set_Size("M")
    shop[1].Set_Merk("BunnyWear")

    # Default data 3 - Sweater untuk Kucing
    shop[2].Set_ID(3)
    shop[2].Set_Nama("Sweater_Kucing")
    shop[2].Set_Harga(150000)
    shop[2].Set_Stok(12)
    shop[2].Set_Jenis("Sweater")
    shop[2].Set_Ukuran("L")
    shop[2].Set_Warna("Abu-Abu")
    shop[2].Set_Untuk("Kucing")
    shop[2].Set_Size("L")
    shop[2].Set_Merk("PurrFashion")

    # Default data 4 - Topi untuk Burung
    shop[3].Set_ID(4)
    shop[3].Set_Nama("Topi_Burung")
    shop[3].Set_Harga(80000)
    shop[3].Set_Stok(15)
    shop[3].Set_Jenis("Topi")
    shop[3].Set_Ukuran("S")
    shop[3].Set_Warna("Kuning")
    shop[3].Set_Untuk("Burung")
    shop[3].Set_Size("S")
    shop[3].Set_Merk("FeatherTZ")

    # Default data 5 - Harness untuk Kucing
    shop[4].Set_ID(5)
    shop[4].Set_Nama("Harness_Kucing")
    shop[4].Set_Harga(110000)
    shop[4].Set_Stok(9)
    shop[4].Set_Jenis("Harness")
    shop[4].Set_Ukuran("M")
    shop[4].Set_Warna("Hitam")
    shop[4].Set_Untuk("Kucing")
    shop[4].Set_Size("M")
    shop[4].Set_Merk("SafePaws")

    # Menampilkan header tabel data produk
    Baju.TampilHeader()

    # Menampilkan data produk yang sudah diisi
    for i in range(5):
        shop[i].TampilData()  
    
    # Menampilkan footer tabel data produk
    Baju.TampilFooter()

    # Meminta jumlah data yang ingin diinput dari pengguna
    jumlah = int(input( "Masukkan jumlah data yang ingin diinput: "))

    # Loop untuk membaca input langsung dari terminal
    for i in range(5, jumlah + 5):
        data = input().split()  # Membaca satu baris input dan membaginya menjadi list berdasarkan spasi
        
        # Validasi jumlah elemen input
        if len(data) != 9:
            print("Input tidak valid! Harap masukkan 9 nilai dalam satu baris.")
            continue  # Lewati iterasi jika input salah
        
        # Memasukkan data ke objek Baju
        shop[i].Set_ID(i + 1)
        shop[i].Set_Nama(data[0])
        shop[i].Set_Harga(int(data[1]))
        shop[i].Set_Stok(int(data[2]))
        shop[i].Set_Jenis(data[3])
        shop[i].Set_Ukuran(data[4])
        shop[i].Set_Warna(data[5])
        shop[i].Set_Untuk(data[6])
        shop[i].Set_Size(data[7])
        shop[i].Set_Merk(data[8])

    # Menampilkan kembali seluruh data produk
    Baju.TampilHeader()

    # Menampilkan data produk yang sudah diisi
    for i in range(0, jumlah + 5):
        shop[i].TampilData()

    # Menampilkan footer tabel data produk
    Baju.TampilFooter()

# Memastikan program dijalankan sebagai skrip utama
if __name__ == "__main__":
    main()
