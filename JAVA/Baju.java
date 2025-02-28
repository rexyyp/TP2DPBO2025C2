class Baju extends Aksesoris
{
  private String size;
  private String merk;

  // konstruktor
  public Baju(){

  }

  public Baju(int id, String nama, int harga, int stok, String jenis, String bahan, String warna, String size, String merk){
    super(id, nama, harga, stok, jenis, bahan, warna);
    this.size = size;
    this.merk = merk;
  }

  // getter & setter
  public String getSize(){
    return size;
  }

  public void setSize(String size){
    this.size = size;
  }

  public String getMerk(){
    return merk;
  }

  public void setMerk(String merk){
    this.merk = merk;
  }
}