#include <stdio.h>
#include <stdlib.h>

int main()
{//be� basamakl� say�n�n birler onlar y�zler,binler ve onbinler basma��n� ayr�ayr� yazma


    int sayi,birler,onlar,yuzler,binler,onbinler;
    printf("Lutfen bes basamakl� bir sayi giriniz\n");
    scanf("%d",&sayi);
    onbinler = sayi/10000; // burada say� 78523 olsa mesela 10000 e b�l�m� 7, bir�eyler olaca��ndan bunu bast�g�m�zda deger integer deger oldugu icin derlerken 7'ye yuvarlaycak
    binler = (sayi % 10000) / 1000; // burada da 78523'un 10000'den modunu al�nca yani kalan� 8500 etmis oluyo ve bu say�y� 1000e bolunce de 8,bir�eyler c�k�yo gene integerdan elde ediyoz degeri
    yuzler = (sayi% 1000) / 100; // burda ise 78523 u 1000 e bolersek 78 tam gelir 523 kalan olur o da yuze bolunurse kalan 5,birseyler ordan intle tam deger gelir
    onlar = (sayi% 100) /10;// ayn� mant�k

    birler= (sayi% 10); // ayn� mant�k

    printf("Girdiginiz sayinin yuzler basamagi %d'dir\n",yuzler);





    printf("%d      %d     %d     %d     %d",onbinler,binler,yuzler,onlar,birler);

    return 0;
}
