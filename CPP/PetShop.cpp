#include <iostream>
#include <string>

using namespace std;

class PetShop
{
private:
  int id, harga, stok;
  string nama;

public:
  PetShop()
  {
    this->id = 0;
    this->nama = "";
    this->harga = 0;
    this->stok = 0;
  }

  PetShop(int id, string nama, int harga, int stok)
  {
    this->id = id;
    this->nama = nama;
    this->harga = harga;
    this->stok = stok;
  }

  void setId(int id)
  {
    this->id = id;
  }

  void setNama(string nama)
  {
    this->nama = nama;
  }

  void setHarga(int harga)
  {
    this->harga = harga;
  }

  void setStok(int stok)
  {
    this->stok = stok;
  }

  int getId()
  {
    return this->id;
  }

  string getNama()
  {
    return this->nama;
  }

  int getHarga()
  {
    return this->harga;
  }

  int getStok()
  {
    return this->stok;
  }
};