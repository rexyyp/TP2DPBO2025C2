#include "Petshop.cpp"

using namespace std;

class Aksesoris : public PetShop
{
private:
  string jenis, bahan, warna;

public:
  Aksesoris()
  {
    this->jenis = "";
    this->bahan = "";
    this->warna = "";
  }

  Aksesoris(int id, string nama, int harga, int stok, string jenis, string bahan, string warna)
  {
    this->setId(id);
    this->setNama(nama);
    this->setHarga(harga);
    this->setStok(stok);
    this->jenis = jenis;
    this->bahan = bahan;
    this->warna = warna;
  }

  void setJenis(string jenis)
  {
    this->jenis = jenis;
  }

  void setBahan(string bahan)
  {
    this->bahan = bahan;
  }

  void setWarna(string warna)
  {
    this->warna = warna;
  }

  string getJenis()
  {
    return this->jenis;
  }

  string getBahan()
  {
    return this->bahan;
  }

  string getWarna()
  {
    return this->warna;
  }
};
