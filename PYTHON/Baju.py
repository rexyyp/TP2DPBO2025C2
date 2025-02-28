from Aksesoris import Aksesoris

class Baju(Aksesoris):
    size = ""
    merk = ""
    
    def __init__(self, idProduk=0, nama="", harga=0, stok=0, jenis="", bahan="", warna="", size="", merk=""):
        super().__init__(idProduk, nama, harga, stok, jenis, bahan, warna)  # Memanggil konstruktor Aksesoris
        self.size = size
        self.merk = merk

    def setSize(self, size): self.size = size
    def getSize(self): return self.size    

    def setMerk(self, merk): self.merk = merk
    def getMerk(self): return self.merk
