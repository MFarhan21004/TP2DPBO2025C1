// Kelas Aksesoris merupakan turunan dari kelas Petshop
// Kelas ini digunakan untuk menyimpan informasi aksesoris yang dijual di toko
public class Aksesoris extends Petshop {
    // Atribut tambahan khusus untuk aksesoris
    private String jenis;  // Jenis aksesoris, misalnya: Kalung, Harness, dll.
    private String bahan;  // Bahan pembuatan aksesoris, misalnya: Kulit, Nilon, dll.
    private String warna;  // Warna aksesoris

    // Konstruktor default (tanpa parameter), menginisialisasi atribut dengan nilai kosong
    public Aksesoris() {
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    // Konstruktor dengan parameter untuk langsung mengisi nilai atribut saat objek dibuat
    public Aksesoris(String jenis, String bahan, String warna) {
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    // Getter method untuk mengambil nilai jenis aksesoris
    public String Get_Jenis() {
        return this.jenis;
    }

    // Getter method untuk mengambil nilai bahan aksesoris
    public String Get_Bahan() {
        return this.bahan;
    }

    // Getter method untuk mengambil nilai warna aksesoris
    public String Get_Warna() {
        return this.warna;
    }

    // Setter method untuk mengubah jenis aksesoris
    public void Set_Jenis(String Jenis) {
        this.jenis = Jenis;
    }

    // Setter method untuk mengubah bahan aksesoris
    public void Set_Bahan(String Bahan) {
        this.bahan = Bahan;
    }

    // Setter method untuk mengubah warna aksesoris
    public void Set_Warna(String Warna) {
        this.warna = Warna;
    }
}
