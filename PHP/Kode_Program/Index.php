<?php
include 'Baju.php'; // Include file Baju.php
session_start();    // Memulai session untuk menyimpan data sementara


// Cek apakah array session shop sudah ada, jika tidak, buat array kosong
if (!isset($_SESSION['shop'])) {
    $_SESSION['shop'] = [];

    // 5 Data pakaian awal
    $data_pakaian = [
    [1, "Baju Kucing", 75000, 10, "Baju_kucing_polos.jpeg", "Pakaian", "Katun", "Merah", "Kucing", "M", "MeowStyle"],
    [2, "Kalung Kucing", 50000, 15, "kalung_kucing.jpeg", "Aksesoris", "Kulit", "Hitam", "Kucing", "-", "PetCharm"],
    [3, "Topi Kucing", 40000, 8, "Topi_kucing.jpeg", "Aksesoris", "Wol", "Biru", "Kucing", "S", "FurryCaps"],
    [4, "Tas Kucing", 120000, 5, "Tas_kucing.jpeg", "Tas", "Kanvas", "Coklat", "Kucing", "-", "CatPack"],
    [5, "Jas Hujan Kucing", 90000, 7, "jas_hujan_kucing.jpeg", "Pakaian", "PVC", "Kuning", "Kucing", "L", "RainPaws"],
];

// Menambahkan data ke session
foreach ($data_pakaian as $item) {
    $baju = new Baju();
    $baju->Set_ID($item[0]);
    $baju->Set_Nama($item[1]);
    $baju->Set_Harga($item[2]);
    $baju->Set_Stok($item[3]);
    $baju->Set_Foto($item[4]);
    $baju->Set_Jenis($item[5]);
    $baju->Set_Bahan($item[6]);
    $baju->Set_Warna($item[7]);
    $baju->Set_Untuk($item[8]);
    $baju->Set_Size($item[9]);
    $baju->Set_Merk($item[10]);

    $_SESSION['shop'][] = $baju;
}

}

// Cek apakah tombol "Tambah" ditekan
if (isset($_POST['tambah'])) {
    $id = count($_SESSION['shop']) + 1; // ID otomatis bertambah
    $nama = $_POST['nama'];
    $harga = $_POST['harga'];
    $stok = $_POST['stok'];
    $jenis = $_POST['jenis'];
    $bahan = $_POST['bahan'];
    $warna = $_POST['warna'];
    $untuk = $_POST['untuk'];
    $size = $_POST['size'];
    $merk = $_POST['merk'];

    // Cek apakah ada file yang diupload
    $foto = "default.jpg"; // Default foto jika gagal upload
    if (isset($_FILES['foto']) && $_FILES['foto']['error'] == 0) {
        $targetDir = "Image/"; // Folder penyimpanan gambar
        $fileExt = pathinfo($_FILES['foto']['name'], PATHINFO_EXTENSION); // Ambil ekstensi file
        $foto = time() . "_" . uniqid() . "." . $fileExt; // Nama unik berdasarkan waktu
        $targetFile = $targetDir . $foto;

        // Pindahkan file yang di-upload ke folder tujuan
        if (!move_uploaded_file($_FILES['foto']['tmp_name'], $targetFile)) {
            $foto = "default.jpg"; // Jika gagal upload, gunakan default
        }
    }

    // Buat objek Baju dan simpan ke session
    $baju = new Baju();
    $baju->Set_ID($id);
    $baju->Set_Nama($nama);
    $baju->Set_Harga($harga);
    $baju->Set_Stok($stok);
    $baju->Set_Foto($foto); // Simpan hanya nama file, bukan path lengkap
    $baju->Set_Jenis($jenis);
    $baju->Set_Bahan($bahan);
    $baju->Set_Warna($warna);
    $baju->Set_Untuk($untuk);
    $baju->Set_Size($size);
    $baju->Set_Merk($merk);

    // Simpan ke session
    $_SESSION['shop'][] = $baju;

    // Pastikan session tersimpan
    session_write_close();

    // Redirect untuk mencegah form resubmission
    header("Location: index.php");
    exit;
}

?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Baju</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
<div class="container mt-4">
    <h1 class="text-center">Tambah Data Petshop</h1>
    <form action="index.php" method="post" class="mb-4" enctype="multipart/form-data">
        <div class="row">
            <?php
            $fields = [
                'nama' => 'Nama',
                'harga' => 'Harga',
                'stok' => 'Stok',
                'jenis' => 'Jenis',
                'bahan' => 'Bahan',
                'warna' => 'Warna',
                'untuk' => 'Untuk',
                'size' => 'Size',
                'merk' => 'Merk'
            ];
            foreach ($fields as $name => $label) {
                echo "<div class='col-md-6 mb-3'>
                        <label for='$name' class='form-label'>$label:</label>
                        <input type='text' id='$name' name='$name' class='form-control' required>
                      </div>";
            }
            ?>
            <div class="col-md-6 mb-3">
                <label for="foto" class="form-label">Foto:</label>
                <input type="file" id="foto" name="foto" class="form-control" accept="image/*" required>
            </div>
        </div>
        <button type="submit" name="tambah" value="Tambah" class="btn btn-primary w-100"> Tambah Produk </button>
    </form>

    <h2 class="text-center">Daftar Baju</h2>
    <table class="table table-bordered table-striped">
        <thead class="table-dark">
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Harga</th>
                <th>Stok</th>
                <th>Foto</th>
                <th>Jenis</th>
                <th>Bahan</th>
                <th>Warna</th>
                <th>Untuk</th>
                <th>Size</th>
                <th>Merk</th>
            </tr>
        </thead>
        <tbody>
        
        <?php foreach ($_SESSION['shop'] as $baju) : ?>
                <tr>
                    <td><?= $baju->Get_ID() ?></td>
                    <td><?= $baju->Get_Nama() ?></td>
                    <td>Rp <?= number_format($baju->Get_Harga(), 0, ',', '.') ?></td>
                    <td><?= $baju->Get_Stok() ?></td>
                    <td><img src="Image/<?= $baju->Get_Foto() ?>" alt="Foto Produk" class="img-thumbnail" width="100"></td>
                    <td><?= $baju->Get_Jenis() ?></td>
                    <td><?= $baju->Get_Bahan() ?></td>
                    <td><?= $baju->Get_Warna() ?></td>
                    <td><?= $baju->Get_Untuk() ?></td>
                    <td><?= $baju->Get_Size() ?></td>
                    <td><?= $baju->Get_Merk() ?></td>
                   
                </tr>
            <?php endforeach; ?>
    </table>

   
</div>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>
