#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    int i ,sayi, sayac=0;
    printf("Sayı giriniz: ");
    scanf("%d",&sayi);
    for (i=2;i<sayi;i++) {
        if(sayi%i==0) {
            sayac++;
        }
    }
    if(sayac==0) {
        printf("Asal sayıdır.");
    } else {
        printf("Asal sayı değildir.");
    }
    return 0;
}
