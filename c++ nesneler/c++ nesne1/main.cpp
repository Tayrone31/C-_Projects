#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Dikdortgen
{
public:
int yukseklik;
int Genislik;
int Alan;
void YukseklikGir(){
	cout<<"Please enter the height";
	cin >>yukseklik;
	cout<<"Please enter the genislik";
	cin>>Genislik;
	
}	
void Alanbul(){
	Alan = yukseklik*Genislik;
	cout<< Alan;
}
	
};
int main(int argc, char** argv) {
	Dikdortgen d1;//dikdortgenden olusmus d1 nesnesi
	Dikdortgen d2;//dikdortgenden olusmus d2 nesnesi
	d2.YukseklikGir();//d2 fonksiyon da kullanabilir. 
	d2.Alanbul();
	return 0;
}