#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Responsi
{
private:
    int nim,saldo,ekspedisi,n,nama_brg,kd[5],jp,harga,diskon,jarak,ongkir,potongkir,jumongkir,pembayaran,sisa,tot,proteksi=3000;
    char alamat[100],user[30],pesan;
    string size,eks,model,bayar;
public: 
    void input();
    void proses();
    void output();
};

void Responsi::input(){
  cout<<"=====================================================\n";
  cout<<"|             SISTEM PENJUALAN ONLINE               |\n";
  cout<<"|            Welcome to my Online Shop              |\n";
  cout<<"====================================================="<<endl; 
  cout<<"|                     Login                         |\n";
  cout<<"----------------------------------------------------|\n";
  cout<<"|  Input User     : ";
  cin>>user;
  cout<<"|  Input Password : ";
  cin>>nim;
  cout<<"====================================================="<<endl; 
  cout<<"\nTambahkan Saldo : Rp ";
  cin>>saldo;
  cout<<"\nProduk yang Tersedia\n";
  cout<<"1. Pakaian"<<endl;
  cout<<"2. Sepatu"<<endl;
  cout<<"Pilih barang yang akan di beli: ";
  cin>>nama_brg;
  switch(nama_brg){
    case 1 :
      cout<<"\n===================================================================="<<endl;
      cout<<"|                Daftar Harga Kaos Distro(YAMUKNI)                 |"<<endl;
      cout<<"===================================================================="<<endl;
      cout<<"|Kode|      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
      cout<<"--------------------------------------------------------------------"<<endl;
      cout<<"| 01 |  Black Money  |       M,L,XL      |      12     | Rp.150000 |"<<endl;
      cout<<"| 02 | Black Hey You |       M,L,XL      |      10     | Rp.95000  |"<<endl;
      cout<<"| 03 | Black Pandemic| ALL SIZE FIT TO L |      15     | Rp.100000 |"<<endl;
      cout<<"| 04 |Black Opposites| ALL SIZE FIT TO L |      15     | Rp.200000 |"<<endl; 
      cout<<"===================================================================="<<endl;
      cout<<"Masukkan Berapa banyak anda ingin membeli pakaian : ";
      cin>>n;
      for(int a=1;a<=n;a++){
       cout<<"Barang ke - "<<a<<endl;
       cout<<"Kode         : ";
       cin>>kd[a];
       cout<<"Model        : ";
       cin>>model;
       cout<<"Size         : ";
       cin>>size;
       cout<<"Jumlah pesan : ";
       cin>>jp;
       if(kd[a]=01){
        harga=jp*150000;
   }
       else if(kd[a]==02){
        harga=jp*95000;
   }
       else if(kd[a]==03){
        harga=jp*100000;
   }
       else if(kd[a]==04){
        harga=jp*200000;
   }
       else 
        harga=0;
      }
      break;
    case 2 :
      cout<<"\n===================================================================="<<endl;
      cout<<"|                       Daftar Harga Sepatu                        |"<<endl;
      cout<<"===================================================================="<<endl;
      cout<<"|Kode|      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
      cout<<"--------------------------------------------------------------------"<<endl;
      cout<<"| 01 |     Nike      |   36,37,38,39,40  |      12     | Rp.150000 |"<<endl;
      cout<<"| 02 |     Vans      |   36,37,38,39,40  |      10     | Rp.165000 |"<<endl;
      cout<<"| 03 |    Adidas     |   36,37,38,39,40  |      15     | Rp.200000 |"<<endl;
      cout<<"| 04 |     Wakai     |   36,37,38,39,40  |      15     | Rp.350000 |"<<endl; 
      cout<<"===================================================================="<<endl;
      cout<<"Masukkan Berapa banyak anda ingin membeli Sepatu :";cin>>n;
      for(int a=1;a<=n;a++){
       cout<<"Barang ke - "<<a<<endl;
       cout<<"Kode         : ";
       cin>>kd[a];
       cout<<"Model        : ";
       cin>>model;
       cout<<"Size         : ";
       cin>>size;
       cout<<"Jumlah pesan : ";
       cin>>jp;
       if(kd[a]==01){
        harga=jp*150000;
       }else if(kd[a]==02){
        harga=jp*165000;
       }else if(kd[a]==03){
        harga=jp*20000;
       }else if(kd[a]==04){
        harga=jp*350000;
       }else{
        harga=0;
       }
	}
     break; 
    default :
    	cout<<"Pilihan Tidak Tersedia"<<endl;
    	break;
}

cout<<"\n--------------------------------------------------------------------"<<endl;
cout<<"\nPilih Ekspedisi Pengiriman Produk"<<endl;
  cout<<"1. JNT Express"<<endl;
  cout<<"2. Reguler"<<endl;
  cout<<"3. Shopee Express"<<endl;
  cout<<"\nPilih ekspedisi yang akan anda pakai: ";
  cin>>ekspedisi;
  if(ekspedisi==1){
    eks="JNT Express";
  }else if(ekspedisi==2){
    eks="Reguler";
  }else if(ekspedisi==3){
    eks="Shopee Express";
  }else{
    eks="Pilihan Tidak Ditemukan!";
  }
  
  cout<<"\n--------------------------------------------------------------------"<<endl;
  cout<<"\nPilih Metode Pembayaran"<<endl;
  cout<<"1. ShopeePay"<<endl;
  cout<<"2. COD"<<endl;
  cout<<"3. Minimarket"<<endl;
  cout<<"4. Kartu kredit/Debit"<<endl;
  cout<<"5. Transfer Bank"<<endl;
  cout<<"\nPilih metode Pembayaran yang akan anda pakai: ";
  cin>>pembayaran;
  if(pembayaran==1){
    bayar="ShopeePay";
  }else if(pembayaran==2){
    bayar="COD";
  }else if(pembayaran==3){
    bayar="Minimarket";
  }else if(pembayaran==4){
    bayar="Kartu kredit/Debit";
   }else{
    bayar="Pilihan Tidak Ditemukan!";
  }
  cout<<endl;
  cout<<"--------------------------------------------------------------------"<<endl;
}

