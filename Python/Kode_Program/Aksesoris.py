from Petshop import Petshop  # Mengimpor kelas Petshop dari file terpisah

class Aksesoris(Petshop):
    # Konstruktor untuk inisialisasi objek dengan atribut default
    def __init__(self, jenis="", ukuran="", warna=""):
        self.Jenis = jenis
        self.Ukuran = ukuran
        self.Warna = warna

    # Mengatur jenis aksesoris
    def Set_Jenis(self, jenis):
        self.Jenis = jenis

    # Mengatur ukuran aksesoris
    def Set_Ukuran(self, ukuran):
        self.Ukuran = ukuran

    # Mengatur warna aksesoris
    def Set_Warna(self, warna):
        self.Warna = warna

    # Mengambil jenis aksesoris
    def Get_Jenis(self):
        return self.Jenis
    
    # Mengambil ukuran aksesoris
    def Get_Ukuran(self):
        return self.Ukuran
    
    # Mengambil warna aksesoris
    def Get_Warna(self):
        return self.Warna

   