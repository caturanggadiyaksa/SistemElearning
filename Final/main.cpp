#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>  //Librari Untuk Menyimpan File
#include <fstream>
#include <conio.h>
using namespace std;

int KE;

class mahasiswa{

	public:
		string nim;
		string prodiku;
		string nama;
		string program;
		string kelasku;
		
		//biodata
		string namaku;
		string ttg;
		string alamat;
		string jenis_kelamin;
		string agama;
		string kode_pos;
		string telepon;
		string e_mail;
		string kewarganegaraan;
		string mynim;
		string nasekolah;
		string talulus;
		string jurusan;
		string fakultas;
		string prodi;
		string kelas;
		string masuk;
		string status;
		string semester;
		string pilkelas;
		string kampus;
		
		// biaya regristrasi
		int biaya_pendaftaran;
		int potongan;
		int jumlah_biaya;
		string jatuh_tempo;
		
		//biaya regris satu
		int biaya_satu;
		int potongan_satu;
		int jumlah_satu;
		string tempo_satu;
		
		//biaya regris dua
		int biaya_dua;
		int potongan_dua;
		int jumlah_dua;
		string tempo_dua;
		
		//biaya regris tiga
		int biaya_tiga;
		int potongan_tiga;
		int jumlah_tiga;
		string tempo_tiga;
		
		//biaya regris empat
		int biaya_empat;
		int potongan_empat;
		int jumlah_empat;
		string tempo_empat;
		
		//biaya semester
		int biaya_semester;
		int potongan_semester;
		int biaya_semessatu;
		
		void tampilanmaha()
		{
			cout << "MENU UTAMA" << endl;
			cout << "| [1] Dashaboard" << endl;
			cout << "| [2] Mata Kuliah" << endl;
			cout << "| [3] Tugas" << endl;
			cout << "| [4] Menu Biaya" << endl;
			cout << "| [5] Exit" << endl;
		}
		
		void biodata() //untuk info user
		{
			cout << "NIM                   \t:" << nim << endl;
			cout << "Prodi                 \t:" << prodiku << endl;
			cout << "Kelas                 \t:" << kelasku << endl;
			cout << "Nama                  \t:" << nama << endl;
			cout << "Jenis Program         \t:" << program << endl;
			
		}
		
		void tampilbio()
		{
			cout << "Biodata Mahasiswa" << endl << endl << endl << endl;
			cout << "Nama Mahasiswa               \t:" << namaku << endl; //"catur angga", "pati, 26 oktober 2001", "Desa Tlogoharum", "Laki laki", "Islam", 3443235, 62575487584, "cr261001@gmail.com", "Indonesia", "TI202104"
			cout << "Tempat Tanggal Lahir         \t:" << ttg << endl;
			cout << "Alamat                       \t:" << alamat << endl;
			cout << "jenis kelamin                \t:" << jenis_kelamin << endl;
			cout << "Agama                        \t:" << agama << endl;
			cout << "Kode Pos                     \t:" << kode_pos << endl;
			cout << "Nomor Telepon                \t:" << telepon << endl;
			cout << "E-mail                       \t:" << e_mail << endl;
			cout << "Kewarganegaraan              \t:" << kewarganegaraan << endl;
			cout << "NIM                          \t:" << mynim << endl;
			
		}
		
		
		void asalsekolah()
		{
			cout << "Nama Sekolah              \t:" << nasekolah <<endl;
			cout << "Tahun Lulus               \t:" << talulus << endl;
			cout << "Jurusan                   \t:" << jurusan << endl;
		}
		
		void akademik()
		{
			 cout << "Fakultas                         \t:" << fakultas << endl;
			 cout << "Prodi                            \t:" << prodi << endl;
			 cout << "Kelas                            \t:" << kelas << endl;
			 cout << "Tahun Masuk                      \t:" << masuk << endl;
			 cout << "Status Akademik                  \t:" << status <<endl;
			 cout << "Semester                         \t:" << semester << endl;
			 cout << "Jenis Pilihan Kelas              \t:" << pilkelas << endl;
			 cout << "Kampus                           \t:" << kampus << endl;
		}
		
		void biayaregris()
		{
			cout << "Biaya Pendaftaran\t\t\t\t" << "Potongan\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_pendaftaran << "\t\t\t\t\t\t" << potongan << "\t\t\t\t" << jumlah_biaya << endl;
			cout << "Jatuh Tempo" << jatuh_tempo << endl;
			
		}
		
		void regristrasisatu()
		{
			cout << "Biaya\t\t\t\t" << "Potongan \t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_satu << "\t\t\t\t" << potongan_satu << "\t\t\t\t" << jumlah_satu << endl;
			cout << tempo_satu << endl;
		}
		
		void regristrasidua()
		{
			cout << "Biaya\t\t\t\t" << "Potongan \t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_dua << "\t\t\t\t" << potongan_dua << "\t\t\t\t" << jumlah_dua << endl;
			cout << "Jatuh Tempo " << tempo_dua << endl;
		}
		
		void regristrasitiga()
		{
			cout << "Biaya\t\t\t\t" << "Potongan \t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_tiga << "\t\t\t\t" << potongan_tiga << "\t\t\t\t" << jumlah_tiga << endl;
			cout << "Jatuh Tempo" << tempo_tiga << endl;
		}
		
		void regristrasiempat()
		{
			cout << "Biaya\t\t\t\t" << "Potongan \t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_empat << "\t\t\t\t" << potongan_empat << "\t\t\t\t" << jumlah_empat << endl;
			cout << "Jatuh Tempo" << tempo_empat << endl;
		}
		
		void biayasemestersatu()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;
		}
		
		void biayasemesterdua()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;	
		}
		
		void biayasemestertiga()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;	
		}
		
		void biayasemesterempat()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;
		}
		
		void biayasemesterlima()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;
		}
		
		void biayasemesterenam()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;
		}
		
		void biayasemestertujuh()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;
		}
		
		void biayasemesterdelapan()
		{
			biaya_semessatu = biaya_semester - potongan_semester;
			cout << "Biaya\t\t\t\t" << "Potongan\t\t\t\t" << "Jumlah Biaya" << endl;
			cout << biaya_semester << "\t\t\t\t" << potongan_semester << "\t\t\t\t\t" << biaya_semessatu << endl << endl;
			cout << "pembayaran\t\t" << "Jatuh Tempo\t\t" << "Tagihan" << endl;
			cout << "" << "" << "" << endl;	
		}
		
		

};



class matakuliah: public mahasiswa
{
public:
	int nilai;
	
	void matkulti()
	{
		cout << "MENU MATA KULIAH" << endl;
		cout << "[1] SISTEM DIGITAL" << endl;
		cout << "[2] PENDIDIKAN AGAMA" << endl;
		cout << "[3] DASAR ALGORITMA" << endl;
		cout << "[4] PENGANTAR IT" << endl;
		cout << "[5] CHARACTER BUILDING" << endl;
		cout << "[6] GENERAL ENGLISH" << endl;
		cout << "[7] MATEMATIKA" << endl;
		cout << "[8] PANCASILA" << endl;
		cout << "[9] Kembali Ke Menu Sebelumnya" << endl;
	}
	
