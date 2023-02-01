#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Dikdortgen{
	private:
		int yukseklik;
		int genislik;
		int alan;
		
    public:
    Dikdortgen(){
    	cout<<"Cagirildim"<<endl;
    	cout<<"Her nesne olusturuldugunda cagirilicam"<<endl;
	}
	void verigir(){
		cout<<"Yukseklik gir";
		cin>>yukseklik;
		cout<<"Genislik gir";
		cin>>genislik;
	}
	void alanhes(){
		alan = genislik*yukseklik;
		cout<<"alan:"<<alan<<endl;
	}
};
int main(int argc, char** argv) {
	
	Dikdortgen d1;// d1 nesnesi olustugu icin constructor fonk cagirildi
	Dikdortgen d2;//d2 nesnesi olustu gene cagırıldı
	
	return 0;
}