void Responsi::proses(){
  cout<<"Masukkan Tujuan Alamat pengiriman : ";
  cin>>alamat;
  cout<<"Jarak Tempuh                      : ";
  cin>>jarak;
    if(jarak<=5){
      cout<<"Anda dikenai biaya ongkir Rp 20.000"<<endl;
      ongkir=20000;
    }else{
      cout<<"Anda dikenai biaya ongkir Rp 28.000"<<endl;
      ongkir=28000;
    }

  
    if(harga>=70000 && harga<=90000){
      diskon = ongkir*0;
    }else if(harga>=90000 && harga<=110000){
      cout<<"voucher diskon gratis ongkir 15%"<<endl;
      diskon = ongkir*0.15;
    }else if(harga>=110000 && harga<=140000){
      cout<<"voucher diskon gratis ongkir 20%"<<endl;
      diskon = ongkir*0.20;
    }else if(harga>=140000 && harga<=170000){
      cout<<"voucher diskon gratis ongkir 25%"<<endl;
      diskon = ongkir*0.25;
    }else if(harga>=170000 && harga<=210000){
      cout<<"voucher diskon gratis ongkir 30%"<<endl;
      diskon = ongkir*0.30;
    }else if(harga>=210000 && harga<=250000){
      cout<<"voucher diskon gratis ongkir 35%"<<endl;
      diskon = ongkir*0.35;
      jumongkir= ongkir-diskon;   
	}else if(harga>=250000){
      cout<<"voucher diskon gratis ongkir 40%"<<endl;
      diskon = ongkir*0.40;
    }else{
      cout<<"Anda tidak mendapat voucher diskon"<<endl;
    }
     
	/*cout<<"\nBuat Pesanan [Y/T] : ";
	cin>>pesan;
	if(pesan=='Y'){
		cout<<"Pembayaran Berhasil"<<endl;
		exit(0);
	}else{
		Responsi x;
		x.input();
	}*/
 
}


void Responsi::output(){
  ofstream struk;
  struk.open("struk.txt",ios::out);
  struk<<"=======================================================\n";
  struk<<"|               SISTEM PENJUALAN ONLINE               |\n";
  struk<<"|              Welcome to my Online Shop              |\n";
  struk<<"======================================================="<<endl;    
  struk<<"| User                                 : "<<user<<endl;
  struk<<"| Alamat Pengiriman                    : "<<alamat<<endl;
  for(int a=1;a<=n;a++){
  struk<<"| Pesanan Barang                       : "<<kd[a]<<"-"<<model<<"-"<<size<<"-"<<jp<<endl;  
  } 
  struk<<"| Subtotal Produk                      : Rp "<<harga<<endl;
  struk<<"| Ongkir                               : Rp "<<ongkir<<endl;
  struk<<"| Mendapatkan potongan gratis ongkir   : Rp "<<diskon<<endl;
  jumongkir= ongkir-diskon;
  struk<<"| Subtotal Pengiriman                  : Rp "<<jumongkir<<endl;
  struk<<"| Proteksi Asuransi                    : Rp "<<proteksi<<endl;
  tot=harga+jumongkir+proteksi;
  struk<<"| Total Bayar                          : Rp "<<tot<<endl;
  struk<<"| Metode Pembayaran                    : "<<bayar<<endl;
  struk<<"| Informasi Pengiriman                 : "<<eks<<endl;
  struk<<"======================================================="<<endl;
  sisa= saldo-tot;
  struk<<"| Sisa Saldo                           : Rp "<<sisa<<endl;
  struk<<"======================================================="<<endl;
  struk.close();
}

int main()
{
  Responsi x; 
  x.input(); 
  x.proses();
  x.output();
}