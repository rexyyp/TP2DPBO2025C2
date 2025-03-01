# TP2DPBO2025C2

# JANJI

Saya Rexy Putra Nur Laksana dengan NIM 2309578 mengerjakan TP 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram

## Desain Pemrograman
Terdiri dari 3 class, yaitu **PetShop**, **Aksesoris** dan **Baju**, PetShop adalah orangtua dari Aksesoris dan Aksesoris adalah orangtua dari Baju.

class **PetShop** memilii 5 atribut, yaitu
* id
* nama 
* harga
* stok 
* foto

class **Aksesoris** memiliki 3 atribut, yaitu
* jenis
* bahan
* warna

clas **Baju** memiliki 2 atribut, yaitu
* size
* merk

## Alur Program
Program dimulai dengan mengimpor kelas Baju dari file Baju.py, lalu menginisialisasi daftar list_produk yang berisi beberapa objek Baju dengan atribut yang sudah ditentukan. Setelah itu, program meminta input berupa jumlah produk tambahan yang akan dimasukkan. Untuk setiap produk baru, pengguna diminta mengisi data seperti ID, nama, harga, stok, jenis, bahan, warna, ukuran, dan merek. Data yang diperoleh kemudian disimpan dalam objek Baju menggunakan metode setter, lalu ditambahkan ke dalam list_produk. Setelah semua data dikumpulkan, program menghitung panjang maksimum untuk setiap kolom tabel berdasarkan panjang karakter pada header dan isi daftar produk. Selanjutnya, program mencetak tabel dimulai dengan garis batas atas, diikuti header tabel yang telah disesuaikan dengan lebar kolom yang dihitung sebelumnya. Setelah itu, program mencetak setiap baris data produk dengan format yang rapi sesuai dengan panjang kolom masing-masing. Terakhir, program mencetak garis batas bawah sebagai penutup tabel.

## Dokumentasi

### CPP
![Dokumentasi](CPP/Screenshoot/ss_cpp.png)

### PYTHON
![Dokumentasi](PYTHON/Screenshoot/ss_python.png)

### JAVA
![Dokumentasi](JAVA/Screenshoot/ss_java.png)

### PHP
![Dokumentasi](PHP/Screenshoot/ss_php.png)

