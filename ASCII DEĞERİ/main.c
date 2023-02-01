#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{ setlocale(LC_ALL,"Turkish");
    char karakter;
    printf(" bir karakter giriniz\n");
    scanf("%c",&karakter);

    //printf("Girmiþ olduðunuz karakterin ASCII deðeri %d'dir",karakter,karakter);  burada ascii degerindeki karsýlýgý cekebilmek icin iki kez cagýrýyoruz */
    //65-90 buyuk harf
    //97-122 kucuk harfler
    int karakterasciidegeri = karakter; // burada bir karakteri integer degere esitlemeye calýsýrsak ASCII degerini alýrýz
    if(karakterasciidegeri >=65 && karakterasciidegeri <=90){
        printf("Girdiðiniz karakter büyük harftir\n");
    }
    else if(karakterasciidegeri <= 122 && karakterasciidegeri>=97){
        printf("Girdiðiniz karakter küçüktür\n");
    }
    else {printf("Lütfen bir karakter giriniz\n");

    }
int a= 33;
printf("%c",a);

    return 0;
}
