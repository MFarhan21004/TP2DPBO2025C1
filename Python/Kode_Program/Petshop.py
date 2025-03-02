class Petshop:
    
    # Konstruktor untuk inisialisasi objek dengan atribut default
    def __init__(self, ID=0, nama_produk="", harga_produk=0, stok_produk=0):
        self.ID = ID
        self.Nama = nama_produk
        self.Harga = harga_produk
        self.Stok = stok_produk

    # Mengatur ID produk
    def Set_ID(self, ID):
        self.ID = ID  

    # Mengatur nama produk
    def Set_Nama(self, nama_produk):
        self.Nama = nama_produk  

    # Mengatur harga produk
    def Set_Harga(self, harga_produk):
        self.Harga = harga_produk  

    # Mengatur jumlah stok produk
    def Set_Stok(self, stok_produk):
        self.Stok = stok_produk  

    # Mengambil ID produk
    def Get_ID(self):
        return self.ID  
    
    # Mengambil nama produk
    def Get_Nama(self):
        return self.Nama  

    # Mengambil harga produk
    def Get_Harga(self):
        return self.Harga  
    
    # Mengambil jumlah stok produk
    def Get_Stok(self):
        return self.Stok  
