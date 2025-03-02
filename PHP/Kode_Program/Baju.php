<?php
include_once 'Aksesoris.php';
// Class Baju merupakan turunan dari class Aksesoris
class Baju extends Aksesoris {
    // Properties
    private $untuk, $size, $merk;

    // Constructor
    public function __construct() {
        $this->untuk = "";
        $this->size = "";
        $this->merk = "";
    }

    // Setter
    public function Set_Untuk($untuk) { $this->untuk = $untuk; }
    public function Set_Size($size) { $this->size = $size; }
    public function Set_Merk($merk) { $this->merk = $merk; }

    // Getter
    public function Get_Untuk() { return $this->untuk; }
    public function Get_Size() { return $this->size; }
    public function Get_Merk() { return $this->merk; }
}
?>