	void tugasti()
	{
		cout << endl << endl << endl;
		cout << "MENU TUGAS " << endl;
		cout << "[1] SISTEM DIGITAL" << endl;
		cout << "[2] PENDIDIKAN AGAMA" << endl;
		cout << "[3] DASAR ALGORITMA" << endl;
		cout << "[4] PENGANTAR TI" << endl;
		cout << "[5] CHARACTER BUILDING" << endl;
		cout << "[6] GENERAL ENGLISH" << endl;
		cout << "[7] MATEMATIKA" << endl;
		cout << "[8] PANCASILA" << endl;
		cout << "[9] Kembali Ke Menu Sebelumnya" << endl;
	}
	
	void matkulsi()
	{
		cout << "MENU MATA KULIAH" << endl;
		cout << "[1] Basis Data Dasar" << endl;
		cout << "[2] PENDIDIKAN AGAMA" << endl;
		cout << "[3] DASAR ALGORITMA" << endl;
		cout << "[4] PENGANTAR TI" << endl;
		cout << "[5] CHARACTER BUILDING" << endl;
		cout << "[6] GENERAL ENGLISH" << endl;
		cout << "[7] Pengantar Manajemen" << endl;
		cout << "[8] PANCASILA" << endl;
		cout << "[9] Kembali Ke Menu Sebelumnya" << endl;
	}

	void lihattugas()
	{
		
		cout << "[1] Pengumpulan Tugas" << endl;
		cout << "[2] Lihat Jawaban Tugas " << endl;
		cout << "[3] Edit Jawaban Tugas" << endl;
		cout << "[4] Hapus Jawaban Tugas" << endl;	
		cout << "[5] kembali ke menu sebelumnya " << endl;
	}
	

};

class sistemdig: public matakuliah
{
public:
	int p;
	
