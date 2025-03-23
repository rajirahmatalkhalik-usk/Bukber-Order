# Bukber-Order

## Deskripsi
Bukber-Order adalah program berbasis C yang memungkinkan pengguna untuk melakukan pemesanan paket berbuka puasa dengan berbagai pilihan makanan dan minuman. Program ini memiliki fitur untuk menambahkan, menghapus, melihat informasi pesanan, dan melakukan pembayaran.

## Fitur Program
1. **Tambah Pesanan** - Pengguna dapat menambahkan pesanan dengan memilih paket makanan dan minuman.
2. **Hapus Pesanan** - Menghapus pesanan yang telah ditambahkan sebelumnya.
3. **Info Pesanan** - Menampilkan daftar pesanan yang sudah dilakukan beserta total harga.
4. **Pembayaran** - Memproses pembayaran berdasarkan total harga pesanan.
5. **Exit** - Keluar dari program.

## Cara Penggunaan
1. Jalankan program Bukber-Order.
2. Pilih opsi dari menu utama:
   - Ketik angka 1 untuk menambahkan pesanan.
   - Ketik angka 2 untuk menghapus pesanan.
   - Ketik angka 3 untuk melihat informasi pesanan.
   - Ketik angka 4 untuk melakukan pembayaran.
   - Ketik angka 5 untuk keluar dari program.
3. Ikuti instruksi yang diberikan oleh program.
4. Jika melakukan pembayaran, pastikan jumlah yang dibayarkan mencukupi agar transaksi berhasil.

## Struktur Data yang Digunakan
- **Struct `Pesanan`** digunakan untuk menyimpan informasi pesanan yang terdiri dari:
  - `paket` (jenis paket makanan yang dipilih)
  - `minuman` (jenis minuman yang dipilih)
  - `jumlah` (jumlah pesanan)
- **Array `daftarPesanan`** untuk menyimpan list pesanan yang berbeda.
- **Array `daftarJumlahPesanan`** untuk menyimpan daftar pesanan hingga batas maksimal 16 pesanan.

## Contoh Penggunaan
```
=== MENU BUKBER-ORDER ===
1. Tambah Pesanan
2. Hapus Pesanan
3. Info Pesanan
4. Pembayaran
5. Exit
Pilih menu: 1
Masukkan pesanan (paket minuman jumlah): 3 2 2
Pesanan anda: Paket Ayam Nusantara (Es jeruk) sebanyak 2 pesanan, berhasil ditambahkan.
```

## Syarat dan Batasan
- Maksimal 16 pesanan dapat dimasukkan.
- Hanya tersedia 5 paket makanan dan 3 jenis minuman.
- Pembayaran harus dilakukan dengan jumlah yang cukup atau lebih besar dari total harga pesanan.

## Lisensi
Program ini dibuat untuk keperluan edukasi dan bebas digunakan serta dimodifikasi sesuai kebutuhan.

---
Dibuat dengan ❤️ untuk membantu pemesanan berbuka puasa dengan mudah!
