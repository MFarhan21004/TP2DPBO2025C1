class Aksesoris : public Petshop{  // Kelas Aksesoris merupakan turunan dari Petshop
    private: 
        string jenis;  // Menyimpan jenis aksesoris
        string bahan;  // Menyimpan bahan aksesoris
        string warna;  // Menyimpan warna aksesoris

    public:
        // Konstruktor default: Menginisialisasi atribut dengan nilai kosong
        Aksesoris()
        {
            jenis = "";
            bahan = "";
            warna = "";
        }

        // Konstruktor parameter: Menginisialisasi atribut dengan nilai yang diberikan
        Aksesoris(string jenis, string bahan, string warna)
        {
            this->jenis = jenis;
            this->bahan = bahan;
            this->warna = warna;
        }

        // Setter untuk mengubah jenis aksesoris
        void Set_Jenis(string jenis)
        {
            this->jenis = jenis;
        }

        // Setter untuk mengubah bahan aksesoris
        void Set_Bahan(string bahan)
        {
            this->bahan = bahan;
        }

        // Setter untuk mengubah warna aksesoris
        void Set_Warna(string warna)
        {
            this->warna = warna;
        }

        // Getter untuk mendapatkan jenis aksesoris
        string Get_Jenis()
        {
            return jenis;
        }

        // Getter untuk mendapatkan bahan aksesoris
        string Get_Bahan()
        {
            return bahan;
        }

        // Getter untuk mendapatkan warna aksesoris
        string Get_Warna()
        {
            return warna;
        }

        // Destruktor: Menghapus objek Aksesoris
        ~Aksesoris(){
        }
};
