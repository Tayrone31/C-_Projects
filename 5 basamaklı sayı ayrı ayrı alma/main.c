#include <stdio.h>
#include <stdlib.h>

int main()
{//beþ basamaklý sayýnýn birler onlar yüzler,binler ve onbinler basmaðýný ayrýayrý yazma


    int sayi,birler,onlar,yuzler,binler,onbinler;
    printf("Lutfen bes basamaklý bir sayi giriniz\n");
    scanf("%d",&sayi);
    onbinler = sayi/10000; // burada sayý 78523 olsa mesela 10000 e bölümü 7, birþeyler olacaðýndan bunu bastýgýmýzda deger integer deger oldugu icin derlerken 7'ye yuvarlaycak
    binler = (sayi % 10000) / 1000; // burada da 78523'un 10000'den modunu alýnca yani kalaný 8500 etmis oluyo ve bu sayýyý 1000e bolunce de 8,birþeyler cýkýyo gene integerdan elde ediyoz degeri
    yuzler = (sayi% 1000) / 100; // burda ise 78523 u 1000 e bolersek 78 tam gelir 523 kalan olur o da yuze bolunurse kalan 5,birseyler ordan intle tam deger gelir
    onlar = (sayi% 100) /10;// ayný mantýk

    birler= (sayi% 10); // ayný mantýk

    printf("Girdiginiz sayinin yuzler basamagi %d'dir\n",yuzler);





    printf("%d      %d     %d     %d     %d",onbinler,binler,yuzler,onlar,birler);

    return 0;
}
