<?php
include_once 'Petshop.php'; // Pastikan Petshop di-include
// Class Baju merupakan turunan dari class Aksesoris
class Aksesoris extends Petshop {
    // Properties
    private $jenis, $bahan, $warna;

    // Constructor
    public function __construct() {
        
        $this->jenis = "";
        $this->bahan = "";
        $this->warna = "";
    }

   
    // Setter
    public function Set_Jenis($jenis) { $this->jenis = $jenis; }
    public function Set_Bahan($bahan) { $this->bahan = $bahan; }
    public function Set_Warna($warna) { $this->warna = $warna; }

    // Getter
    public function Get_Jenis() { return $this->jenis; }
    public function Get_Bahan() { return $this->bahan; }
    public function Get_Warna() { return $this->warna; }
}
?>
