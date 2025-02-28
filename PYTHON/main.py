#import
from Baju import Baju

# membuat aray list
list_produk = [
    Baju("1", "Baju Anjing", 50000, 10, "Pakaian", "Katun", "Merah", "M", "PetStyle"),
    Baju("2", "Baju Kucing", 45000, 8, "Pakaian", "Polyester", "Biru", "S", "FurFashion"),
    Baju("3", "Rompi Kucing", 60000, 5, "Rompi", "Denim", "Hitam", "L", "PawWear"),
    Baju("4", "Jaket Anjing", 75000, 7, "Jaket", "Wool", "Coklat", "XL", "DoggyStyle"),
    Baju("5", "Hoodie Kucing", 70000, 6, "Hoodie", "Fleece", "Abu-abu", "M", "CatSwag")
]

n = int(input()) # menginput jumlah inputan

for i in range(n): # looping sebanyak input n

    #instansiasi
    b = Baju()

    #input data
    idProduk = input() 
    nama = input()
    harga = int(input())
    stok = int(input())
    jenis = input()
    bahan = input()
    warna = input()
    size = input()
    merk = input()

    #set ke tiap isi class
    b.setId(idProduk)
    b.setNama(nama)
    b.setHarga(harga)
    b.setStok(stok)
    b.setJenis(jenis)
    b.setBahan(bahan)
    b.setWarna(warna)
    b.setSize(size)
    b.setMerk(merk)

    list_produk.append(b)

# menghitung panjang terpanjang dari setiap kolom 
length_data = [2, 4, 5, 5, 5, 5, 5, 4, 4] # lenght dari nama header

for produk in list_produk:
  # id
  id_str = str(produk.getId())
  length_data[0] = max(length_data[0], len(id_str))
  # nama
  length_data[1] = max(length_data[1], len(produk.getNama()))
  # harga
  harga_str = str(produk.getHarga())  
  length_data[2] = max(length_data[2], len(harga_str))
  # stok
  stok_str = str(produk.getStok())  
  length_data[3] = max(length_data[3], len(stok_str))
  # jenis
  length_data[4] = max(length_data[4], len(produk.getJenis()))
  # bahan
  length_data[5] = max(length_data[5], len(produk.getBahan()))
  # warna
  length_data[6] = max(length_data[6], len(produk.getWarna()))
  # size
  length_data[7] = max(length_data[7], len(produk.getSize()))
  # merk
  length_data[8] = max(length_data[8], len(produk.getMerk()))


# jumlah seluruh panjang kolom 
all_length = sum(length_data) + 10

# print table

print("-"*all_length) # garis tabel

# cetak nama header
print("|ID", end='')
for spasi in range(length_data[0] - 2): print(" ", end='')
print("|Nama", end='')
for spasi in range(length_data[1] - 4): print(" ", end='')
print("|Harga", end='')
for spasi in range(length_data[2] - 5): print(" ", end='')
print("|Stok", end='')
for spasi in range(length_data[3] - 4): print(" ", end='')
print("|Jenis", end='')
for spasi in range(length_data[4] - 5): print(" ", end='')
print("|Bahan", end='')
for spasi in range(length_data[5] - 5): print(" ", end='')
print("|Warna", end='')
for spasi in range(length_data[6] - 5): print(" ", end='')
print("|Size", end='')
for spasi in range(length_data[7] - 4): print(" ", end='')
print("|Merk", end='')
for spasi in range(length_data[8] - 4): print(" ", end='')
print("|")

print("-"*all_length) # garis tabel

# cetak isi table
for produk in list_produk:
    #id
    print("|" + produk.getId(), end='')
    for spasi in range(length_data[0] - len(produk.getId())): print(" ", end='')
    #nama
    print("|" + produk.getNama(), end='')
    for spasi in range(length_data[1] - len(produk.getNama())): print(" ", end='')
    #harga
    print("|" + str(produk.getHarga()), end='')
    for spasi in range(length_data[2] - len(str(produk.getHarga()))): print(" ", end='')
    #stok
    print("|" + str(produk.getStok()), end='')
    for spasi in range(length_data[3] - len(str(produk.getStok()))): print(" ", end='')
    #jenis
    print("|" + produk.getJenis(), end='')
    for spasi in range(length_data[4] - len(produk.getJenis())): print(" ", end='')
    #bahan
    print("|" + produk.getBahan(), end='')
    for spasi in range(length_data[5] - len(produk.getBahan())): print(" ", end='')
    #warna
    print("|" + produk.getWarna(), end='')
    for spasi in range(length_data[6] - len(produk.getWarna())): print(" ", end='')
    #size
    print("|" + produk.getSize(), end='')
    for spasi in range(length_data[7] - len(produk.getSize())): print(" ", end='')
    #merk
    print("|" + produk.getMerk(), end='')
    for spasi in range(length_data[8] - len(produk.getMerk())): print(" ", end='')
    print("|")

print("-"*all_length) # garis tabel