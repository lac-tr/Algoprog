## C. Analisis Curah Hujan BMKG
Time limit	`100 ms`

Memory limit	`256 MB`

Description
-
Badan Meteorologi Kota Glimmerstone (BMKG) selalu melakukan analisis terhadap curah hujan harian dalam rentang satu tahun untuk dapat menduga curah hujan di tahun berikutnya. Petugas BMKG telah mencatat curah hujan harian dari `n` hari sebelumnya: 
`A₁, A₂, …, Aₙ.` Selanjutnya, BMKG menghitung rata-rata curah hujan harian pada selang hari tertentu (hari ke-a sampai dengan hari ke-b). Hal ini dilakukan beberapa kali (sebanyak `q` kali) agar pendugaan yang dilakukan dapat mendekati kenyataan.

Bantulah petugas BMKG tersebut dengan membuat program C agar perhitungan rata-rata curah hujan harian pada selang tertentu tersebut dapat dilakukan dengan cepat.

Constraints
- 1 ≤ `n` ≤ 50000
- 1 ≤ `q` ≤ 20000
- 0 ≤ `Aᵢ` ≤ 60

Input
-
- Baris 1: bilangan `n` dan `q`.
- Baris 2: `n` bilangan bulat yang menunjukkan curah hujan harian dalam milimeter.
- Baris 3 dan seterusnya berisi pasangan nilai `a` dan `b`.

Output
-
Program menampilkan `q` baris rata-rata curah hujan harian dengan format:

    Hari ke a-b: rata-rata dengan 2 digit di belakang tanda desimal.


Sample Input
-
```
10 4
10 20 30 40 50 0 0 0 0 0 
1 1
1 5
2 4
1 10
```

Sample Output
-
```
Hari ke 1-1: 10.00
Hari ke 1-5: 30.00
Hari ke 2-4: 30.00
Hari ke 1-10: 15.00
```
