class PetShop:
    id = 0
    nama = ""
    harga = 0
    stok = 0
    
    def __init__(self, idProduk=0, nama="", harga=0, stok=0):
        self.id = idProduk
        self.nama = nama
        self.harga = harga
        self.stok = stok

    def setId(self, idProduk): self.id = idProduk
    def getId(self): return self.id

    def setNama(self, nama): self.nama = nama
    def getNama(self): return self.nama

    def setHarga(self, harga): self.harga = harga      
    def getHarga(self): return self.harga

    def setStok(self, stok): self.stok = stok  
    def getStok(self): return self.stok  
