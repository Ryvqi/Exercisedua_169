#include <iostream>
#include <vector>
using namespace std;

class Penerbit {
public:
	string nama;
	vector<Pengarang*> yang_diikuti;
};

class Pengarang {
public:
	string nama;
	vector<Penerbit*> yang_diterbitkan;
};

class Buku {
public:
	string judulbuku;
};

int main() {

	Penerbit* varPenerbit1 = new Penerbit();
	varPenerbit1->nama = "Gama Press";
	Penerbit* varPenerbit2 = new Penerbit();
	varPenerbit2->nama = "Intan Patiwara";

	Pengarang* varPengarang1 = new Pengarang();
	varPengarang1->nama = "Joko";
	Pengarang* varPengarang2 = new Pengarang();
	varPengarang2->nama = "Lia";
	Pengarang* varPengarang3 = new Pengarang();
	varPengarang3->nama = "Giga";
	Pengarang* varPengarang4 = new Pengarang();
	varPengarang4->nama = "Asroni";

	Buku* varBuku1 = new Buku();
	varBuku1->judulbuku = "Fisika";
	Buku* varBuku2 = new Buku();
	varBuku2->judulbuku = "Algoritma";
	Buku* varBuku3 = new Buku();
	varBuku3->judulbuku = "Basisdata";
	Buku* varBuku4 = new Buku();
	varBuku4->judulbuku = "Daftar pemrograman";
	Buku* varBuku5 = new Buku();
	varBuku5->judulbuku = "Matematika";
	Buku* varBuku6 = new Buku();
	varBuku6->judulbuku = "Multimedia1";

	return 0;

}