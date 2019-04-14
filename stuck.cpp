#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *depan = NULL;

bool isempty(){
	if (depan == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void tambah (float isi){
	node *baru = new node;
	baru->data = isi;
	baru->next = NULL;
	if(isempty()){
		depan = baru;
		depan->next = NULL;
	}else{
		baru -> next = depan;
		depan = baru;
	}}

void kurang (){
	node *copot = new node;
	if(isempty()){
		cout << "Tidak ada stack";
	}else{
		copot = depan;
		depan = depan->next;
		delete copot;
	}
}

void cetak (){
	node *bantu = depan;
	if (isempty () == 0){
		while (bantu != NULL){
		cout<< bantu ->data <<" ";
		bantu = bantu ->next;
		}
	}
	else{
		cout<<"Tidak ada stack \n";

	}
}
int main (){
    int pil,n;
    cout<<"=================================="<<endl;
	cout<<"      Nama : Syela Septania       "<<endl;
	cout<<"      Npm  : 1817051058           "<<endl;
	cout<<"=================================="<<endl;
    do {

  cout<<"----------------------------------"<<endl;
  cout<<"        ---PILIH MENU---          "<<endl;
	cout<<endl<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"\n    1. Tambah                   "<<endl;
	cout<<"\n    2. Hapus                    "<<endl;
	cout<<"\n    3. Keluar                   "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<endl;
	cout<<"Pilihan: "; cin>>pil;
	cout<<endl;
      switch (pil){
	case 1 :
	float isi;
	int jumlah;
	cout<<"Berapa jumlah nilai Stack ? ";
	cin>>jumlah;
	for (int i=1;i<=jumlah;i++){
		cout<<"\nMasukan nilai ke "<<i<<" : ";
		cin>>isi;
		tambah(isi);
	}
	cout<<"isi stuck : "<<endl;
	cetak();
	cout<<endl;
	break;

	case 2:

	cout<<"\n Berapa stuck yang dihapus ? ";
	cin>>jumlah;
	for (int j=1;j<=jumlah;j++){
		kurang();
	}
	cout<<"\n Stack yang ada setelah Dihapus : \n"<<endl;
	cout<<endl;
	cetak ();
	cout<<endl;
    break;
          case 3:
        cout<<"--------------selesai-------------"<<endl;
        break;

    default :
        cout<<"\n pilihan tidak ada"<<endl;
	}
}
while (pil != 3);
cout<<"======================================================"<<endl;
	return 0;
}
