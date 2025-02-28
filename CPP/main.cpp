#include "Baju.cpp"
#include <list>
#include <iterator>

using namespace std;

int get_digit(int n)
{
  int digit = 0;
  while (n != 0)
  {
    n /= 10;
    digit++;
  }
  return digit;
}

int length_id(list<Baju> daftarBarang)
{
  int length = 2;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (get_digit(it->getId()) > length)
    {
      length = get_digit(it->getId());
    }
  }
  return length;
}

int length_nama(list<Baju> daftarBarang)
{
  int length = 4;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (it->getNama().length() > length)
    {
      length = it->getNama().length();
    }
  }
  return length;
}

int length_harga(list<Baju> daftarBarang)
{
  int length = 5;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (get_digit(it->getHarga()) > length)
    {
      length = get_digit(it->getHarga());
    }
  }
  return length;
}

int length_stok(list<Baju> daftarBarang)
{
  int length = 4;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (get_digit(it->getStok()) > length)
    {
      length = get_digit(it->getStok());
    }
  }
  return length;
}

int length_jenis(list<Baju> daftarBarang)
{
  int length = 5;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (it->getJenis().length() > length)
    {
      length = it->getJenis().length();
    }
  }
  return length;
}

int length_bahan(list<Baju> daftarBarang)
{
  int length = 5;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (it->getBahan().length() > length)
    {
      length = it->getBahan().length();
    }
  }
  return length;
}

int length_warna(list<Baju> daftarBarang)
{
  int length = 5;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (it->getWarna().length() > length)
    {
      length = it->getWarna().length();
    }
  }
  return length;
}

int length_size(list<Baju> daftarBarang)
{
  int length = 4;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (it->getSize().length() > length)
    {
      length = it->getSize().length();
    }
  }
  return length;
}

int length_merk(list<Baju> daftarBarang)
{
  int length = 4;
  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    if (it->getMerk().length() > length)
    {
      length = it->getMerk().length();
    }
  }
  return length;
}

void print(list<Baju> daftarBarang)
{
  int pjg_id = length_id(daftarBarang);
  int pjg_nama = length_nama(daftarBarang);
  int pjg_harga = length_harga(daftarBarang);
  int pjg_stok = length_stok(daftarBarang);
  int pjg_jenis = length_jenis(daftarBarang);
  int pjg_bahan = length_bahan(daftarBarang);
  int pjg_warna = length_warna(daftarBarang);
  int pjg_size = length_size(daftarBarang);
  int pjg_merk = length_merk(daftarBarang);

  int stripe = pjg_id + pjg_nama + pjg_harga + pjg_stok + pjg_jenis + pjg_bahan + pjg_warna + pjg_size + pjg_merk + 10;

  for (int i = 0; i < stripe; i++)
  {
    cout << "-";
  }
  cout << endl;

  cout << "|Id";
  for (int i = 0; i < pjg_id - 2; i++)
  {
    cout << " ";
  }

  cout << "|Nama";
  for (int i = 0; i < pjg_nama - 4; i++)
  {
    cout << " ";
  }

  cout << "|Harga";
  for (int i = 0; i < pjg_harga - 5; i++)
  {
    cout << " ";
  }

  cout << "|Stok";
  for (int i = 0; i < pjg_stok - 4; i++)
  {
    cout << " ";
  }

  cout << "|Jenis";
  for (int i = 0; i < pjg_jenis - 5; i++)
  {
    cout << " ";
  }

  cout << "|Bahan";
  for (int i = 0; i < pjg_bahan - 5; i++)
  {
    cout << " ";
  }

  cout << "|Warna";
  for (int i = 0; i < pjg_warna - 5; i++)
  {
    cout << " ";
  }

  cout << "|Size";
  for (int i = 0; i < pjg_size - 4; i++)
  {
    cout << " ";
  }

  cout << "|Merk";
  for (int i = 0; i < pjg_merk - 4; i++)
  {
    cout << " ";
  }
  cout << "|" << endl;

  for (int i = 0; i < stripe; i++)
  {
    cout << "-";
  }
  cout << endl;

  list<Baju>::iterator it;
  for (it = daftarBarang.begin(); it != daftarBarang.end(); it++)
  {
    cout << "|" << it->getId();
    for (int i = 0; i < pjg_id - get_digit(it->getId()); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getNama();
    for (int i = 0; i < pjg_nama - it->getNama().length(); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getHarga();
    for (int i = 0; i < pjg_harga - get_digit(it->getHarga()); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getStok();
    for (int i = 0; i < pjg_stok - get_digit(it->getStok()); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getJenis();
    for (int i = 0; i < pjg_jenis - it->getJenis().length(); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getBahan();
    for (int i = 0; i < pjg_bahan - it->getBahan().length(); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getWarna();
    for (int i = 0; i < pjg_warna - it->getWarna().length(); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getSize();
    for (int i = 0; i < pjg_size - it->getSize().length(); i++)
    {
      cout << " ";
    }

    cout << "|" << it->getMerk();
    for (int i = 0; i < pjg_merk - it->getMerk().length(); i++)
    {
      cout << " ";
    }
    cout << "|" << endl;
  }

  for (int i = 0; i < stripe; i++)
  {
    cout << "-";
  }
  cout << endl;
}

int main()
{

  list<Baju> daftarBarang;

  Baju baju1(1, "Baju Anjing", 50000, 10, "Pakaian", "Katun", "Merah", "M", "PetFashion");
  daftarBarang.push_back(baju1);

  Baju baju2(2, "Baju Kucing", 45000, 15, "Pakaian", "Wol", "Biru", "S", "MeowStyle");
  daftarBarang.push_back(baju2);

  Baju baju3(3, "Baju Hamster", 30000, 8, "Pakaian", "Poliester", "Hijau", "XS", "TinyWear");
  daftarBarang.push_back(baju3);

  Baju baju4(4, "Baju Kelinci", 55000, 12, "Pakaian", "Denim", "Pink", "M", "BunnyStyle");
  daftarBarang.push_back(baju4);

  Baju baju5(5, "Baju Burung", 25000, 20, "Pakaian", "Sutra", "Kuning", "S", "WingFashion");
  daftarBarang.push_back(baju5);

  int n = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int id, harga, stok;
    string nama, jenis, bahan, warna, size, merk;

    cin >> id;
    cin.ignore();
    getline(cin, nama);
    cin >> harga >> stok;
    cin.ignore();
    getline(cin, jenis);
    getline(cin, bahan);
    getline(cin, warna);
    getline(cin, size);
    getline(cin, merk);

    Baju baju(id, nama, harga, stok, jenis, bahan, warna, size, merk);
    daftarBarang.push_back(baju);
  }

  print(daftarBarang);

  return 0;
}