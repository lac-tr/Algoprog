## B. Analisis Penjualan
Time limit	`500 ms`

Memory limit	`256 MB`

Description
-
Toko elektronik "Stroberi Tech" selalu melakukan analisis penjualan selama seminggu. Analisis dilakukan dengan mencatat nilai total penjualan per hari selama seminggu, mulai dari Minggu, Senin, sampai dengan Sabtu `(A₁, A₂, A₃, A₄, A₅, A₆, A₇).` Dari data ini, pemilik toko menghitung dan menampilkan rata-rata nilai per hari, nilai penjualan tertinggi, dan hari paling awal dalam seminggu dimana terjadi nilai penjualan tertinggi.

Constraints
-
- `1000 ≤ Aᵢ ≤ 10 000 000`
  
Input
-
Input data berupa 7 nilai bilangan bulat dengan format:
```
 A₁, A₂, …, A₇
```

Output
-
Tiga nilai dalam 3 baris, masing-masing adalah:

- Baris 1: rata-rata nilai per hari (ditampilkan dalam 2 digit di belakang tanda desimal)
- Baris 2: nilai penjualan tertinggi
- Baris 3: hari paling awal dalam seminggu dimana terjadi nilai penjualan tertinggi dengan urutan hari dalam seminggu adalah: Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu.

Sample Input
-
```
5000000 450000 125000 5000 5000000 1255000 4000
```

Sample Output
-
```
1691285.71
5000000
Minggu
```
