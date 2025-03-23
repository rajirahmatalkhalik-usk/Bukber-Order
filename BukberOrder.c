#include <stdio.h>
#include <string.h>

#define MAX_ORDERS 16

// Struktur untuk menyimpan pesanan
typedef struct {
    int paket;
    int minuman;
    int jumlah;
} Pesanan;

// Variabel Global
Pesanan daftarPesanan[MAX_ORDERS];
int totalJumlahPesanan = 0;
int totalPesanan = 0;

int hargaPaket[] = {20000, 25000, 28000, 30000, 35000};
char *namaPaket[] = {"Hemat Berkah", "Nasi Ikan Gurih", "Ayam Nusantara", "Komplit Lezat", "Spesial Bukber"};
char *namaMinuman[] = {"Teh hangat + 3 butir kurma", "Es jeruk", "Jus limun"};

// Deklarasi Fungsi
void menu();
void tambahPesanan();
void hapusPesanan();
void infoPesanan();
void pembayaran();
void tampilkanMenuPaket();


int main() {
    int pilihan;
    do {
        menu();
        printf("Pilih menu: ");
        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid! Harap masukkan angka.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');
        
        switch (pilihan) {
            case 1:
                tambahPesanan();
                break;
            case 2:
                hapusPesanan();
                break;
            case 3:
                infoPesanan();
                break;
            case 4:
                pembayaran();
                break;
            case 5:
                printf("Terima kasih telah menggunakan Bukber-Order.\n\n");
                break;
            default:
                printf("Pilihan tidak valid, silakan coba lagi.\n");
        }
    } while (pilihan != 5);
    
    return 0;
}

// Fungsi untuk menampilkan menu utama
void menu() {
    printf("\n=== MENU BUKBER-ORDER ===\n");
    printf("1. Tambah Pesanan\n");
    printf("2. Hapus Pesanan\n");
    printf("3. Info Pesanan\n");
    printf("4. Pembayaran\n");
    printf("5. Exit\n");
}

// Fungsi untuk menampilkan daftar paket dan minuman
void tampilkanMenuPaket() {
    printf("==================================================================================================\n");
    printf("| No |      Paket      |  Harga   |                          Isi Paket                           |\n");
    printf("==================================================================================================\n");
    for (int i = 0; i < 5; i++) {
        printf("| %-2d | %-15s | Rp%-6d | %-60s |\n", i + 1, namaPaket[i], hargaPaket[i],
               (i == 0) ? "Nasi, Telur Balado, Tahu Tempe, Sambal, Lalapan" :
               (i == 1) ? "Nasi, Ikan Goreng/Bakar, Sayur Asem, Sambal Terasi" :
               (i == 2) ? "Nasi, Ayam Goreng/Bakar, Sambal Matah, Tumis Kangkung" :
               (i == 3) ? "Nasi, Ayam Bakar, Tahu Tempe Bacem, Sambal, Lalapan" :"Nasi, Ayam Geprek, Telur Dadar, Sayur Lodeh, Sambal, Lalapan");
    }
    printf("==================================================================================================\n");
    printf("\nNote: Sudah Include Minuman\n");
    printf("===================================\n");
    printf("| No | Minuman (pilih salah satu) |\n");
    printf("===================================\n");
    for (int i = 0; i < 3; i++) {
        printf("| %-2d | %-26s |\n", i + 1, namaMinuman[i]);
    }
    printf("===================================\n\n");
}