	//modul sistem digital untuk mahasiswa
	void bacasisdig()
	{
		
		ifstream myfile("sistemdigital.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}	
	
	//tugas untuk pengumpulan
	void kumpultugassisdig()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugassisdig.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//tugas untuk melihat jawaban tugas
	void tampiltugassisdig()
	{
		ifstream myfile("hasiltugassisdig.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//tugas untuk mengedit jawban tugas
	void editjawabansisdig()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugassisdig.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//tugas untuk menghapus jawaban tugas
	void hapustugassisdig()
	{
		ofstream myfile;
		myfile.open("hasiltugassisdig.txt");
		cout << "  " << endl;
		myfile.close();
	}
	
	//daftar tugas sistem digital
	void daftartugassisdig()
	{
		ifstream myfile("tugassisdig.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
		
};

class pendidikanagama: public matakuliah
{
public:
	int p;
	
	//daftar tugas agama
	void daftartugasagama()
	{
		ifstream myfile("tugasagama.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}	
	
	//modul agama untuk mahasiswa
	void bacapendagama()
	{
		
		ifstream myfile("pendidikanagama.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//TUGAS untuk pengumpulan Agama
	void kumpultugasagama()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasagama.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//TUGAS untuk melihat jawaban 
	void tampiltugasagama()
	{
		ifstream myfile("hasiltugasagama.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//tugas untuk mengedit jawaban
	void editjawabanagama()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasagama.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//tugas untuk menghapus jawaban
	void hapustugasagama()
	{
		ofstream myfile;
		myfile.open("hasiltugasagama.txt");
		cout << "  " << endl;
		myfile.close();
	}
	
};

class dasaralgoritma: public matakuliah
{
public:
	int p;
	
	//daftar tugas algoritma
	void daftartugasalgo()
	{
		ifstream myfile("tugasalgoritma.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//modul dasar algoritma  untuk mahasiswa
	void bacaalgoritma()
	{
		
		ifstream myfile("dasaralgoritma.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	} 
	
	//TUGAS untuk mengumpulkan tugas algoritma
	void kumpultugasalgoritma()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasalgoritma.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menampilkan jawaban tugas 
	void tampiltugasalgoritma()
	{
		ifstream myfile("hasiltugasalgoritma.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//untuk mengedit jawaaban tugas
	void editjawabanalgoritma()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasalgoritma.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menghapus jawaban tugas
	void hapustugasalgoritma()
	{
		ofstream myfile;
		myfile.open("hasiltugasalgoritma.txt");
		cout << "  " << endl;
		myfile.close();
	}
	
	
};

class pengantarit: public matakuliah
{
public:
	int p;
	
	
	//daftar tugas pengantar it
	void daftartugasit()
	{
		ifstream myfile("tugasit.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//modul pengantar it untuk mahasiswa
	void bacapengantarit()
	{
		
		ifstream myfile("pengantarit.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//TUGAS untuk mengumpulkan tugas pengantar it
	void kumpultugasit()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasit.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	
	//untuk menampilkan jawaban tugas 
	void tampiltugasit()
	{
		ifstream myfile("hasiltugasit.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//untuk mengedit jawaaban tugas
	void editjawabanit()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasit.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menghapus jawaban tugas
	void hapustugasit()
	{
		ofstream myfile;
		myfile.open("hasiltugasit.txt");
		cout << "  " << endl;
		myfile.close();
	}
};

class characterbuilding: public matakuliah
{
public:
	int p;
	
	
	//daftar tugas character building
	void daftartugascaracter()
	{
		ifstream myfile("tugascaracter.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//modul chaaracter bulding untuk mahasiswa
	void bacacharacterbulding()
	{
		
		ifstream myfile("character.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	
	//TUGAS untuk mengumpulkan tugas character building
	void kumpultugascaracter()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugascaracter.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menampilkan jawaban tugas 
	void tampiltugascaracter()
	{
		ifstream myfile("hasiltugascaracter.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//untuk mengedit jawaaban tugas
	void editjawabancaracter()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugascaracter.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menghapus jawaban tugas
	void hapustugascaracter()
	{
		ofstream myfile;
		myfile.open("hasiltugascaracter.txt");
		cout << "  " << endl;
		myfile.close();
	}	
};

class generalenglish: public matakuliah
{
public:
	int p;
	
	
	//daftar tugas general english
	void daftartugasenglish()
	{
		ifstream myfile("tugasenglish.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//modul general english untuk mahasiswa
	void bacaenglish()
	{
		
		ifstream myfile("generalenglish.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//TUGAS untuk mengumpulkan tugas
	void kumpultugasenglish()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasenglish.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	
	//untuk menampilkan jawaban tugas 
	void tampiltugasenglish()
	{
		ifstream myfile("hasiltugasenglish.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//untuk mengedit jawaaban tugas
	void editjawabanenglish()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasenglish.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menghapus jawaban tugas
	void hapustugasenglish()
	{
		ofstream myfile;
		myfile.open("hasiltugasenglish.txt");
		cout << "  " << endl;
		myfile.close();
	}
};

class matematika: public matakuliah
{
public:
	int p;
	
	
	//daftar tugas matematika
	void daftartugasmtk()
	{
		ifstream myfile("tugasmtk.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//modul matematika untuk mahasiswa
	void bacamtk()
	{
		
		ifstream myfile("matematika.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//TUGAS untuk mengumpulkan tugas matematika
	void kumpultugasmtk()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasmtk.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	
	//untuk menampilkan jawaban tugas 
	void tampiltugasmtk()
	{
		ifstream myfile("hasiltugasmtk.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	
	//untuk mengedit jawaaban tugas
	void editjawabanmtk()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugasmtk.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menghapus jawaban tugas	
	void hapustugasmtk()
	{
		ofstream myfile;
		myfile.open("hasiltugasmtk.txt");
		cout << "  " << endl;
		myfile.close();
	}
};

class pancasila: public matakuliah
{
public:
	int p;
	
	
	//daftar tugas pancasila
	void daftartugaspancasila()
	{
		ifstream myfile("tugaspancasila.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
					cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//modul pancasila untuk mahasiswa
	void bacapancasila()
	{
		
		ifstream myfile("pancasila.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//TUGAS untuk mengumpulkan tugas pancasila
	void kumpultugaspancasila()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugaspancasila.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menampilkan jawaban tugas 
	void tampiltugaspancasila()
	{
		ifstream myfile("hasiltugaspancasila.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//untuk mengedit jawaaban tugas
	void editjawabanpancasila()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("hasiltugaspancasila.txt");
		
		cout << "jawaban tugas berupa link google drive" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//untuk menghapus jawaban tugas	
	void hapustugaspancasila()
	{
		ofstream myfile;
		myfile.open("hasiltugaspancasila.txt");
		cout << "  " << endl;
		myfile.close();
	}
};







class dosen
{
public:
		string namadosen;
		string ttgdosen;
		string alamatdosen;
		string jenis_kelamindosen;
		string agamadosen;
		int kode_posdosen;
		int telepondosen;
		string e_maildosen;
		string kewarganegaraandosen;
		int niddosen;
	
	void tampilandosen()
	{
			cout << "MENU UTAMA" << endl;
			cout << "| [1] Dashaboard" << endl;
			cout << "| [2] Modul"<< endl;
			cout << "| [3] Tugas" << endl;
			cout << "| [4] Data Tugas Mahasiswa" << endl;
			cout << "| [5] Exit" << endl;
	}
	
	void dasboarddosen()
	{
			cout << "Nama Dosen               \t:" << namadosen << endl; 
			cout << "Tempat Tanggal Lahir         \t:" << ttgdosen << endl;
			cout << "Alamat                       \t:" << alamatdosen << endl;
			cout << "jenis kelamin                \t:" << jenis_kelamindosen << endl;
			cout << "Agama                        \t:" << agamadosen << endl;
			cout << "Kode Pos                     \t:" << kode_posdosen << endl;
			cout << "Nomor Telepon                \t:" << telepondosen << endl;
			cout << "E-mail                       \t:" << e_maildosen << endl;
			cout << "Kewarganegaraan              \t:" << kewarganegaraandosen << endl;
			cout << "NID                          \t:" << niddosen << endl;
	}
	
	void Modul()
	{
		cout << "[1] Buat Modul" << endl;
		cout << "[2] Tampilkan Modul" << endl;
		cout << "[3] Hapus Modul" << endl;
		cout << "[4] Edit Modul" << endl;
		cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
	}
	
	void tugasd()
	{
		cout << "[1] Tambahkan Tugas Baru" << endl;
		cout << "[2] Tampilkan Tugas " << endl;
		cout << "[3] Hapus Data Tugas" << endl;
		cout << "[4] Edit Data Tugas" << endl;
		cout << "[5] Exit" << endl;
	}
	
	void tugasmahasiswa()
	{
		cout << "Data Tugas Mahasiswa" << endl;
	}
	
	void namamahasiswa()
	{
		cout << "[1] Catur Angga Adiyaksa" << endl;
		cout << "[2]" << endl;
		cout << "[3]" << endl;
		cout << "[4]" << endl;
		cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
	}
	
	
};


class sistemdigital: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}	
};

class modulsisdig: public sistemdigital
{
public:
	int p;
	
	//membuat modul sistem digital
	void buatmodulsisdig()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("sistemdigital.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	void tampilmodulsisdig()
	{
		ifstream myfile("sistemdigital.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}
	
	//mengedit modul
	void editmodulsisdig()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("sistemdigital.txt");
		
		cout << "edit modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
		cout << "Modul Telah Diedit" << endl;
	}
	
	//menghapus modul
	void hapusmodulsisdig()
	{
		ofstream myfile;
		myfile.open("sistemdigital.txt");
		cout << "  " << endl;
		myfile.close();
		cout << "Modul Telah Dihapus" << endl;
	}
			
};

class pti: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}
};

class modulpti: public pti
{
public:
	int p;
	
	//membuat modul
	void buatmodulit()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("pengantarit.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}	
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul
		
};

class pendagama: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}	
};

class modulpendagama: public pendagama
{
public:
	int p;
	
	//membuat modul 
	void buatmodulagama()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("pendidikanagama.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul	
};


class pancas: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}	
};

class modulpancas: public pancas
{
public:
	int p;
	
	//membuat modul
	void buatmodulpancasila()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("pancasila.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul	
};


class matema: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}
};

class modulmatema: public matema
{
public:
	int p;
	
	//membuat modul 
	void buatmodulmtk()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("matematika.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul	
};

class generaleng: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}	
};

class modulgeneralengl: public generaleng
{
public:
	int p;
	
	//membuat modul
	void buatmodulenglish()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("generalenglish.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul	
};

class dasaralg: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}
};

class moduldasaralg: public dasaralg
{
public:
	int p;
	
	//membuat modul
	void buatmodulalgo()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("dasaralgoritma.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul	
};

class caracbuild: public dosen
{
public:
    int ke;
    string tugas;
    string bataspengumpulan;
    
    
    void buattugassisdig() 
	{
	    cout << "\n\tmasukan tugas : ";
	    cin.get();
	    getline(cin, tugas);
	    cout << "\n\tmasukan batas pengumpulan tugas : ";
	    cin.get();
	    getline(cin, bataspengumpulan);
	    KE++;
	
	    ofstream write;
	    write.open("tugassisdig.txt", ios::app);
	    write << "\n" << KE;
	    write << "\n" << tugas; 
	    write << "\n" << bataspengumpulan;
	    write.close();
	    write.open("tugaske.txt");
	    write << KE;
	    write.close();
	    cout << "\n\tData Tugas Telah Disimpan";
	}
	
	void print() {
	    cout << "\n\t---Daftar Tugas---";
	    cout << "\n\tTugas ke : " << ke;
	    cout << "\n\tTugas : " <<tugas;
	    cout << "\n\tBatas Pengumpulan: " << bataspengumpulan;
	}
	
	void readData() 
	{
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) 
		{
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        print();
	    }
	    read.close();
	}
	
	int searchData() {
	    int kee;
	    cout << "\n\tMasukan Tugas Yang Ingin Di Cari Tugas Ke : ";
	    cin >> kee;
	    
	    ifstream read;
	    read.open("tugassisdig.txt");
	    while (!read.eof()) {
	        read >> ke;
	        read.ignore();
	        getline(read, tugas);
	        getline(read, bataspengumpulan);
	        if (ke == kee) {
	            print();
	            return ke;
	        }
	    }
	}
	
	void deleteData() {
	    int kee = searchData();
	    cout << "\n\tMasukan Tugas Yang Ingin Dihapus (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != kee) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\t Data Tugas Telah Dihapus";
	    }
	    else {
	        cout << "\n\tData Tidak Di Hapus";
	    }
	}
	
	void updateData() {
	    int ke = searchData();
	    cout << "\n\tPilih Tugas Ke (y/n) : ";
	    char choice;
	    cin >> choice;
	    if (choice == 'y') {
	        
	        cout << "\n\nMasukan Tugas : ";
	        cin.get();
	        getline(cin, tugas);
	        cout << "\n\tMasukan Batas Pengumpulan : ";
	        getline(cin, bataspengumpulan);
	        ofstream tempFile;
	        tempFile.open("temp.txt");
	        ifstream read;
	        read.open("tugassisdig.txt");
	        while (!read.eof()) {
	            read >> ke;
	            read.ignore();
	            getline(read, tugas);
	            getline(read, bataspengumpulan);
	            if (ke != ke) {
	                tempFile << "\n" << ke;
	                tempFile << "\n" << tugas;
	                tempFile << "\n" << bataspengumpulan;
	            }
	            else {
	                tempFile << "\n"<< ke;
	                tempFile << "\n"<< tugas;
	                tempFile << "\n"<< bataspengumpulan;
	            }
	        }
	        read.close();
	        tempFile.close();
	        remove("tugassisdig.txt");
	        rename("temp.txt", "tugassisdig.txt");
	        cout << "\n\tData Tugas Telah Di Update";
	    }
	    else {
	        cout << "\n\tupdate tugas tidak di simpan ";
	    }
	}	
};

class modulcaracbuild: public caracbuild
{
public:
	int p;
	
	//membuat modul 
	void buatmodulcharacter()
	{
		string baris;
	
		ofstream myfile;
		myfile.open("character.txt");
		
		cout << "Masukan Materi Dibawah Ini Materi Akan Disimpan Sebagai Modul" << endl;
		cout << "Ketik Save untuk Menyimpan" << endl;
		while (true)
		{
			cout << "";
			getline(cin, baris);
			if (baris == "save")break;
			myfile << baris  << endl;
		}
		myfile.close();	
	}
	
	//menampilkan modul
	
	
	//mengedit modul
	
	
	//menghapus modul	
};


void gotoxy(int x, int y){
	COORD k = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
}


int main ()
{	login:
	
	mahasiswa m;
	matakuliah mt;
	sistemdig s;
	pendidikanagama p;
	dasaralgoritma da;
	pengantarit it;
	characterbuilding cb;
	generalenglish ge;
	matematika mtk;
	pancasila ps;
	
	dosen d;
	sistemdigital ds;
	modulsisdig ms;
	pancas dps;
	modulpancas mps;
	matema dmt;
	modulmatema mlt;
	generaleng dge;
	modulgeneralengl mge;
	dasaralg dda;
	moduldasaralg mda;
	caracbuild dcb;
	modulcaracbuild mcb;
	
	
	
	dosen anisa = {"anisa", "jakarta, 12 januari 1987", "perumahan harvest", "perempuan", "islam", 33234, 48329328228, "anisa43@gmail.com", "Indonesia", 2827382};
	//TEKNIK INFORMATIKA
	mahasiswa catur = {"TI202104", "TEKNIK INFORMATIKA", "CATUR ANGGA ADIYAKSA", "Reguler", "TI2021R", "CATUR ANGGA ADIYAKSA", "pati, 26 oktober 2001", "Desa Tlogoharum", "Laki laki", "Islam", "443235", "62575487584", "cr261001@gmail.com", "Indonesia", "TI202104", "Smk gama", "2020", "akuntansi", "Fakultas Komputer", "Teknik Informatika", "21-TI-R-A1", "2021", "Aktif", "1", "Reguler", "Kampus A - Jalan Raya Cileungsi KM 3, Bogor, Jawa Barat", 350000, 0, 350000, "26 juni 2021", 4500000, 2500000, 2000000, "25 juni 2021", 3500000, 0, 3500000, "10 JUNI 2022", 3500000, 0, 3500000, "10 JUNI 2023", 3500000, 0, 3500000, "10 JUNI 2024", 7350000, 2450000};
	mahasiswa arkan = {"TI202101", "TEKNIK INFORMATIKA", "ARKAN ARI MUSYAFA", "Reguler", "TI2021R", "ARKAN ARI MUSYAFA", "BOGOR, 09 AGUSTUS 1993", ""};
	mahasiswa aulia = {"TI202102", "TEKNIK INFORMATIKA", "AULIA FATURRAHMAN", "Reguler", "TI2021R", "AULIA FATURRAHMAN", "BOGOR, 06 FEBRUARI 1994"};
	mahasiswa bembi = {"TI202103", "TEKNIK INFORMATIKA", "BEMBI", "Reguler", "TI2021R" "BEMBI", "BOGOR, 28 JULI 1994"};
	mahasiswa daffa = {"TI202105", "TEKNIK INFORMATIKA", "DAFFA AULIA RAHMAN", "Reguler", "TI2021R", "DAFFA AULIA RAHMAN", "BOGOR, 28 JULI 1997"};
	mahasiswa fatony = {"TI202106", "TEKNIK INFORMATIKA", "FATONY AHMAD FAUZI", "Reguler", "TI2021R", "FATONY AHMAD FAUZI", "BOGOR, 28 MARET 1997"};
	mahasiswa hannisa = {"TI202107", "TEKNIK INFORMATIKA", "HANNISA NABILA AZZAHRA", "Reguler", "TI2021R", "HANNISA NABILA AZZAHRA", "BOGOR, 29 JULI 1997"};
    mahasiswa arul = {"TI202108", "TEKNIK INFORMATIKA", "MUHAMMAD SYAHRU ROMADHONA", "Reguler", "TI2021R", "MUHAMMAD SYAHRU ROMADHONA", "BOGOR, 19 JANUARY 1998"};
	mahasiswa putra = {"TI202109", "TEKNIK INFORMATIKA", "PUTRA MULYANA", "Reguler", "TI2021R", "PUTRA MULYANA", "BOGOR, 7 AGUSTUS 1999"};
	mahasiswa rico = {"TI202110", "TEKNIK INFORMATIKA", "RICO FIRMANSYAH", "Reguler", "TI2021R", "RICO FIRMANSYAH", "BOGOR, 29 JULY 2004"};
	mahasiswa ridwan = {"TI202111", "TEKNIK INFORMATIKA", "RIDWAN", "Reguler", "TI2021R", "RIDWAN", "BOGOR, 3 NOVEMBER 2003"};
	mahasiswa rizki = {"TI202112", "TEKNIK INFORMATIKA", "RIZKI MAULANA YULIANTO", "Reguler", "TI2021R", "RIZKI MAULANA YULIANTO", "BOGOR, 4 NOVEMBER 2000"};
	mahasiswa safrida = {"TI202113", "TEKNIK INFORMATIKA", "SAFRIDA PRASTIYANI", "Reguler", "TI2021R", "SAFRIDA PRASTIYANI", "BOGOR, 9 JULI 2007"};
	mahasiswa satria = {"TI202114", "TEKNIK INFORMATIKA", "SATRIA SANDI YUDHA", "Reguler", "TI2021R", "SATRIA SANDI YUDHA" "BOGOR, 6 OKTOBER 1998"};
	mahasiswa sultan = {"TI202115", "TEKNIK INFORMATIKA", "SULTAN HAFIZH WIDIYANTO", "Reguler", "TI2021R", "SULTAN HAFIZH WIDIYANTO" "BOGOR, 22 MARET 2000"};
	mahasiswa tachana = {"TI202112", "TEKNIK INFORMATIKA", "TACHANA SALSABILA", "Reguler", "TI2021R", "TACHANA SALSABILA", "BOGOR, 21 OKTOBER 2004"};
	mahasiswa umi = {"TI202112", "TEKNIK INFORMATIKA", "UMI FADILA", "Reguler", "TI2021R", "UMI FADILA", "BOGOR, 30 NOVEMBER 2005"};
	
	
	//SISTEM INFORMASI
	mahasiswa ageng = {"SI202101", "SISTEM INFORMASI", "AGENG SETIAWAN", "Reguler", "21-SI-R-A1"};
	mahasiswa alifa = {"SI202102", "SISTEM INFORMASI", "ALIFA FIRDHA AZZAHRA", "Reguler", "21-SI-R-A1"};
	mahasiswa danisa = {"SI202103", "SISTEM INFORMASI", "DANISA RENITA PUTRI ANGGRAINI", "Reguler", "21-SI-R-A1"};
	mahasiswa dona = {"SI202104", "SISTEM INFORMASI", "DONA IRMA NABILA", "Reguler", "21-SI-R-A1"};
	mahasiswa febi = {"SI202105", "SISTEM INFORMASI", "FEBI SALSABILA", "Reguler", "21-SI-R-A1"};
	mahasiswa nabilla = {"SI202106", "SISTEM INFORMASI", "NABILLA AULIA HARTADI", "Reguler", "21-SI-R-A1"};
	mahasiswa roni = {"SI202107", "SISTEM INFORMASI", "RONI RAMDANI", "Reguler", "21-SI-R-A1"};
	mahasiswa talitha = {"SI202108", "SISTEM INFORMASI", "TALITHA ALYAA'AMIRA'", "Reguler", "21-SI-R-A1"};
	mahasiswa chikal = {"SI202109", "SISTEM INFORMASI", "CHIKAL ANDRINE FIRMANSYAH", "Reguler", "21-SI-R-A1"};
	mahasiswa christy = {"SI202110", "SISTEM INFORMASI", "CHRISTY DANY TALLANE", "Reguler", "21-SI-R-A1"};
	mahasiswa ipung = {"SI202111", "SISTEM INFORMASI", "IPUNG KHASAN EFENDI", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa akbar = {"SI202112", "SISTEM INFORMASI", "MUHAMMAD AKBAR FIRDAUS", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa farizi = {"SI202113", "SISTEM INFORMASI", "MUHAMAD AL FARIZI", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa kahfi = {"SI202114", "SISTEM INFORMASI", "MUHAMMAD KAHFI ANDIKA", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa niken = {"SI202115", "SISTEM INFORMASI", "NIKEN PALUPY LUMINTOWATI", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa prima = {"SI202116", "SISTEM INFORMASI", "PRIMA SATRIO HASAN", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa radheya = {"SI202117", "SISTEM INFORMASI", "RADHEYA DWIFA YULIANTO", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa saeful = {"SI202118", "SISTEM INFORMASI", "SAEFUL YUNUS", "Non Reguler", "21-SI-NR-A1"};
	mahasiswa sofyan = {"SI202119", "SISTEM INFORMASI", "SOFYAN DWI HARTANTO", "Non Reguler", "21-SI-NR-A1"};
	
	
	
	
	string username;
	string password = "";
	char ch;
			
		system("cls");
		cout << "|---------------------------------------|" << endl;
		cout << "|                                       |" << endl;
		cout << "|                 IDB                   |" << endl;
		cout << "|              INDONESIA                |" << endl;
		cout << "|                                       |" << endl;
		cout << "|---------------------------------------|" << endl;
		cout << "|                                       |" << endl;
		cout << "|     Masukan Username\t:               |" << endl;
		cout << "|     Masukan Password\t:               |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|                                       |" << endl;
		cout << "|---------------------------------------|" << endl;
		gotoxy(25,7);cin >> username;
		gotoxy(25,8);ch = _getch();
		while(ch !=13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
	
		int pilihan;
		
		
		
		if(username == "TI202104")
		{
			if(password == "111114")
			{	
				do
				{
			
					menuutama:
					system("cls");
					cout << "Informasi Account Mahasiswa" << endl;
					catur.biodata();
					cout << endl << endl << endl;
					catur.tampilanmaha();
					cout << "Pilih Menu\t:";
					cin >> pilihan;
					switch(pilihan)
					{
						case 1:
							
							system("cls");
							
							dasboard:
							cout << "Informasi Account Mahasiswa" << endl;
							catur.biodata();
							cout << endl << endl << endl;
							cout << "MENU DASBOARD" << endl;
							
							int pilih;
								
							cout << "[1] Biodata" << endl;
							cout << "[2] Data Akademik" << endl;
							cout << "[3] Asal Sekolah" << endl;
							cout << "[4] Kembali Ke Menu Sebelumnya" << endl;
							cout << "Pilihan:" ;
							cin >> pilih;
							
							switch(pilih)
							{
								
								case 1:
									{
										tampilbio:
										string kembali;
										catur.tampilbio();
										cout << "\n\n\n";
										cout << "Kembali Ke menu Sebelumnya(Y/T)\t:";
										cin >> kembali;
										
										if (kembali == "Y")
										{
											system("cls");
											goto dasboard;
										}
										else if(kembali == "y")
										{
											system("cls");
											goto dasboard;
										}
										
										else
											exit(0);
									}
									break;
								case 2:
									{	string kembalii;
										catur.akademik();
										cout << "\n\n\n\n";
										cout << "Kembali Ke menu Sebelumnya(Y/T)\t:";
										cin >> kembalii;
										
										if (kembalii == "Y")
										{
											system("cls");
											goto dasboard;
										}
										else if(kembalii == "y")
										{
											system("cls");
											goto dasboard;
										}
										else
											exit(0);
									}
									break;
								
								case 3:
									{	
										string kembaliii;
										catur.asalsekolah();
										cout << "\n\n\n\n";
										cout << "Kembali Ke menu Sebelumnya(Y/T)\t:";
										cin >> kembaliii;
										
										if (kembaliii == "Y")
										{
											system("cls");
											goto dasboard;
										}
										else if(kembaliii == "y")
										{
											system("cls");
											goto dasboard;
										}
										else
											exit(0);
									}
										break;
									
								case 4:
									system("cls");
									goto menuutama;
									break;
							}
							
							break;
						case 2:
							matkul:
								
								system("cls");
								cout << "Informasi Account Mahasiswa" << endl;
								catur.biodata();
								cout << endl << endl << endl;
								
								mt.matkulti();
								cout << endl << endl;
								int pilihmata;
								cout << "Pilih Menu\t:";
								cin >> pilihmata;
								
								switch(pilihmata)
								{
									case 1:
										{
											sisdig:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_sisdig;
											cout << "Mata Kuliah Sistem Digital" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_sisdig;
											if(pilih_sisdig == 1)
											{
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
												string kembamat;
												cout << "Modul Sitem Digital" << endl;
												s.bacasisdig();
												cout << endl << endl << endl<< "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembamat;
												if (kembamat == "Y")
												{
													goto sisdig;
												}
												else
													exit(0);
											}
											else if(pilih_sisdig == 2)
											{
												goto matkul;
											}
											
										}
										break;
									case 2:
										{
											pendidikan:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_agama;
											cout << "Mata Kuliah Pendidikan Agama" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_agama;
											if(pilih_agama == 1)
											{
												system("cls");
												string kembalipend;
												cout << "Modul Pendidkan Agama" << endl;
												p.bacapendagama();
												cout << endl << endl << endl << "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembalipend;
												if (kembalipend == "Y")
												{
													goto pendidikan;
												}
												else
													exit(0);
											}
											else if(pilih_agama == 2)
											{
												goto matkul;
											}
										}
										break;
									case 3:
										{
											
											algoritma:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_algo;
											cout << "Mata Kuliah Dasar Algoritma" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_algo;
											if(pilih_algo == 1)
											{
												system("cls");
												string kembali_algo;
												cout << "Modul Dasar Algoritma" << endl;
												da.bacaalgoritma();
												cout << endl << endl << endl<< "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembali_algo;
												if (kembali_algo == "Y")
												{
													goto algoritma;
												}
												else
													exit(0);
											}
											else if(pilih_algo == 2)
											{
												goto matkul;
											}
										}
										break;
									case 4:
										{
											pengantar:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_it;
											cout << "Mata Kuliah Pengantar IT" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_it;
											if(pilih_it == 1)
											{
												system("cls");
												string kembali_it;
												cout << "Modul Sitem Digital" << endl;
												it.bacapengantarit();
												cout << endl << endl << endl << "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembali_it;
												if (kembali_it == "Y")
												{
													goto pengantar;
												}
												else
													exit(0);
											}
											else if(pilih_it == 2)
											{
												goto matkul;
											}
										}
										break;
									case 5:
										{
											caracter:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_building;
											cout << "Mata Kuliah Character Building" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_building;
											if(pilih_building == 1)
											{
												system("cls");
												string kembali_caracter;
												cout << "Modul Character Building" << endl;
												cb.bacacharacterbulding();
												cout << endl << endl << endl << "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembali_caracter;
												if (kembali_caracter == "Y")
												{
													goto caracter;
												}
												else
													exit(0);
											}
											else if(pilih_building == 2)
											{
												goto matkul;
											}
										}
										break;
									case 6:
										{
											english:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_general;
											cout << "Mata Kuliah General English" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_general;
											if(pilih_general == 1)
											{
												system("cls");
												string kembali_english;
												cout << "Modul Sitem Digital" << endl;
												ge.bacaenglish();
												cout << endl << endl << endl << "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembali_english;
												if (kembali_english == "Y")
												{
													goto english;
												}
												else
													exit(0);
											}
											else if(pilih_general == 2)
											{
												goto matkul;
											}
										}
										break;
									case 7:
										{
											matematika:
												system("cls");
												cout << "Informasi Account Mahasiswa" << endl;
												catur.biodata();
												cout << endl << endl << endl;
											int pilih_mtk;
											cout << "Mata Kuliah Matematika" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_mtk;
											if(pilih_mtk == 1)
											{
												system("cls");
												string kembali_mtk;
												cout << endl << endl << endl << "Modul Matematika" << endl;
												mtk.bacamtk();
												cout << "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembali_mtk;
												if (kembali_mtk == "Y")
												{
													goto matematika;
												}
												else
													exit(0);
											}
											else if(pilih_mtk == 2)
											{
												goto matkul;
											}
										}
										break;
									case 8:
										{
										pancasila:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl;
											int pilih_pancasila;
											cout << "Mata Kuliah Pancasila" << endl << endl;
											cout << "[1] buka modul" << endl;
											cout << "[2] Kembali ke menu Sebelumnya" << endl << endl;
											cout << "masukan pilihan\t:";
											cin >> pilih_pancasila;
											if(pilih_pancasila == 1)
											{
												system("cls");
												string kembali_pancasila;
												cout << "Modul Pancasila" << endl;
												ps.bacapancasila();
												cout << endl << endl << endl << "kembali ke menu sebelumnyaY/T\t:";
												cin >> kembali_pancasila;
												if (kembali_pancasila == "Y")
												{
													goto pancasila;
												}
												else
													exit(0);
											}
											else if(pilih_pancasila == 2)
											{
												goto matkul;
											}
										break;
										}
									case 9:
										goto menuutama;
								}
								
							break;
							
						case 3:
							tugas:
								system("cls");
								cout << "Informasi Account Mahasiswa" << endl;
								catur.biodata();
								cout << endl << endl << endl << endl;
								mt.tugasti();
								int pilihtugas;
								cout << "Pilih Menu \t:";
								cin >> pilihtugas;
								
								switch(pilihtugas)
								{
									case 1:
										{
											menutugas:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas Sistem Digital" << endl << endl;
											cout << "Daftar Tugas" << endl;
											s.daftartugassisdig();
											cout << endl << endl << endl;
											s.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														s.kumpultugassisdig();
														cout << "Kembali ke menu sebelumnya Y/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto menutugas;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														s.tampiltugassisdig();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto menutugas;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														s.editjawabansisdig();
														cout << "Kembali ke menu sebelumnya Y/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto menutugas;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														s.hapustugassisdig();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto menutugas;
														}
														else
															exit(0);
													}
													break;
												case 5:
													{
														goto tugas;
													}
											}	
											
											
										}
										break;
									case 2:
										{
											tugasagama:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas Pendidikan Agama" << endl << endl << endl;
											cout << "Daftar Tugas" << endl;
											p.daftartugasagama();
											cout << endl << endl << endl;
											p.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														p.kumpultugasagama();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasagama;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														p.tampiltugasagama();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasagama;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														p.editjawabanagama();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasagama;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														p.hapustugasagama();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasagama;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}	
											
										}
										break;
									case 3:
										{
											tugasalgoritma:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											
											cout << "Menu Tugas Dasar Algoritma" << endl << endl << endl << endl;
											cout << "Daftar Tugas" << endl;
											da.daftartugasalgo();
											cout << endl << endl << endl;
											da.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														da.kumpultugasalgoritma();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasalgoritma;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														da.tampiltugasalgoritma();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasalgoritma;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														da.editjawabanalgoritma();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasalgoritma;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														da.hapustugasalgoritma();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasalgoritma;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}	
										}
										break;
									case 4:
										{
											tugasit:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas Pengantar IT " << endl << endl << endl;
											cout << "Daftar Tugas" << endl;
											it.daftartugasit();
											cout << endl << endl << endl;
											it.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														it.kumpultugasit();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasit;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														it.tampiltugasit();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasit;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														it.editjawabanit();
														cout << "Kembali ke menu sebelumnya Y/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasit;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														it.hapustugasit();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasit;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}
										}
										break;
									case 5:
										{
											tugascaracter:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas Characer Building" << endl << endl << endl;
											cout << "Daftar Tugas" << endl;
											cb.daftartugascaracter();
											cout << endl << endl << endl;
											cb.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														cb.kumpultugascaracter();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugascaracter;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														cb.tampiltugascaracter();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugascaracter;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														cb.editjawabancaracter();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugascaracter;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														cb.hapustugascaracter();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugascaracter;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}
										}
										break;
									case 6:
										{
											tugasenglish:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas General English" << endl << endl << endl;
											cout << "Daftar Tugas" << endl;
											ge.daftartugasenglish();
											cout << endl << endl << endl;
											ge.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														ge.kumpultugasenglish();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasenglish;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														ge.tampiltugasenglish();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasenglish;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														ge.editjawabanenglish();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasenglish;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														ge.hapustugasenglish();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasenglish;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}
										}
										break;
									case 7:
										{
											tugasmtk:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas Matematika" << endl << endl;
											cout << "Daftar Tugas" << endl;
											mtk.daftartugasmtk();
											cout << endl << endl << endl;
											mtk.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														mtk.kumpultugasmtk();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasmtk;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														mtk.tampiltugasmtk();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasmtk;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														mtk.editjawabanmtk();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasmtk;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														mtk.hapustugasmtk();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugasmtk;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}
										}
										break;
									case 8:
										{
											tugaspancasila:
											system("cls");
											cout << "Informasi Account Mahasiswa" << endl;
											catur.biodata();
											cout << endl << endl << endl << endl;
											int pilih_tugas;
											string kembali_tugas;
											int balik_tugas;
											cout << "Menu Tugas Pancasila" << endl << endl << endl;
											cout << "Daftar Tugas" << endl;
											ps.daftartugaspancasila();
											cout << endl << endl << endl;
											ps.lihattugas();
											cout << "Masukan Pilihan \t:";
											cin >> pilih_tugas;
											
											switch (pilih_tugas)
											{
												case 1:
													{
														ps.kumpultugaspancasila();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugaspancasila;
														}
														else
															exit(0);
													}
													break;
													
												case 2:
													{
														ps.tampiltugaspancasila();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugaspancasila;
														}
														else
															exit(0);
													}
													break;
												case 3:
													{
														ps.editjawabanpancasila();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugaspancasila;
														}
														else
															exit(0);
													}
													break;
												case 4:
													{
														ps.hapustugaspancasila();
														cout << "Kembali ke menu sebelumnyaY/T\t:";
														cin >> kembali_tugas;
														if (kembali_tugas == "Y")
														{
															goto tugaspancasila;
														}
														else
															exit(0);
													}
													break;
													
												case 5:
													{
														goto tugas;
													}
											}
										}
										break;
									case 9:
										goto menuutama;
								}
							break;
						
						
						
						case 4:
							biaya:
								system("cls");
							int pilihbiaya;
							cout << "Informasi Account Mahasiswa" << endl;
							catur.biodata();
							cout << endl << endl << endl;
							cout << "MENU BIAYA" << endl << endl << endl;
							cout << "[1] Biaya Daftar Dan Registrasi" << endl;
							cout << "[2] Biaya Pendidikan" << endl;
							cout << "[3] Kembali ke menu sebelumnya\t:" << endl << endl;
							cout << "Masukan Pilihan\t:";
							cin >> pilihbiaya;
							
							switch (pilihbiaya)
							{
								case 1:
									{
										system("cls");
										cout << "Informasi Account Mahasiswa" << endl;
										catur.biodata();
										cout << endl << endl << endl;
										string keembali;
										cout << "Biaya Daftar Dan Regristrasi" << endl;
										catur.biayaregris();
										cout << "Rincian Pembayaran Regristrasi Tahun ke 1" << endl;
										catur.regristrasisatu();
										cout << "Rincian Pembayaran Regristrasi Tahun ke 2" << endl;
										catur.regristrasidua();
										cout << "Rincian Pembayaran Regristrasi Tahun ke 3" << endl;
										catur.regristrasitiga();
										cout << "Rincian Pembayaran Regristrasi Tahun ke 4" << endl;
										catur.regristrasiempat();
										
										cout << "kembali ke menu sebelumnyaY/T\t:";
										cin >> keembali;
										
										if (keembali == "Y")
										{
											goto biaya;
										}
										else
											exit(0);
									}
									break;
									
								case 2:
									{
										system("cls");
										cout << "Informasi Account Mahasiswa" << endl;
										catur.biodata();
										cout << endl << endl << endl;
										string kembali_biaya;
										cout << "Biaya Pendidikan" << endl << endl << endl;
										cout << "Rincian Pembayaran Biaya Pendidikan semester 1" << endl;
										catur.biayasemestersatu();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 2" << endl;
										catur.biayasemesterdua();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 3" << endl;
										catur.biayasemestertiga();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 4" << endl;
										catur.biayasemesterempat();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 5" << endl;
										catur.biayasemesterlima();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 6" << endl;
										catur.biayasemesterenam();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 7" << endl;
										catur.biayasemestertujuh();
										cout << "Rincian Pembayaran Biaya Pendidikan semester 8" << endl;
										catur.biayasemesterdelapan();
										cout << endl << endl << endl;
										cout << "kembali ke menu sebelumnyaY/T\t:";
										cin >> kembali_biaya;
										
										if(kembali_biaya == "Y")
										{
											goto biaya;
										}
										else
											exit(0);
									}
									break;
		
								case 3:
									goto menuutama;
									break;
							}
							
							break;
						case 5:
							cout << "EXIT" << endl;
							break;
					}
				}while(pilihan != 5);	
			}
			else
			{
				if (password != "111114")
				{
					string loglagi;
					gotoxy(4,14);cout << "Paswword Salah!!!!!!" << endl;
					gotoxy(4,15);cout << "Silahkan Masukan Password Yg benar" << endl;
				
					string lagi;
					gotoxy(4,16);cout << "Log In Kembali Y/T\t\t:";
					cin >> loglagi;
				
					if (loglagi == "Y")
					{
						goto login;
					}
					else if (loglagi == "y")
					{
						goto login;
					}
				}
			}
		}
		else if(username == "D001")
		{
			if(password == "123")
			{
				utamadosen:
				system("cls");
				d.tampilandosen();
				
				int pilmenud;
				string kemmenuut;
				cout << "Masukan Pilihan\t\t:";
				cin >> pilmenud;
				
				switch(pilmenud)
				{
					case 1:
						{
							cout << "Menu Dasboard" << endl;
							anisa.dasboarddosen();
							cout << "Kembali ke menu sebelumnyaY/T\t:";
							cin >> kemmenuut;
							
							if (kemmenuut == "Y")
							{
								goto utamadosen;
							}
							else if (kemmenuut == "y")
							{
								goto utamadosen;
							}
							else
								exit(0);
						}
						break;
					case 2:
						menumodul:
						system("cls");
						int pilihm;
						cout << "Modul" << endl;
						d.Modul();
						cout << "Masukan Pilihan\t:";
						cin >> pilihm;
						switch(pilihm)
						{
							case 1:
								{
									string kembalimo;
									cout << "Buat Modul Sistem Digital";
									ms.buatmodulsisdig();
									cout << "Kembali ke menu sebelumnyaY/T\t:";
									cin >> kemmenuut;
									
									if (kemmenuut == "Y")
									{
										goto menumodul;
									}
									else if (kemmenuut == "y")
									{
										goto menumodul;
									}
									else
										exit(0);
								}
								break;
							case 2:
								{
									cout << " Modul Sistem Digital" << endl;
									ms.tampilmodulsisdig();
									cout << "Kembali ke menu sebelumnyaY/T\t:";
									cin >> kemmenuut;
									
									if (kemmenuut == "Y")
									{
										goto menumodul;
									}
									else if (kemmenuut == "y")
									{
										goto menumodul;
									}
									else
										exit(0);
								}
								break;
							case 3:
								{
									ms.hapusmodulsisdig();
									cout << "Kembali ke menu sebelumnyaY/T\t:";
									cin >> kemmenuut;
									
									if (kemmenuut == "Y")
									{
										goto menumodul;
									}
									else if (kemmenuut == "y")
									{
										goto menumodul;
									}
									else
										exit(0);
								}
								break;
							case 4:
								{
									ms.editmodulsisdig();
									cout << "Kembali ke menu sebelumnyaY/T\t:";
									cin >> kemmenuut;
									
									if (kemmenuut == "Y")
									{
										goto menumodul;
									}
									else if (kemmenuut == "y")
									{
										goto menumodul;
									}
									else
										exit(0);
								}
								break;
							case 5:
								goto utamadosen;
								break;
						}
						break;
					case 3:
						{
							menutsisdig:
							system("cls");
							int piliht;
							cout << "Menu Tugas" << endl;
							
						    ifstream read;
						    read.open("tugaske.txt");
						    if (!read.fail()) {
						        read >> KE;
						    }
						    else {
						        KE = 0;
						    }
						    read.close();
						
						        cout << "\n\t1. Buat Tugas";
						        cout << "\n\t2. Lihat Data Tugas";
						        cout << "\n\t3. Cari Tugas";
						        cout << "\n\t4. Hapus Tugas";
						        cout << "\n\t5. Edit Tugas student data";
						        cout << "\n\t6. Kembali ke menu sebelumnya";
						
						        int choice;
						        string pilihtsisdig;
						        cout << "\n\tEnter choice : ";
						        cin >> choice;
						        switch (choice)
								{
							        case 1:
							            ds.buattugassisdig();
							            cout << endl << endl << endl;
							            cout << "Kembali ke menu sebelumnyaY/T\t:";
										cin >> pilihtsisdig;
										
										if (pilihtsisdig == "Y")
										{
											goto menutsisdig;
										}
										else if (pilihtsisdig == "y")
										{
											goto menutsisdig;
										}
										else
											exit(0);
							            break;
							        case 2:
							            ds.readData();
							            cout << endl << endl << endl;
							            cout << "Kembali ke menu sebelumnyaY/T\t:";
										cin >> pilihtsisdig;
										
										if (pilihtsisdig == "Y")
										{
											goto menutsisdig;
										}
										else if (pilihtsisdig == "y")
										{
											goto menutsisdig;
										}
										else
											exit(0);
							            break;
							        case 3:
							            ds.searchData();
							            cout << endl << endl << endl;
							            cout << "Kembali ke menu sebelumnyaY/T\t:";
										cin >> pilihtsisdig;
										
										if (pilihtsisdig == "Y")
										{
											goto menutsisdig;
										}
										else if (pilihtsisdig == "y")
										{
											goto menutsisdig;
										}
										else
											exit(0);
							            break;
							        case 4:
							            ds.deleteData();
							            cout << endl << endl << endl;
							            cout << "Kembali ke menu sebelumnyaY/T\t:";
										cin >> pilihtsisdig;
										
										if (pilihtsisdig == "Y")
										{
											goto menutsisdig;
										}
										else if (pilihtsisdig == "y")
										{
											goto menutsisdig;
										}
										else
											exit(0);
							            break;
							        case 5:
							        	ds.updateData();
							        	cout << endl << endl << endl;
							        	cout << "Kembali ke menu sebelumnyaY/T\t:";
										cin >> pilihtsisdig;
										
										if (pilihtsisdig == "Y")
										{
											goto menutsisdig;
										}
										else if (pilihtsisdig == "y")
										{
											goto menutsisdig;
										}
										else
											exit(0);
							        	break;
							        case 6:
							        	goto utamadosen;
							        	break;
						        }
						    
					    }
						break;
					case 4:
						
						{	
							menudtmas:
							system("cls");
							int pilnama;
							string pilihdatatu;
							cout << "Data Tugas Mahasiswa" << endl;
							d.tugasmahasiswa();
							d.namamahasiswa();
							cout << "Masukan Pilihan\t:";
							cin >> pilnama;
							switch(pilnama)
							{
								case 1:
									{
									
										cout << "Data Tugas Mahasiswa" << endl;
										
										cout << "\n\n\nKembali ke menu sebelumnyaY/T\t:";
										cin >> pilihdatatu;
										
										if (pilihdatatu == "Y")
										{
											goto menudtmas;
										}
										else if (pilihdatatu == "y")
										{
											goto menudtmas;
										}
										else
											exit(0);
									}	
									break;
								case 2:
									break;
								case 3:
									break;
								case 4:
									break;
								case 5:
									goto utamadosen;
									break;
							}
						}
						break;
					case 5:
						cout << "Exit" << endl;
						exit(0);
						break;
				}
			}
			else
			{
				if (password != "123")
				{
					string loglagi;
					gotoxy(4,14);cout << "Paswword Salah!!!!!!" << endl;
					gotoxy(4,15);cout << "Silahkan Masukan Password Yg benar" << endl;
				
					string lagi;
					gotoxy(4,16);cout << "Log In Kembali Y/T\t\t:";
					cin >> loglagi;
				
					if (loglagi == "Y")
					{
						goto login;
					}
					else if (loglagi == "y")
					{
						goto login;
					}
					else
					{
						exit(0);
					}
				}
			}
		}
		else
		{
			if (username != "TI202104", "D001")
			{
				gotoxy(4,10);cout << "Username Salah!!!!!!" << endl;
				gotoxy(4,11);cout << "Silahkan Masukan Username Yg benar" << endl;
			
				string lagi;
				gotoxy(4,12);cout << "Log In Kembali Y/T\t\t:";
				cin >> lagi;
			
				if (lagi == "Y")
				{
					goto login;
				}
				else if (lagi == "y")
				{
					goto login;
				}
				else
				{
					exit(0);
				}
			}
		}
		
	
	return 0;
}
