#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{ setlocale(LC_ALL,"Turkish");
    char karakter;
    printf(" bir karakter giriniz\n");
    scanf("%c",&karakter);

    //printf("Girmi� oldu�unuz karakterin ASCII de�eri %d'dir",karakter,karakter);  burada ascii degerindeki kars�l�g� cekebilmek icin iki kez cag�r�yoruz */
    //65-90 buyuk harf
    //97-122 kucuk harfler
    int karakterasciidegeri = karakter; // burada bir karakteri integer degere esitlemeye cal�s�rsak ASCII degerini al�r�z
    if(karakterasciidegeri >=65 && karakterasciidegeri <=90){
        printf("Girdi�iniz karakter b�y�k harftir\n");
    }
    else if(karakterasciidegeri <= 122 && karakterasciidegeri>=97){
        printf("Girdi�iniz karakter k���kt�r\n");
    }
    else {printf("L�tfen bir karakter giriniz\n");

    }
int a= 33;
printf("%c",a);

    return 0;
}
