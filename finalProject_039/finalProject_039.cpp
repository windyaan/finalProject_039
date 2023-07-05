#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }

	virtual void cekKelulusan() { return; }

	virtual void input() { return; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}
	
	//isi disini
	void setP(float p) { //fungsi untuk memberi/mengirim nilai pada presensi
		this->presensi = p;
	}
	void setA(float a) { 
		this->activity = a;
	}
	void setE(float e) { 
		this->exercise = e;
	}
	void setUA(float ua) { 
		this->tugasAkhir = ua;
	}

	float getP() { //fungsi untuk membaca/mengambil nilai dalam presensi
		return presensi;
	}
	float getA() { 
		return activity;
	}
	float getE() {
		return exercise;
	}
	float getUA() { 
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah { //isi disini
	float hitungNilaiAkhir()
	{
		return getP * 0.1 + getA * 0.2 + getE * 0.3 + getUA * 0.4;

	}

	void cekKelulusan()
	{
		cout << "Masukkan  = " << endl;
		if (hitungNilaiAkhir() < 75)
		{
			cout << "Anda tidak lulus" << endl;
		}
		else
			cout << "Selamat Anda lulus mata kuliah dengan nilai akhir" << hitungNilaiAkhir << endl;
	}

	void input()
	{
		cout << "\nMasukkan nilai Presensi = " << endl;
		float presensi;
		cin >> presensi;
		setP(presensi);

		cout << "\nMasukkan nilai Activity = " << endl;
		float activity;
		cin >> activity;
		setA(activity);

		cout << "\nMasukkan nilai Exercise = " << endl;
		float exercise;
		cin >> exercise;
		setE(exercise);

		cout << "\nMasukkan nilai Tugas Akhir = " << endl;
		float tugasAkhir;
		cin >> tugasAkhir;
		setUA(tugasAkhir);
	}

};

int main() { //isi disini
	MataKuliah mk;
	mk.setP("90");
	mk.setA("80");
	mk.setE("60");
	mk.setAU("75");
	mk.input();
	mk.cekKelulusan();

	return 0;
}