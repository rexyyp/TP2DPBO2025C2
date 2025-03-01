<?php
  require_once 'Baju.php';

  $list_produk = array();

 $baju1 = new Baju(1, "Baju Anjing", 50000, 10, "Pakaian", "Katun", "Merah", "M", "PetStyle", "Images/1.jpg");
 $baju2 = new Baju(2, "Baju Kucing", 45000, 8, "Pakaian", "Polyester", "Biru", "S", "FurFashion", "Images/2.jpg");
 $baju3 = new Baju(3, "Rompi Kucing", 60000, 5, "Rompi", "Denim", "Hitam", "L", "PawWear", "Images/3.jpg");
 $baju4 = new Baju(4, "Jaket Anjing", 75000, 7, "Jaket", "Wool", "Coklat", "XL", "DogStyle", "Images/4.jpg");
 $baju5 = new Baju(5, "Hoodie Kucing", 70000, 6, "Hoodie", "Fleece", "Abu-abu", "M", "CatSwag", "Images/5.jpg");


  array_push($list_produk, $baju1);
  array_push($list_produk, $baju2);
  array_push($list_produk, $baju3);
  array_push($list_produk, $baju4);
  array_push($list_produk, $baju5);
?>  

<!DOCTYPE html>
<html>
<head>
    <title>Daftar Produk</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            margin: 20px;
        }
        h2 {
            text-align: center;
            color: #333;
        }
        table {
            width: 60%;
            margin: 20px auto;
            border-collapse: collapse;
            background-color: #fff;
            box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1);
        }
        table, th, td {
            border: 1px solid #ddd;
        }
        th {
            background-color: #007BFF;
            color: white;
            padding: 5px;
        }
        td {
            padding: 5px;
            text-align: left;
        }
        tr:nth-child(even) {
            background-color: #f2f2f2;
        }
        tr:hover {
            background-color: #ddd;
        }

        img {
            width: 100px;
            object-fit: cover;
        }
    </style>
</head>
<body>
    <h2>Daftar Produk</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Foto</th>
            <th>Nama</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Kategori</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Ukuran</th>
            <th>Merek</th>
        </tr>
        <?php foreach ($list_produk as $produk) { ?>
            <tr>
                <td><?php echo $produk->getId(); ?></td>
                <td>
                    <img src="<?php echo $produk->getFoto(); ?>" alt="<?php echo $produk->getNama(); ?>">
                </td>
                <td><?php echo $produk->getNama(); ?></td>
                <td><?php echo $produk->getHarga(); ?></td>
                <td><?php echo $produk->getStok(); ?></td>
                <td><?php echo $produk->getJenis(); ?></td>
                <td><?php echo $produk->getBahan(); ?></td>
                <td><?php echo $produk->getWarna(); ?></td>
                <td><?php echo $produk->getSize(); ?></td>
                <td><?php echo $produk->getMerk(); ?></td>
            </tr>
        <?php } ?>
    </table>
</body>
</html>
