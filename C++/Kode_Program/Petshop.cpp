class Petshop {
    private:
        int ID;               // Menyimpan ID produk
        string nama_produk;   // Menyimpan nama produk
        int harga_produk;     // Menyimpan harga produk
        int stok_produk;      // Menyimpan jumlah stok produk
    
    public:
        // Konstruktor default: Menginisialisasi atribut dengan nilai default
        Petshop() {
            ID = 0;
            nama_produk = "";
            harga_produk = 0;
            stok_produk = 0;
        }
    
        // Konstruktor parameter: Menginisialisasi atribut dengan nilai yang diberikan
        Petshop(int ID, string nama_produk, int harga_produk, int stok_produk) {
            this->ID = ID;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }
    
        // Setter untuk mengubah nilai ID produk
        void Set_ID(int ID) {
            this->ID = ID;
        }
    
        // Setter untuk mengubah nama produk
        void Set_Nama(string nama_produk) {
            this->nama_produk = nama_produk;
        }
    
        // Setter untuk mengubah harga produk
        void Set_Harga(int harga_produk) {
            this->harga_produk = harga_produk;
        }
    
        // Setter untuk mengubah jumlah stok produk
        void Set_Stok(int stok_produk) {
            this->stok_produk = stok_produk;
        }
    
        // Getter untuk mendapatkan nilai ID produk
        int Get_ID() {
            return ID;
        }
    
        // Getter untuk mendapatkan nama produk
        string Get_Nama() {
            return nama_produk;
        }
    
        // Getter untuk mendapatkan harga produk
        int Get_Harga() {
            return harga_produk;
        }
    
        // Getter untuk mendapatkan jumlah stok produk
        int Get_Stok() {
            return stok_produk;
        }
};
    