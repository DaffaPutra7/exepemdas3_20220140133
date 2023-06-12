#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran : public bidangDatar {
public:
	string Jejari;

	Lingkaran(string pJejari) :
		Jejari(pJejari) {
		cout << "Masukkan Jejari\n" << endl;
	}
	Lingkaran(string pLuas) :
		Jejari(pLuas) {
		cout << "Masukkan Luas\n" << endl;
	}
	Lingkaran(string pKeliling) :
		Jejari(pKeliling) {
		cout << "Masukkan Keliling\n" << endl;
	}
};

class Bujursangkar :public bidangDatar { /*lengkapi disini*/
public:
	string Sisi;

	Bujursangkar(string pSisi) :
		Sisi(pSisi) {
		cout << "Masukkan Sisi\n" << endl;
	}
	Bujursangkar(string pLuas) :
		Sisi(pLuas) {
		cout << "Masukkan Luas\n" << endl;
	}
	Bujursangkar(string pKeliling) :
		Sisi(pKeliling) {
		cout << "Masukkan Keliling\n" << endl;
	}
};

int main() { /*lengkapi disini*/ 	

	return 0;}