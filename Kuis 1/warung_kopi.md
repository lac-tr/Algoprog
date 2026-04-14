## 1b. Warung Kopi

Time limit `500 ms`

Memory limit	`26214 KB`

Deskripsi
-
Hadi baru saja membuka warung kopi. Selain tentunya ada berbagai macam kopi, warung kopi Hadi juga menyediakan sajian gorengan berupa tempe mendoan dan pisang goreng. Namun, karena keterbatasan stok bahan baku, Hadi tidak dapat menyediakan kedua jenis gorengan ada setiap hari, namun hanya di hari-hari tertentu saja.

- Pada hari pertama (ke-1), kedua jenis gorengan tersebut tersedia.
- Selanjutnya, tempe mendoan tersedia setiap 3 hari sekali, jadi pada hari ke-4, 7, 10, 13, 16, dst.
- Sedangkan pisang goreng tersedia setiap 5 hari sekali, jadi pada hari ke-6, 11, 16 dst. 

Jika diberikan sebuah nomor hari (sejak hari pertama warung kopi dibuka) `N`, tentukan gorengan jenis apa saja yang tersedia di warung kopi Hadi. 

Constraints
-
`1 ≤ N ≤ 2 milyar`

Input
-
N

Keluaran
-
Keluarkan sebuah baris berisi string/teks yang merupakan salah satu dari 4 kemungkinan:
- TEMPE (artinya tersedia tempe mendoan)
- PISGOR (artinya tersedia pisang goreng)
- TEMPE DAN PISGOR (artinya keduanya tersedia)
- KOSONG (artinya keduanya tidak tersedia)

Contoh Masukan 1
-
    1

Contoh Keluaran 1
-
    TEMPE DAN PISGOR

Contoh Masukan 2
-
    11

Contoh Keluaran 2
-
    PISGOR
