# E. Stasiun KRL
|Time limit|1 s|
|:-|:-|
|**Memory limit**|**128 MB**|

Terdapat `N` stasiun KRL, dimulai dari nomor `1,2,3,…,N`. KRL selalu berjalan dari stasiun terkecil ke stasiun terbesar. Untuk setiap `i, j (1 ≤ i < j ≤ N)`, biaya perjalanan dimulai dari stasiun `i` kemudian turun di stasiun `j` adalah `Cᵢ,ⱼ​`.


Tugas anda adalah memastikan apakah terdapat tiga bilangan a,b,c yang memenuhi : 
- `1 ≤ a < b < c ≤ N`.
- Total biaya perjalanan dari stasiun _a_ kemudian turun di stasiun _b_ dan biaya perjalanan dari stasiun _b_ kemudian turun di stasiun _c_ lebih kecil dari total biaya perjalanan dari stasiun _a_ kemudian turun di stasiun _c_.

## Input
Baris pertama berisi sebuah bilangan `N(3 ≤ N ≤ 100)`. Dilanjut N−1 baris. 

Untuk baris ke-i terdapat bilangan `Aᵢ,ᵢ₊₁, Aᵢ,ᵢ₊₂, Aᵢ,ᵢ₊₃, …, Aᵢ,ₙ (0 ≤ Aᵢ,ⱼ ≤ 1000)` dengan `(i < j ≤ N)`

## Output
Sebuah string “YA” jika terdapat kriteria yang telah disebutkan, “TIDAK” untuk sebaliknya. Jangan lupa diakhiri dengan newline (`\n`).

## Contoh Masukan 1
```
3
45 450
45
```

## Contoh Keluaran 1
    YA

## Penjelasan Contoh 1
Jika dipilih (a,b,c) = (1,2,3), maka : C<sub>ab</sub> + C<sub>bc</sub> = 45 + 45 = 90. Sedangkan C<sub>ac</sub> = 450. Maka (a,b,c) memenuhi kriteria.

## Contoh Masukan 2
```
4
25 40 65
30 55
25
```

## Contoh Keluaran 2
    TIDAK

## Penjelasan Contoh 2
Tidak ada tripel (a,b,c) yang memenuhi kriteria.
