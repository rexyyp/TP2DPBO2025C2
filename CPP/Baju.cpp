#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris
{
private:
  string size, merk;

public:
  Baju(int id, string nama, int harga, int stok, string jenis, string bahan, string warna, string size, string merk)
  {
    this->setId(id);
    this->setNama(nama);
    this->setHarga(harga);
    this->setStok(stok);
    this->setJenis(jenis);
    this->setBahan(bahan);
    this->setWarna(warna);
    this->size = size;
    this->merk = merk;
  }

  void setSize(string size)
  {
    this->size = size;
  }

  void setMerk(string merk)
  {
    this->merk = merk;
  }

  string getSize()
  {
    return this->size;
  }

  string getMerk()
  {
    return this->merk;
  }

  // void addBaju(int id, string nama, int harga, int stok, string jenis, string bahan, string warna, string size, string merk) {
  //   Baju baju(id, nama, harga, stok, jenis, bahan, warna, size, merk);
  //   daftarBarang.push_back(baju);
  // }
};