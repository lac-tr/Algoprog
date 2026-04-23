# Mesin ATM

Sebuah mesin ATM harus mengecek apakah saldo cukup sebelum penarikan. Diasumsikan bahwa saldo awal adalah 1000000 (satu juta) rupiah. Nasabah melakukan penarikan uang dengan nilai kelipatan dari 50000 rupiah. Jika nilai yang dimasukkan bukan kelipatan dari 50000 rupiah, maka mesin menampilkan pesan `"Penarikan harus kelipatan 50000 rupiah."`. Jika saldo cukup, mesin menampilkan pesan `"Berhasil. Sisa saldo = .... rupiah."`. Dan jika saldo tidak mencukupi, maka mesin menampilkan pesan `"Saldo tidak cukup."`.

Buatlah program C untuk mengelola mesin ATM tersebut.

## Input
Sebuah bilangan bulat positif `d` yang menunjukkan jumlah uang yang akan ditarik.

## Output
- Jika nilai yang dimasukkan bukan kelipatan dari 50000 rupiah, maka mesin menampilkan pesan `"Penarikan harus kelipatan 50000 rupiah."`
- Jika saldo cukup, mesin menampilkan pesan `"Berhasil. Sisa saldo = .... rupiah."`
- Jika saldo tidak mencukupi, maka mesin menampilkan pesan `"Saldo tidak cukup."`

## Sample Input
    200000

## Sample Output
    Berhasil. Sisa saldo = 800000 rupiah.
