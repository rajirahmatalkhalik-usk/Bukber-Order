# Bukber-Order

## Deskripsi
Bukber-Order adalah program berbasis C yang dirancang untuk membantu pengguna dalam memesan, mengelola, dan membayar paket berbuka puasa dengan berbagai pilihan makanan dan minuman secara interaktif. Program ini dibuat sebagai tugas kelompok dalam mata kuliah **Pemrograman 1**, dengan tujuan mengimplementasikan konsep **looping, seleksi percabangan, dan fungsi** dalam sebuah program sederhana yang memiliki minimal 5 menu dan berjalan hingga menu 'Exit' dipilih.

## Fitur Program
1. **Tambah Pesanan** - Memungkinkan pengguna untuk memilih dan menambahkan pesanan paket makanan dan minuman.
2. **Hapus Pesanan** - Menghapus pesanan tertentu yang telah dimasukkan.
3. **Info Pesanan** - Menampilkan daftar pesanan yang telah dibuat beserta total harga.
4. **Pembayaran** - Memproses pembayaran berdasarkan total harga pesanan dan menampilkan kembalian jika ada.
5. **Exit** - Mengakhiri program setelah semua pesanan selesai diproses.

## Cara Penggunaan
1. Jalankan program Bukber-Order.
2. Pilih opsi dari menu utama:
   - **1** untuk menambahkan pesanan.
   - **2** untuk menghapus pesanan.
   - **3** untuk melihat informasi pesanan.
   - **4** untuk melakukan pembayaran.
   - **5** untuk keluar dari program.
3. Ikuti instruksi yang diberikan oleh program.
4. Pastikan memasukkan input yang valid untuk menghindari kesalahan.

## Struktur Data yang Digunakan
- **Struct `Pesanan`** untuk menyimpan informasi setiap pesanan, yang terdiri dari:
  - `paket` (jenis paket makanan yang dipilih)
  - `minuman` (jenis minuman yang dipilih)
  - `jumlah` (jumlah pesanan)
- **Array `daftarPesanan`** untuk menyimpan hingga **16 pesanan** secara bersamaan.

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
- Maksimal **16 pesanan** yang dapat dimasukkan dalam satu sesi.
- Tersedia **5 paket makanan** dan **3 jenis minuman**.
- Pembayaran harus dilakukan dengan jumlah yang mencukupi atau lebih besar dari total harga.

## Lisensi
Program ini dibuat untuk keperluan edukasi dalam mata kuliah Pemrograman 1 dan dapat dimodifikasi sesuai kebutuhan.

---
Dibuat oleh **Kelompok Tugas Pemrograman 1** untuk mengasah pemahaman dalam implementasi dasar pemrograman C.

