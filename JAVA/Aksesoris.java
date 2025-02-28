class Aksesoris extends PetShop
{
  private String jenis;
  private String bahan;
  private String warna;

  // konstruktor
  public Aksesoris(){

  }

  public Aksesoris(int id, String nama, int harga, int stok, String jenis, String bahan, String warna){
    super(id, nama, harga, stok);
    this.jenis = jenis;
    this.bahan = bahan;
    this.warna = warna;
  }

  // getter & setter
  public String getJenis(){
    return jenis;
  }

  public void setJenis(String jenis){
    this.jenis = jenis;
  }

  public String getBahan(){
    return bahan;
  }

  public void setBahan(String bahan){
    this.bahan = bahan;
  }

  public String getWarna(){
    return warna;
  }

  public void setWarna(String warna){
    this.warna = warna;
  }
}