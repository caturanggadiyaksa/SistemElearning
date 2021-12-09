#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>  //Librari Untuk Menyimpan File
#include <fstream>
#include <conio.h>
using namespace std;

/*struct biodata{
	int nim;
	string nama;
	string ttg;
	string alamat;
	char gender;
	int kodepos;
	string agama;
	int telepon;
	string email;
	int nik;
	string namaayah;
	string namaibu;
	string namawali;
	int hportu;
	string kewarga;
};
biodata b;*/

class mahasiswa{

	public:
		string nim;
		string prodi;
		string nama;
		string program;
		string kelas;
		void biodata()
		{
			cout << "NIM                   \t:" << nim << endl;
			cout << "Prodi                 \t:" << prodi << endl;
			cout << "Kelas                 \t:" << kelas << endl;
			cout << "Nama                  \t:" << nama << endl;
			cout << "Jenis Program         \t:" << program << endl;
			
		}
};

void gotoxy(int x, int y){
	COORD k = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
}

void menuutama()
{
	
	cout << "MENU UTAMA" << endl;
	cout << "| [1] Dashaboard" << endl;
	cout << "| [2] Mata Kuliah" << endl;
	cout << "| [3] Tugas" << endl;
	cout << "| [4] Materi Tambahan" << endl;
	cout << "| [5] Kuis" << endl;
	cout << "| [6] Absen " << endl;
	cout << "| [7] Menu Biaya" << endl;
	cout << "| [8] Menu Ujian" << endl;
	cout << "| [9] Data Nilai" << endl;
	cout << "| [10] Evaluasi Umpan Balik" << endl;
	cout << "| [11] Exit" << endl; 
}

/*void pilihmenu()
{	
	int pilihan;
	cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					cout << "Menu Dashboard" << endl;
					break;
				case 2:
					cout << "Menu Mata Kuliah" << endl;
					break;
			}
}*/


void dashboard()
{
	int pilih;
	
	cout << "[1] Biodata" << endl;
	cout << "[2] Data Akademik" << endl;
	cout << "[3] Asal Sekolah" << endl;
	cout << "[4] Informasi" << endl;
	cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
	cout << "Pilihan:" ;
	cin >> pilih;
	
	switch(pilih)
	{
		case 1:
			cout << "MENU BIODATA" << endl;
			cout <<"[1] created Biodata" << endl;
			cout << "[2] Read Biodata" << endl;
			cout << "[3] Upload Biodata" << endl;
			cout << "[4] Delete Biodata" << endl;
			cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
			break;
		
		case 2:
			cout << "MENU DATA AKADEMIK" << endl;
			cout <<"[1] created data akademik" << endl;
			cout << "[2] Read data akademik" << endl;
			cout << "[3] Upload data akademik" << endl;
			cout << "[4] Delete data akademik" << endl;
			cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
			break;
		
		case 3:
			cout << "MENU ASAL SEKOLAH" <<endl;
			cout <<"[1] created asal sekolah" << endl;
			cout << "[2] Read asal sekolah" << endl;
			cout << "[3] Upload asal sekolah" << endl;
			cout << "[4] Delete asal sekolah" << endl;
			cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
			break;
			
		case 4:
			cout << "MENU INFORMASI" << endl;
			cout <<"[1] created informasi" << endl;
			cout << "[2] Read informasi" << endl;
			cout << "[3] Upload informasi" << endl;
			cout << "[4] Delete informasi" << endl;
			cout << "[5] Kembali Ke Menu Sebelumnya" << endl;
			break;
		case 5:
			menuutama();
			break;
	}
		
}

void matakuliah()
{
	cout << "Character Building" << endl;
}

