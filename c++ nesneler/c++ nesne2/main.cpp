#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Dikdortgen{
	public:
		int yukseklik;
		int genislik;
		int alan;
		void verigir(){
			cout<<"Yuksekligi giriniz";
			cin >>yukseklik;
			cout<<"Genisligi giriniz";
			cin>>genislik;
		}
		void alanbul(){
			alan = genislik*yukseklik;
			cout<<"Alan:"<<alan<<endl;
		}
		};
		
	int main(){

	void verigir();
	Dikdortgen d1;
	d1.yukseklik =10;// Degerleri kendimiz de verebiliyoz
	d1.genislik=155;
	d1.alanbul();
	d1.verigir();
	d1.alanbul();
	Dikdortgen d2;
	d2.genislik=22;
	d2.yukseklik=32;
	d2.alanbul();
	
	
     }