// Fungsi untuk menambah pesanan
void tambahPesanan() {
    if (totalJumlahPesanan >= MAX_ORDERS) {
        printf("Pesanan sudah memenuhi meja!\n");
        return;
    }
    
    tampilkanMenuPaket();
    int paket, minuman, jumlah;
    printf("Masukkan pesanan (paket minuman jumlah): ");
    if (scanf("%d %d %d", &paket, &minuman, &jumlah) != 3) {
        printf("Input tidak valid! Masukkan angka dengan format yang benar.\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');
    
    if (paket < 1 || paket > 5 || minuman < 1 || minuman > 3 || jumlah <= 0) {
        printf("Input tidak valid!\n");
        return;
    }
    
    if (totalJumlahPesanan + jumlah > MAX_ORDERS) {
        printf("Melebihi batas Maksimum!!\n");
        printf("Sisa kursi kosong di meja anda hanyalah %d kursi.\n", MAX_ORDERS - totalJumlahPesanan);
        return;
    }
    
    daftarPesanan[totalPesanan].paket = paket;
    daftarPesanan[totalPesanan].minuman = minuman;
    daftarPesanan[totalPesanan].jumlah = jumlah;
    totalPesanan++;
    totalJumlahPesanan += jumlah;
    printf("Pesanan anda: Paket %s (%s) sebanyak %d pesanan, berhasil ditambahkan.\n", namaPaket[paket - 1], namaMinuman[minuman - 1], jumlah);
}

// Fungsi untuk menghapus pesanan
void hapusPesanan() {
    if (totalPesanan == 0) {
        printf("Tidak terdapat pesanan apapun!\n");
        return;
    }
    
    int paket, minuman, jumlah;
    printf("Masukkan pesanan yang ingin dihapus (paket minuman jumlah): ");
    if (scanf("%d %d %d", &paket, &minuman, &jumlah) != 3) {
        printf("Input tidak valid!\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');

    for (int i = 0; i < totalPesanan; i++) {
        if (daftarPesanan[i].paket == paket && daftarPesanan[i].minuman == minuman) {
            if (daftarPesanan[i].jumlah >= jumlah) {
                daftarPesanan[i].jumlah -= jumlah;
                if (daftarPesanan[i].jumlah == 0) {
                    for (int j = i; j < totalPesanan - 1; j++) {
                        daftarPesanan[j] = daftarPesanan[j + 1];
                    }
                    totalPesanan--;
                }
                totalJumlahPesanan -= jumlah;
                printf("Pesanan anda: Paket %s (%s) sebanyak %d pesanan, berhasil dihapus!\n",
                       namaPaket[paket - 1], namaMinuman[minuman - 1], jumlah);
                return;
            } else {
                printf("Gagal melakukan penghapusan!\n");
                printf("*jumlah penghapusan melebihi jumlah yang ditambah.\n");
                return;
            }
        }
    }
    printf("Tidak dapat melakukan penghapusan!\n");
    printf("*terdapat ketidaksesuaian terhadap pesanan yang sudah ada.\n");
}

// Fungsi untuk menampilkan informasi pesanan
void infoPesanan() {
    if (totalPesanan == 0) {
        printf("Tidak terdapat pesanan apapun.\n");
        return;
    }
    
    int totalHarga = 0;
    printf("\n=== INFO PESANAN ===\n");
    for (int i = 0; i < totalPesanan; i++) {
        printf("Paket %s (%s) sebanyak %d\n", namaPaket[daftarPesanan[i].paket - 1], namaMinuman[daftarPesanan[i].minuman - 1], daftarPesanan[i].jumlah);
        totalHarga += hargaPaket[daftarPesanan[i].paket - 1] * daftarPesanan[i].jumlah;
    }
    printf("Total harga: Rp%d\n", totalHarga);
}

// Fungsi pembayaran
void pembayaran() {
    if (totalPesanan == 0) {
        printf("Silahkan melakukan pesanan terlebih dahulu!\n");
        return;
    }
    
    int totalHarga = 0;
    for (int i = 0; i < totalPesanan; i++) {
        totalHarga += hargaPaket[daftarPesanan[i].paket - 1] * daftarPesanan[i].jumlah;
    }
    
    printf("Total harga yang harus dibayar: Rp%d\n", totalHarga);
    printf("Masukkan jumlah pembayaran: ");
    
    int bayar;
    if (scanf("%d", &bayar) != 1) {
        printf("Input tidak valid!\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');

    if (bayar < totalHarga) {
        printf("Pembayaran kurang! Harap bayar sesuai total harga.\n");
        return;
    }
    
    printf("Terima kasih telah melakukan pembayaran!\n");
    printf("Selamat menikmati hidangan buka puasa Anda.\n");
    if (bayar > totalHarga) {
        printf("Kembalian Anda: Rp%d\n", bayar - totalHarga);
    }
    
    totalPesanan = 0;
    totalJumlahPesanan = 0;
}
