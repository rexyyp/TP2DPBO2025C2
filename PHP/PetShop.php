<?php
class PetShop
{
  private $id = 0;
  private $nama = "";
  private $harga = 0;
  private $stok = 0;
  private $foto = ""; 

  // Konstruktor
  public function __construct($id, $nama, $harga, $stok, $foto)
  {
    $this->id = $id;
    $this->nama = $nama;
    $this->harga = $harga;
    $this->stok = $stok;
    $this->foto = $foto;
  }

  public function getId() { return $this->id; }
  public function getNama() { return $this->nama; }
  public function getHarga() { return $this->harga; }
  public function getStok() { return $this->stok; }
  public function getFoto() { return $this->foto; } 

  public function setId($id) { $this->id = $id; }
  public function setNama($nama) { $this->nama = $nama; }
  public function setStok($stok) { $this->stok = $stok; }
  public function setHarga($harga) { $this->harga = $harga; }
  public function setFoto($foto) { $this->foto = $foto; } 
}
?>
