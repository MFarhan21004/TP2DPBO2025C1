// Kelas Baju merupakan turunan dari kelas Aksesoris
// Kelas ini menyimpan informasi tambahan tentang baju hewan peliharaan
public class Baju extends Aksesoris {
    
    // Atribut tambahan khusus untuk baju
    private String untuk; // Jenis hewan yang cocok menggunakan baju ini (misalnya: Kucing, Kelinci, Burung)
    private String size;  // Ukuran baju (misalnya: S, M, L)
    private String merk;  // Merek baju

    // Konstruktor default (tanpa parameter), menginisialisasi atribut dengan nilai kosong
    public Baju() {
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    // Konstruktor dengan parameter untuk langsung mengisi nilai atribut saat objek dibuat
    public Baju(String untuk, String size, String merk) {
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    // Getter method untuk mengambil nilai atribut "untuk"
    public String Get_Untuk() {
        return this.untuk;
    }

    // Getter method untuk mengambil ukuran baju
    public String Get_Size() {
        return this.size;
    }

    // Getter method untuk mengambil merk baju
    public String Get_Merk() {
        return this.merk;
    }

    // Setter method untuk mengubah nilai "untuk" (hewan yang cocok memakai baju)
    public void Set_Untuk(String Untuk) {
        this.untuk = Untuk;
    }

    // Setter method untuk mengubah ukuran baju
    public void Set_Size(String Size) {
        this.size = Size;
    }

    // Setter method untuk mengubah merk baju
    public void Set_Merk(String Merk) {
        this.merk = Merk;
    }

    // Method untuk menampilkan header tabel output
    public void TampilHeader() {
        System.out.println("+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+");
        System.out.println("| ID | Nama Produk     | Harga       | Stok        | Jenis       | Bahan       | Warna       | Untuk       | Size        | Merk        |");
        System.out.println("+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+");
    }
    
    // Method untuk menampilkan data produk dalam format tabel
    public void TampilData() {
        System.out.printf("| %2d | %-15s | %11d | %11d | %-11s | %-11s | %-11s | %-11s | %-11s | %-11s |\n", 
                          Get_ID(), Get_Nama(), Get_Harga(), Get_Stok(), Get_Jenis(), Get_Bahan(), Get_Warna(), Get_Untuk(), Get_Size(), Get_Merk());
    }

    // Method untuk menampilkan footer tabel output
    public void TampilFooter() {
        System.out.println("+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+");
    }
}
