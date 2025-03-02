from Aksesoris import Aksesoris

class Baju(Aksesoris):
    # Konstruktor untuk inisialisasi objek dengan atribut default
    def __init__(self, untuk="", size="", merk=""):
        self.Untuk = untuk  
        self.Size = size  
        self.Merk = merk  

    # Setter untuk mengubah nilai atribut 'Untuk'
    def Set_Untuk(self, untuk):
        self.Untuk = untuk  

    # Setter untuk mengubah nilai atribut 'Size'
    def Set_Size(self, size):
        self.Size = size  

    # Setter untuk mengubah nilai atribut 'Merk'
    def Set_Merk(self, merk):
        self.Merk = merk  

    # Getter untuk mengambil nilai atribut 'Untuk'
    def Get_Untuk(self):
        return self.Untuk  
    
    # Getter untuk mengambil nilai atribut 'Size'
    def Get_Size(self):
        return self.Size  
    
    # Getter untuk mengambil nilai atribut 'Merk'
    def Get_Merk(self):
        return self.Merk  
    
    # Menampilkan header tabel data produk baju
    @staticmethod
    def TampilHeader():
        print("+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+")
        print("| ID | Nama Produk     | Harga       | Stok        | Jenis       | Ukuran      | Warna       | Untuk       | Size        | Merk        |")
        print("+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+")

    # Menampilkan data baju dalam format tabel
    def TampilData(self):
        print(f"| {self.Get_ID():<2} | {self.Get_Nama()[:15]:<15} | Rp {self.Get_Harga():>8} | {self.Get_Stok():>11} | {self.Get_Jenis():<11} | {self.Get_Ukuran():<11} | {self.Get_Warna():<11} | {self.Untuk:<11} | {self.Size:<11} | {self.Merk:<11} |")
       
    # Menampilkan footer tabel data produk baju
    @staticmethod
    def TampilFooter():
        print("+----+-----------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+")
