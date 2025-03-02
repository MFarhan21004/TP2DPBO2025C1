import java.util.Formatter; // Digunakan untuk pemformatan teks dalam output tabel
import java.util.Scanner; // Mengimpor kelas Scanner untuk membaca input dari pengguna

public class Main {

    public static void main(String[] args) {
        // Membuat array objek Baju sebanyak 51 elemen
        Baju shop[] = new Baju[51];
        
        // Menginisialisasi setiap elemen array dengan objek Baju baru
        for (int i = 0; i < shop.length; i++) {
            shop[i] = new Baju();
        }

        // Menambahkan data default ke dalam array

        // 5 data sebelum input dari user
        // Data default 1 - Baju untuk Kucing
        shop[0].Set_ID(1);
        shop[0].Set_Nama("Baju Kucing");
        shop[0].Set_Harga(60000);
        shop[0].Set_Stok(15);
        shop[0].Set_Jenis("Baju");
        shop[0].Set_Bahan("Katun");
        shop[0].Set_Warna("Merah");
        shop[0].Set_Untuk("Kucing");
        shop[0].Set_Size("S");
        shop[0].Set_Merk("MeowStyle");

        // Data default 2 - Jaket untuk Kelinci
        shop[1].Set_ID(2);
        shop[1].Set_Nama("Jaket Kelinci");
        shop[1].Set_Harga(75000);
        shop[1].Set_Stok(12);
        shop[1].Set_Jenis("Jaket");
        shop[1].Set_Bahan("Wol");
        shop[1].Set_Warna("Biru");
        shop[1].Set_Untuk("Kelinci");
        shop[1].Set_Size("M");
        shop[1].Set_Merk("BunnyWear");

        // Data default 3 - Harness untuk Kucing
        shop[2].Set_ID(3);
        shop[2].Set_Nama("Harness Kucing");
        shop[2].Set_Harga(85000);
        shop[2].Set_Stok(10);
        shop[2].Set_Jenis("Harness");
        shop[2].Set_Bahan("Nilon");
        shop[2].Set_Warna("Hitam");
        shop[2].Set_Untuk("Kucing");
        shop[2].Set_Size("L");
        shop[2].Set_Merk("SafePaws");

        // Data default 4 - Topi untuk Burung
        shop[3].Set_ID(4);
        shop[3].Set_Nama("Topi Burung");
        shop[3].Set_Harga(40000);
        shop[3].Set_Stok(20);
        shop[3].Set_Jenis("Topi");
        shop[3].Set_Bahan("Katun");
        shop[3].Set_Warna("Kuning");
        shop[3].Set_Untuk("Burung");
        shop[3].Set_Size("S");
        shop[3].Set_Merk("Feather");

        // Data default 5 - Sweater untuk Kucing
        shop[4].Set_ID(5);
        shop[4].Set_Nama("Sweater Kucing");
        shop[4].Set_Harga(95000);
        shop[4].Set_Stok(8);
        shop[4].Set_Jenis("Sweater");
        shop[4].Set_Bahan("Rajut");
        shop[4].Set_Warna("Abu-Abu");
        shop[4].Set_Untuk("Kucing");
        shop[4].Set_Size("M");
        shop[4].Set_Merk("PurrFashion");

        // Menampilkan data default dalam bentuk tabel
        shop[0].TampilHeader();
        for (int i = 0; i < 5; i++) {
            shop[i].TampilData();
        }
        shop[0].TampilFooter();

        // Meminta input jumlah data yang akan dimasukkan oleh pengguna
        int jumlah;
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan jumlah data yang ingin dimasukkan: ");
        jumlah = input.nextInt(); // Membaca jumlah data yang akan dimasukkan

        // Memasukkan data baru berdasarkan jumlah yang diinput oleh pengguna
        for (int i = 5; i < jumlah + 5; i++) {
            shop[i].Set_ID(i + 1);

            // Meminta input data dari pengguna
            shop[i].Set_Nama(input.next()); 
            shop[i].Set_Harga(input.nextInt());
            shop[i].Set_Stok(input.nextInt());
            shop[i].Set_Jenis(input.next());
            shop[i].Set_Bahan(input.next());
            shop[i].Set_Warna(input.next());
            shop[i].Set_Untuk(input.next());
            shop[i].Set_Size(input.next());
            shop[i].Set_Merk(input.next());
        }

        // Menampilkan kembali semua data termasuk yang baru dimasukkan
        shop[0].TampilHeader();
        for (int i = 0; i < jumlah + 5; i++) {
            shop[i].TampilData();
        }
        shop[0].TampilFooter();
    }
}
