<?php

class Petshop {
    // Properties
    private $ID, $nama_produk, $harga_produk, $stok_produk, $foto_produk;

    // Constructor
    public function __construct(){
        $this->ID = 0;
        $this->nama_produk = "";
        $this->harga_produk = 0;
        $this->stok_produk = 0;
        $this->foto_produk = "";
    }

    // Setter
    public function Set_ID($id) { $this->ID = $id; }
    public function Set_Nama($nama) { $this->nama_produk = $nama; }
    public function Set_Harga($harga) { $this->harga_produk = max(0, (int)$harga); }
    public function Set_Stok($stok) { $this->stok_produk = max(0, (int)$stok); }
    public function Set_Foto($foto) { $this->foto_produk = $foto; }

    // Getter
    public function Get_ID() { return $this->ID; }
    public function Get_Nama() { return $this->nama_produk; }
    public function Get_Harga() { return $this->harga_produk; }
    public function Get_Stok() { return $this->stok_produk; }
    public function Get_Foto() { return $this->foto_produk; }
}
?>
