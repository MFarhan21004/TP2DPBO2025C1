class Baju : public Aksesoris{  // Kelas Baju merupakan turunan dari kelas Aksesoris

    private:
        string untuk;   // Menyimpan kategori pemakaian (misal: hewan kecil, hewan besar)
        string ukuran;  // Menyimpan ukuran baju
        string merk;    // Menyimpan merek baju

    public:
        // Konstruktor default: Menginisialisasi atribut dengan nilai kosong
        Baju()
        {
            untuk = "";
            ukuran = "";
            merk = "";
        }

        // Konstruktor parameter: Menginisialisasi atribut dengan nilai yang diberikan
        Baju(string untuk, string ukuran, string merk)
        {
            this->untuk = untuk;
            this->ukuran = ukuran;
            this->merk = merk;
        }

        // Setter untuk mengubah kategori pemakaian baju
        void Set_Untuk(string untuk)
        {
            this->untuk = untuk;
        }

        // Setter untuk mengubah ukuran baju
        void Set_Ukuran(string ukuran)
        {
            this->ukuran = ukuran;
        }

        // Setter untuk mengubah merek baju
        void Set_Merk(string merk)
        {
            this->merk = merk;
        }

        // Getter untuk mendapatkan kategori pemakaian baju
        string Get_Untuk()
        {
            return untuk;
        }

        // Getter untuk mendapatkan ukuran baju
        string Get_Ukuran()
        {
            return ukuran;
        }

        // Getter untuk mendapatkan merek baju
        string Get_Merk()
        {
            return merk;
        }

        // Menampilkan header tabel untuk daftar baju
        void TampilHeader()
        {
            cout << "+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+" << endl;
            cout << "| ID | Nama Produk     | Harga Produk| Stok Produk | Jenis       | Bahan       | Warna       | Untuk       | Ukuran      | Merk        |" << endl;
            cout << "+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+" << endl;
        }

        // Menampilkan data baju dalam format tabel
        void TampilData()
        {
            cout << "| " << left << setw(2) << Get_ID() << " | " 
                << left << setw(15) << Get_Nama() << " | " 
                << left << setw(11) << Get_Harga() << " | " 
                << left << setw(11) << Get_Stok() << " | " 
                << left << setw(11) << Get_Jenis() << " | " 
                << left << setw(11) << Get_Bahan() << " | " 
                << left << setw(11) << Get_Warna() << " | " 
                << left << setw(11) << Get_Untuk() << " | " 
                << left << setw(11) << Get_Ukuran() << " | " 
                << left << setw(11) << Get_Merk() << " |" << endl;
        }

        // Menampilkan footer tabel daftar baju
        void TampilFooter()
        {
            cout << "+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+" << endl;
        }

        // Destruktor: Menghapus objek Baju
        ~Baju(){
        }
};
