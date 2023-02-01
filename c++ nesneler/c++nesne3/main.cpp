#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Dikdortgen{
	private:
		int yukseklik;
		int genislik;
		int alan;
	public:
		void verigir(){
			
			cout<<"Yuksekligi giriniz";
			cin >>yukseklik;
			if(yukseklik <=0){
				cout<<"Yukseklik can't be lower than zero";
				break;
		}
			
			cout<<"Genisligi giriniz";
			cin>>genislik;
		}
		void alanbul(){
			alan = genislik*yukseklik;
			cout<<"Alan:"<<alan<<endl;
		}
		};
		
	int main(){

	
	Dikdortgen d1;
	

	d1.alanbul();
	d1.verigir();
	d1.alanbul();
	Dikdortgen d2;

	
	
     }
