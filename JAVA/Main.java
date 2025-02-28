import java.util.Scanner;
import java.util.ArrayList;

class Main 
{
  // Fungsi untuk mencetak garis
  static void printLine(int length) {
        for (int i = 0; i < length; i++) {
            System.out.print("-");
        }
        System.out.println();
    }

  public static void main(String[] args) 
  {
      
      ArrayList<Baju> list_produk = new ArrayList<Baju>();
      
      // Data awal
      list_produk.add(new Baju(1, "Baju Anjing", 50000, 10, "Pakaian", "Katun", "Merah", "M", "PetStyle"));
      list_produk.add(new Baju(2, "Baju Kucing", 45000, 8, "Pakaian", "Polyester", "Biru", "S", "FurFashion"));
      list_produk.add(new Baju(3, "Rompi Kucing", 60000, 5, "Rompi", "Denim", "Hitam", "L", "PawWear"));
      list_produk.add(new Baju(4, "Jaket Anjing", 75000, 7, "Jaket", "Wool", "Coklat", "XL", "DoggyStyle"));
      list_produk.add(new Baju(5, "Hoodie Kucing", 70000, 6, "Hoodie", "Fleece", "Abu-abu", "M", "CatSwag"));
      
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.nextLine(); // Consume newline
      
      for (int i = 0; i < n; i++) {
          int id = sc.nextInt();
          sc.nextLine(); // Consume newline
          String nama = sc.nextLine();
          int harga = sc.nextInt();
          int stok = sc.nextInt();
          sc.nextLine(); // Consume newline
          String jenis = sc.nextLine();
          String bahan = sc.nextLine();
          String warna = sc.nextLine();
          String size = sc.nextLine();
          String merk = sc.nextLine();
          
          list_produk.add(new Baju(id, nama, harga, stok, jenis, bahan, warna, size, merk));
      }
      
      // Menghitung panjang maksimum setiap kolom
      int[] length_data = {2, 4, 5, 5, 5, 5, 5, 4, 4};
      
      for (Baju produk : list_produk) {
          length_data[0] = Math.max(length_data[0], String.valueOf(produk.getId()).length()); // mengubang menjadi string
          length_data[1] = Math.max(length_data[1], produk.getNama().length());
          length_data[2] = Math.max(length_data[2], String.valueOf(produk.getHarga()).length()); // mengubah menjadi string
          length_data[3] = Math.max(length_data[3], String.valueOf(produk.getStok()).length()); // mengubah menjadi string
          length_data[4] = Math.max(length_data[4], produk.getJenis().length());
          length_data[5] = Math.max(length_data[5], produk.getBahan().length());
          length_data[6] = Math.max(length_data[6], produk.getWarna().length());
          length_data[7] = Math.max(length_data[7], produk.getSize().length());
          length_data[8] = Math.max(length_data[8], produk.getMerk().length());
      }
      
      int all_length = 10 + length_data[0] + length_data[1] + length_data[2] + length_data[3] +
                        length_data[4] + length_data[5] + length_data[6] + length_data[7] + length_data[8];
      
      // Print tabel
      printLine(all_length);
      System.out.printf("|%-" + length_data[0] + "s|%-" + length_data[1] + "s|%-" + length_data[2] + "s|%-" + length_data[3] +
                        "s|%-" + length_data[4] + "s|%-" + length_data[5] + "s|%-" + length_data[6] + "s|%-" + length_data[7] + 
                        "s|%-" + length_data[8] + "s|\n",
                        "ID", "Nama", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Size", "Merk");
      printLine(all_length);
      
      for (Baju produk : list_produk) {
          System.out.printf("|%-" + length_data[0] + "s|%-" + length_data[1] + "s|%-" + length_data[2] + "d|%-" + length_data[3] +
                            "d|%-" + length_data[4] + "s|%-" + length_data[5] + "s|%-" + length_data[6] + "s|%-" + length_data[7] + 
                            "s|%-" + length_data[8] + "s|\n",
                  produk.getId(), produk.getNama(), produk.getHarga(), produk.getStok(), produk.getJenis(),
                  produk.getBahan(), produk.getWarna(), produk.getSize(), produk.getMerk());
      }
      printLine(all_length);
  }
}