int main(){
	 	
	//TEKNIK INFORMATIKA
	mahasiswa catur = {"TI202104", "TEKNIK INFORMATIKA", "CATUR ANGGA ADIYAKSA", "Reguler", "21-TI-R-A1"};
	mahasiswa arkan = {"TI202101", "TEKNIK INFORMATIKA", "ARKAN ARI MUSYAFA", "Reguler", "21-TI-R-A1"};
	mahasiswa aulia = {"TI202102", "TEKNIK INFORMATIKA", "AULIA FATURRAHMAN", "Reguler", "21-TI-R-A1"};
	mahasiswa bembi = {"TI202103", "TEKNIK INFORMATIKA", "BEMBI", "Reguler", "21-TI-R-A1"};
	mahasiswa daffa = {"TI202105", "TEKNIK INFORMATIKA", "DAFFA AULIA RAHMAN", "Reguler", "21-TI-R-A1"};
	mahasiswa fatony = {"TI202106", "TEKNIK INFORMATIKA", "FATONY AHMAD FAUZI", "Reguler", "21-TI-R-A1"};
	mahasiswa hannisa = {"TI202107", "TEKNIK INFORMATIKA", "HANNISA NABILA AZZAHRA", "Reguler", "21-TI-R-A1"};
    mahasiswa arul = {"TI202108", "TEKNIK INFORMATIKA", "MUHAMMAD SYAHRU ROMADHONA", "Reguler", "21-TI-R-A1"};
	mahasiswa putra = {"TI202109", "TEKNIK INFORMATIKA", "PUTRA MULYANA", "Reguler", "21-TI-R-A1"};
	mahasiswa rico = {"TI202110", "TEKNIK INFORMATIKA", "RICO FIRMANSYAH", "Reguler", "21-TI-R-A1"};
	mahasiswa ridwan = {"TI202111", "TEKNIK INFORMATIKA", "RIDWAN", "Reguler", "21-TI-R-A1"};
	mahasiswa rizki = {"TI202112", "TEKNIK INFORMATIKA", "RIZKI MAULANA YULIANTO", "Reguler", "21-TI-R-A1"};
	mahasiswa safrida = {"TI202113", "TEKNIK INFORMATIKA", "SAFRIDA PRASTIYANI", "Reguler", "21-TI-R-A1"};
	mahasiswa satria = {"TI202114", "TEKNIK INFORMATIKA", "SATRIA SANDI YUDHA", "Reguler", "21-TI-R-A1"};
	mahasiswa sultan = {"TI202115", "TEKNIK INFORMATIKA", "SULTAN HAFIZH WIDIYANTO", "Reguler", "21-TI-R-A1"};
	mahasiswa tachana = {"TI202112", "TEKNIK INFORMATIKA", "TACHANA SALSABILA", "Reguler", "21-TI-R-A1"};
	mahasiswa umi = {"TI202112", "TEKNIK INFORMATIKA", "UMI FADILA", "Reguler", "21-TI-R-A1"};
	
	
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
	mahasiswa ipung = {"SI202111", "SISTEM INFORMASI", "IPUNG KHASAN EFENDI", "Reguler", "21-SI-NR-A1"};
	mahasiswa akbar = {"SI202112", "SISTEM INFORMASI", "MUHAMMAD AKBAR FIRDAUS", "Reguler", "21-SI-NR-A1"};
	mahasiswa farizi = {"SI202113", "SISTEM INFORMASI", "MUHAMAD AL FARIZI", "Reguler", "21-SI-NR-A1"};
	mahasiswa kahfi = {"SI202114", "SISTEM INFORMASI", "MUHAMMAD KAHFI ANDIKA", "Reguler", "21-SI-NR-A1"};
	mahasiswa niken = {"SI202115", "SISTEM INFORMASI", "NIKEN PALUPY LUMINTOWATI", "Reguler", "21-SI-NR-A1"};
	mahasiswa prima = {"SI202116", "SISTEM INFORMASI", "PRIMA SATRIO HASAN", "Reguler", "21-SI-NR-A1"};
	mahasiswa radheya = {"SI202117", "SISTEM INFORMASI", "RADHEYA DWIFA YULIANTO", "Reguler", "21-SI-NR-A1"};
	mahasiswa saeful = {"SI202118", "SISTEM INFORMASI", "SAEFUL YUNUS", "Reguler", "21-SI-NR-A1"};
	mahasiswa sofyan = {"SI202119", "SISTEM INFORMASI", "SOFYAN DWI HARTANTO", "Reguler", "21-SI-NR-A1"};
	
	
  
  	
  	string username, password;
	
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
	cout << "|---------------------------------------|" << endl;
	gotoxy(25,7);cin >> username;
	gotoxy(25,8);cin >> password;

	int pilihan;
	
	if (username == "TI202101")
	{
		if(password == "111111")
		{	
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			arkan.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					system("cls");
					aulia.biodata();
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
			
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202102")
	{
		if(password == "111112")
		{	
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			aulia.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202103")
	{
		if(password == "111113")
		{	
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			bembi.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202104")
	{
		if(password == "111114")
		{	
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			catur.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202105")
	{
		if(password == "111115")
		{	
			system("cls");
			cout << "Informasi Account" << endl;
			daffa.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202106")
	{
		if(password == "111116")
		{	
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			fatony.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202107")
	{
		if(password == "111117")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			hannisa.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202108")
	{
		if(password == "111118")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			arul.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202109")
	{
		if(password == "111119")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			putra.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202110")
	{
		if(password == "111110")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			rico.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202111")
	{
		if(password == "111100")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			ridwan.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202112")
	{
		if(password == "111122")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			rizki.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202113")
	{
		if(password == "111133")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			safrida.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202114")
	{
		if(password == "111144")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			satria.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202115")
	{
		if(password == "111155")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			sultan.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202116")
	{
		if(password == "111166")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			tachana.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "TI202117")
	{
		if(password == "111177")
		{	
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			umi.biodata();
			cout << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!!";
	}
	else if(username == "SI202101")
	{
		if(password == "000111")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			ageng.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202102")
	{
		if(password == "000112")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			alifa.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202103")
	{
		if(password == "000113")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			danisa.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202104")
	{
		if(password == "000114")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			dona.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202105")
	{
		if(password == "000115")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			febi.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202106")
	{
		if(password == "000116")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			nabilla.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202107")
	{
		if(password == "000117")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			roni.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202108")
	{
		if(password == "000118")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			talitha.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202109")
	{
		if(password == "000119")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			chikal.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202110")
	{
		if(password == "000110")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			christy.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202111")
	{
		if(password == "0001121")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			ipung.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202112")
	{
		if(password == "000122")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			akbar.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202113")
	{
		if(password == "000123")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			farizi.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202114")
	{
		if(password == "000124")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			kahfi.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202115")
	{
		if(password == "000125")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			niken.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202116")
	{
		if(password == "000126")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			prima.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202117")
	{
		if(password == "000127")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			radheya.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
					
					
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
					
				case 3:
					cout << "MENU TUGAS" << endl;
					break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
				
				case 5:
					cout << "MENU KUIS" << endl;
					break;
					
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
					
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
				
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
					
				case 9:
					cout << "DATA NILAI" << endl;
					break;
					
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
					
				case 11:
					cout << "EXIT" << endl;
					break;
			}
		}
		else
			cout << "Password Salah!!!" << endl;
	}
	else if(username == "SI202118")
	{
		if(password == "000128")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			saeful.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
					case 1:
						system("cls");
						cout << "MENU DASBOARD" << endl;
						dashboard();
					
					
						break;
					case 2:
						cout << "MENU MATA KULIAH" << endl;
						break;
					
					case 3:
						cout << "MENU TUGAS" << endl;
						break;
					case 4:
						cout << "MENU MATERI TAMBAHAN" << endl;
						break;
				
					case 5:
						cout << "MENU KUIS" << endl;
						break;
					
					case 6:
						cout << "MENU ABSEN" << endl;
						break;
						
					case 7:
						cout << "MENU BIAYA" << endl;
						break;
					
					case 8:
						cout << "MENU UJIAN" << endl;
						break;
						
					case 9:
						cout << "DATA NILAI" << endl;
						break;
						
					case 10:
						cout << "MENU EVALUASI UMPAN BALIK" << endl;
						break;
						
					case 11:
						cout << "EXIT" << endl;
						break;
				}
			}
			else
				cout << "Password Salah!!!" << endl;
		}
			
	else if(username == "SI202119")
	{
		if(password == "000129")
		{
			system("cls");
			cout << "Informasi Account Mahasiswa" << endl;
			sofyan.biodata();
			cout << endl << endl << endl << endl;
			menuutama();
			cout << "Pilih Menu\t:";
			cin >> pilihan;
			switch(pilihan)
			{
				case 1:
					system("cls");
					cout << "MENU DASBOARD" << endl;
					dashboard();
						
						
					break;
				case 2:
					cout << "MENU MATA KULIAH" << endl;
					break;
						
				case 3:
						cout << "MENU TUGAS" << endl;
						break;
				case 4:
					cout << "MENU MATERI TAMBAHAN" << endl;
					break;
					
				case 5:
						cout << "MENU KUIS" << endl;
						break;
						
				case 6:
					cout << "MENU ABSEN" << endl;
					break;
						
				case 7:
					cout << "MENU BIAYA" << endl;
					break;
					
				case 8:
					cout << "MENU UJIAN" << endl;
					break;
						
				case 9:
					cout << "DATA NILAI" << endl;
					break;
						
				case 10:
					cout << "MENU EVALUASI UMPAN BALIK" << endl;
					break;
						
				case 11:
					cout << "EXIT" << endl;
					break;
				}
			}
			else
				cout << "Password Salah!!!" << endl;
	}
	else
		cout << "Username Salah!!";
	
	
	
	
	return 0;

}



