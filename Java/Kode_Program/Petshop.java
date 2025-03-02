// Kelas utama Petshop untuk menyimpan informasi produk
public class Petshop {
    // Atribut kelas untuk menyimpan data produk
    private int ID;          // ID produk
    private String nama_produk; // Nama produk
    private int harga_produk;   // Harga produk
    private int stok_produk;    // Jumlah stok produk yang tersedia

    // Konstruktor default (tanpa parameter), menginisialisasi atribut dengan nilai default
    public Petshop() {
        this.ID = 0;
        this.nama_produk = "";
        this.harga_produk = 0;
        this.stok_produk = 0;
    }

    // Konstruktor dengan parameter untuk menginisialisasi objek dengan data tertentu
    public Petshop(int ID, String nama_produk, int harga_produk, int stok_produk) {
        this.ID = ID;
        this.nama_produk = nama_produk;
        this.harga_produk = harga_produk;
        this.stok_produk = stok_produk;
    }

    // Getter method untuk mengambil nilai ID produk
    public int Get_ID() {
        return this.ID;
    }

    // Getter method untuk mengambil nama produk
    public String Get_Nama() {
        return this.nama_produk;
    }

    // Getter method untuk mengambil harga produk
    public int Get_Harga() {
        return this.harga_produk;
    }

    // Getter method untuk mengambil jumlah stok produk
    public int Get_Stok() {
        return this.stok_produk;
    }

    // Setter method untuk mengubah ID produk
    public void Set_ID(int ID) {
        this.ID = ID;
    }

    // Setter method untuk mengubah nama produk
    public void Set_Nama(String nama_produk) {
        this.nama_produk = nama_produk;
    }

    // Setter method untuk mengubah harga produk
    public void Set_Harga(int harga_produk) {
        this.harga_produk = harga_produk;
    }

    // Setter method untuk mengubah jumlah stok produk
    public void Set_Stok(int stok_produk) {
        this.stok_produk = stok_produk;
    }
}
