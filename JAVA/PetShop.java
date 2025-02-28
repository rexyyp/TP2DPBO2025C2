class PetShop
{
  private int id;
  private String nama;
  private int harga;
  private int stok;

  // konstruktor
  public PetShop(){

  }

  public PetShop(int id, String nama, int harga, int stok){
    this.id = id;
    this.nama = nama;
    this.harga = harga;
    this.stok = stok;
  }

  // getter & setter
  public int getId(){
    return id;
  }

  public void setId(int id){
    this.id = id;
  }

  public String getNama(){
    return nama;
  }

  public void setNama(String nama){
    this.nama = nama;
  }

  public int getHarga(){
    return harga;
  }

  public void setHarga(int harga){
    this.harga = harga;
  }

  public int getStok(){
    return stok;
  }

  public void setStok(int stok){
    this.stok = stok;
  }
}