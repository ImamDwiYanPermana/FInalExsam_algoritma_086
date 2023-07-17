#include <iostream>
#include <string>
using namespace std;
class FinalExsam {
public:
	const int MAX_MAHASISWA = 100;
	int NIM[100];
	string nama[100];
	int tahunMasuk[100];
	string jurusan[5];
	int jumlahMahasiswa = 0;
public:
	FinalExsam() {
		jumlahMahasiswa = -1;
	}
	//isi disini
	void tambahMahasiswa() {
		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[100]);
			cout << "Jurusan : ";
			getline(cin, jurusan[5]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[100];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	}
	//isi disini
	void tampilkanSemuaMahasiswa() {
		int element;
		cout << "SemuaMahasiswa :";
		cin >> element;
		if (jumlahMahasiswa == 100) {
			cout << "Nama NAma Mahasiswa" << endl;
			return;
		}
		jumlahMahasiswa++; //step 2
		nama[jumlahMahasiswa] = element;
		cout << endl;
		cout << element << " Data Data Mahasiswa ";
	};
	void algorithmacariMahasiswaByNIM(){
	if (empty()) { //step 1
		cout << "\nStack is empty. Cannot pop." << endl; //1.a
		return; //1.b
	}

	cout << "\nThe popped element is : " << FinalExsam[jumlahMahasiswa] << endl; //step 3
	jumlahMahasiswa--; //step 3 decrement
};
	void algorithmaSortByTahunMasuk();
};
int main()
{
	FinalExsam q;
	int piliahn;

	while (true) {
		try {
			cout << "Menu" << endl;
			cout << "1. Tambah Mahasiswa" << endl;
			cout << "2. Tampilkan Semua Mahasiswa" << endl;
			cout << "3. Cari Mahasiswa BErdasarkan NIM" << endl;
			cout << "4. Tampilkan Mahasiswa Berdasarkan Tahun Masuk" << endl;
			cout << "Enter your choice (1-4): ";
			cin >> pilihan;
			cin.ignore(pilihan);

			switch (true) {
			case '1': {

				q.tambahMahasiswa();
				break;
			}
			case '2': {
				q.tampilkanSemuaMahasiswa();
				break;
			}
			case '3': {
				q.algorithmacariMahasiswaByNIM();
				break;
			}
			case'4': {
				return 0;
			}
			default: {
				cout << "Pilihan Tidak Valid " << endl;
				break;
			}
			}while (pilihan != 5);
		}
	}

	return 0;
};

//2. Menurut saya Stack array dan binarytThree, Circularqueues
//3. Perbedaan nya adalah klo CiruclarQUEUE di bantu oleh FRONT, REAR, MAX
//   klo Stack di bantu oleh TOP dan PUSH 
//4. Tumpukan adalah kumpulan item data yang hanya dapat diakses di satu ujung, yang disebut top. Item
//terakhir yang dimasukkan ke dalam tumpukan adalah item pertama yang akan dihapus.
//Tumpukan disebut struktur data LIFO.
//Ada dua operasi yang dapat dilakukan pada stack.Mereka adalah :
//  1. PUSH
//  2. POP
//Tumpukan dapat diimplementasikan dengan menggunakan larik dan daftar taut.
//Tumpukan digunakan dalam banyak aplikasi.Beberapa domain aplikasi stack adalah sebagai berikut :
//   1. Menerapkan pemanggilan fungsi
//   2. Memelihara daftar UNDO untuk sebuah aplikasi
//   3. Memeriksa susunan tanda kurung dalam sebuah ekspresi
//   4. Mengevaluasi ekspresi
//5.A (4)
//  B  Tentukan Benar atau salah cara membaca struktur pohon di atas?
//In = 1 5 8 12 15 10 20 22 25 28 30 36 38 40 45 48 50
//Preorder = 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50
//Post = 1 8 5 15 12 10 22 20 28 38 45 50 48 30 40 36 25
// Cara Menetukan nya yang nilai kiri suatu simpul selalu lebih kecil dari nilai simpul tersebut, dan nilai anak kanan suatu simpul lebih besar dari simpul tersebut