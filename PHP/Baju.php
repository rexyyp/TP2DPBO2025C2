<?php
require_once 'Aksesoris.php';

class Baju extends Aksesoris
{
  private $size = "";
  private $merk = "";

  public function __construct($id, $nama, $harga, $stok, $jenis, $bahan, $warna, $size, $merk)
  {
    parent::__construct($id, $nama, $harga, $stok, $jenis, $bahan, $warna);
    $this->size = $size;
    $this->merk = $merk;
  }

  public function getSize()
  {
    return $this->size;
  }

  public function getMerk()
  {
    return $this->merk;
  }

  public function setSize($size)
  {
    $this->size = $size;
  }

  public function setMerk($merk)
  {
    $this->merk = $merk;
  }
}
?>