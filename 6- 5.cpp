#include <stdio.h>

double calculate_balance(double principal, double rate, int months) {
    double balance = principal;
    for (int i = 0; i < months; i++) {
        balance = balance * (1 + rate / 100);
    }
    return balance;
}

int main() {
    double principal = 1000000; // in rupiah
    double rate = 2; // in percentage
    int months = 10;

    double balance = calculate_balance(principal, rate, months);
    printf("Setelah 10 bulan, jumlah uang yang dimiliki adalah Rp%.2f.\n", balance);

    return 0;
}