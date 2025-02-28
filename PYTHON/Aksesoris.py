from PetShop import PetShop

class Aksesoris(PetShop):
    jenis = ""
    bahan = ""
    warna = ""
    
    def __init__(self, idProduk=0, nama="", harga=0, stok=0, jenis="", bahan="", warna=""):
        super().__init__(idProduk, nama, harga, stok)  # Memanggil konstruktor PetShop
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna

    def setJenis(self, jenis): self.jenis = jenis
    def getJenis(self): return self.jenis

    def setBahan(self, bahan): self.bahan = bahan
    def getBahan(self): return self.bahan

    def setWarna(self, warna): self.warna = warna
    def getWarna(self): return self.warna  
