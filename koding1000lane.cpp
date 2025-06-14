#include<iostream>
#include<string>
using namespace std;

class jne{
    private:
    string ya;
    string user;
    string pw;
    int pil;
    string pwuser[100]={"freefire12","freefire"}; 
    string pwuser1[100]={"freefire12","freefire"};
    string ususer[100]={"farid","udin"};
    string ususer1[100]={"farid","udin"};
    int harganml[100]={9000,17000,7000,16000,10000,
    13000,13000,14000,15000,12000};
    int hargafrz[100]={13000,21000,11000,19000,13000,
    16000,16000,17000,18000,15000};
    int hargapch[100]={12000,20000,10000,18000,12000,
    15000,15000,16000,17000,14000};
    int hargacrgo[100]={8000,16000,6000,15000,9000,
    12000,12000,13000,14000,11000};
    string wilayah[100]={"SEMARANG","SURABAYA","SOLO","MALANG","MADIUN",
    "CILACAP","BREBES","KEDIRI","BANDUNG","JAKARTA"};
    int akunke;
    int jumlahAkun = 2;
    int jmlhalmtkirim =10;
    int alm =0;
    int noseri =0;
    string resi[100];
    string namarim[100];
    long long int norim[100];
    string namapeng[100];
    long long int nopeng[100];
    string des[100];
    string jeniskirim[100];
    int jumlahkirim=0;
    float berat[100];
    string asalkir[100];
    string tujuankir[100];
    int hargakirim[100];
    string status[100];
    string lokasi[100];


    public:
    bool logadmin(string user,string pw);
    void admin();
    void userr();
    void loguser();
    void buataknuser();
    bool loginuser(string user,string pw);
    void datahargakirim();
    void utama();
    void displ();
    void displ1();
    void pilpngrm();
    void editprgm();
    void uskirim();
    void indatakirim();
    int hitungresi();
    void tampilresi(int index);
    void cariresi();
    int hitungharga(int jenis,int index, float berat);
    void cekstatus();
    void editstus();
    void dislpysttus(int index);
    void pengaduan();
    void menejakunus();
    void resetpw();
    void resetus();
    void cekdat();
    
};


//untuk mengecek data user oleh admin 
void jne::cekdat(){
    system("cls");
    cout<<"===== Data Pengirim ====="<<endl;
    for(int i=0;i<jumlahkirim;i++){
     
    cout << "======================================================" << endl;
    cout << " No. Resi      : " << resi[i] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " ASAL          : " << asalkir[i] << endl;
    cout << " TUJUAN        : " << tujuankir[i] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " PENGIRIM      : " << namapeng[i] << endl;
    cout << " NO PENGIRIM   : " << nopeng[i] << endl;
    cout << " PENERIMA      : " << namarim[i] << endl;
    cout << " NO PENERIMA   : " << norim[i] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " JENIS KIRIMAN : " << jeniskirim[i] << endl;
    cout << " DESKRIPSI     : " << des[i] << endl;
    cout << " BERAT         : " << berat[i] << " kg" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " Status        : "<<status[i]<<endl;
    cout << "Lokasi Paket   : "<<lokasi[i]<<endl;
    cout << "------------------------------------------------------" << endl;
    cout << "======================================================\n\n" << endl;
    }

    system("pause");
    system("cls");
    admin();
}


//fungsi reset username user
void jne::resetus(){

    system("cls");
    string cekpw;
    cout<<"==========================================================="<<endl;
    cout<<"                      RESET USERNAME                       "<<endl;
    cout<<"==========================================================="<<endl;

    cout<<"Masukkan Password Anda Sebelumnya :";
    cin>>cekpw;

    
        for(int i=0;i<jumlahAkun;i++){
            if(cekpw == pwuser[i]){
                do{
                    cout<<"\nMasukkan Username Baru Anda :";
                cin>>ususer[i];
                cout<<"Konfirmasi Username Baru Anda :";
                cin>>ususer1[i];
                
                if(ususer[i]!=ususer1[i]){
    
                    cout<<"Username Anda Berbeda dengan Yang Sebelumnya"<<endl;
                }else{
                    system("cls");
                    cout<<"========================================="<<endl;
                    cout<<"       RESET USERNAME ANDA BERHASIL       "<<endl;
                    cout<<"========================================="<<endl;
                    system("pause");
                    system("cls");
                    loginuser(user,pw);
                }
                
                }while(true);

            }
        }


}

//fungsi mereset password user
void jne::resetpw(){

    system("cls");
    string cekus;
    cout<<"==========================================================="<<endl;
    cout<<"                      RESET PASSWORD                       "<<endl;
    cout<<"==========================================================="<<endl;

    cout<<"Masukkan Username Anda Sebelumnya :";
    cin>>cekus;

    
        for(int i=0;i<jumlahAkun;i++){
            if(cekus == ususer[i]){
                do{
                    cout<<"\nMasukkan Password Baru Anda :";
                cin>>pwuser[i];
                cout<<"Konfirmasi Password Baru Anda :";
                cin>>pwuser1[i];
                
                if(pwuser[i]!=pwuser1[i]){
    
                    cout<<"Password Anda Berbeda dengan Yang Sebelumnya"<<endl;
                }else{
                    cout<<"========================================="<<endl;
                    cout<<"       RESET PASWORD ANDA BERHASIL       "<<endl;
                    cout<<"========================================="<<endl;
                    system("pause");
                    system("cls");
                    loginuser(user,pw);
                }
                
                }while(true);

            }
        }
       
       

    

   

}



//manajemen akun user
void jne::menejakunus(){

    system("cls");
    do{
        cout<<"======== MANAGEMEN AKUN USER ========"<<endl;
    cout<<"1.  Lihat Daftar Akun"<<endl;
    cout<<"2.  Hapus Akun"<<endl;
    cout<<"3.  Kembali"<<endl;
    cout<<"Pilih Opsi di Atas : ";
    cin>>pil;

    if(pil ==1){
        cout<<"\nDaftar Akun User:"<<endl;
        for(int i=0;i<jumlahAkun;i++){
            cout<<i+1<<". "<<ususer[i]<<endl;
        }
        system("pause");
        system("cls");

    }else if(pil ==2){
        int akun;
        cout<<"\nDaftar Akun User:"<<endl;
        for(int i=0;i<jumlahAkun;i++){
            cout<<i+1<<". "<<ususer[i]<<endl;
        }
        cout<<"Masukkan nomor Akun yang Ingin dihapus : ";
        cin>>akun;

        if(akun>0 && akun <=jumlahAkun){
            for(int i=akun -1;i<jumlahAkun;i++){
                ususer[i]= ususer[i+1];
                pwuser[i]=pwuser[i+1];
            }
            jumlahAkun--;
            cout<<"== setelah di hapus =="<<endl;
            for(int i=0;i<jumlahAkun;i++){
                cout<<i+1<<". "<<ususer[i]<<endl;
            }
            cout<<"Akun berhasil di hapus!"<<endl;

        }else{
            cout<<"Nomor akun tidak valid"<<endl;
        }
        system("pause");
        system("cls");
        
    }else{
        system("pause");
        system("cls");
        admin();
    }

    }while(pil!=3);
    
}

//fungsi info pengaduan
void jne::pengaduan(){

    string ya;
    system("cls");
    cout<<"==============================================="<<endl;
    cout<<"                INFO PENGADUAN                 "<<endl;
    cout<<"==============================================="<<endl;
    cout<<endl;

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Nomor Telepon  :  +62-856-0972-7086"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Email  :  2400018237@webmail.uad.ac.id"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Instagram  :  Bayo_Ang1n"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Twitter  :  @faridhar-12"<<endl;
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Ketik ya Jika Sudah : ";
    cin>>ya;

    if(ya=="ya"||ya=="Ya"){
        cout<<"Baiklah Terimakasih"<<endl;
        system("pause");
        system("cls");
        userr();
    }else{
        pengaduan();
    }
}

//fungsi menampilkan status pengiriman
void jne::dislpysttus(int index){
    cout<<"----------------------------------------------------"<<endl;
    cout<<"\n-------------STATUS PAKET USER SEKARANG-------------"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"\nStatus  :         | "<<status[index]<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Lokasi Paket Anda : | "<<lokasi[index]<<endl;
    cout<<"----------------------------------------------------"<<endl;
    
}

//fungsi edit status oleh admin
void jne::editstus(){
    system("cls");
    
    bool si=false;

    cout<<"Apakah anda Benar Ingin Mengedit? (ya/tidak) :";
    cin >>ya;

    if(ya=="tidak" ||ya=="Tidak"){
        system("cls");
        admin();
    }

    system("cls");
    string cari;
    cout<<"====== MENGEDIT STATUS PENGIRIMAN======"<<endl;
    cout<<"Masukkan Resi Anda : ";
    cin>>cari;

    for(int i=0;i<jumlahkirim;i++){
        if(resi[i]==cari){
            si=true;
            system("cls");
            dislpysttus(i);
            cout<<"----------------------------------------------------"<<endl;
            cout<<"\n------------- EDIT STATUS USER -------------"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cin.ignore();
            cout<<"Status            : | ";getline(cin,status[i]);
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Lokasi Paket Anda : | ";getline(cin,lokasi[i]);
            cout<<"----------------------------------------------------"<<endl;
            system("cls");
            dislpysttus(i);
            break;
        }

    }

    if(!si){
        cout<<"Nomor Resi tidak di temukan!"<<endl;
    }
    system("pause");
    system("cls");
    admin();

}


//fungsi cek status pengiriman
void jne::cekstatus(){
    system("cls");
    string cari;
    bool si=false;
    cout<<"====== MENGECEK STATUS PENGIRIMAN======"<<endl;
    cout<<"Masukkan Resi Anda : ";
    cin>>cari;

    for(int i=0;i<jumlahkirim;i++){
        if(resi[i]==cari){
            si=true;
            system("cls");
            cout<<"===================================================="<<endl;
            cout<<"-------------STATUS PAKET ANDA SEKARANG-------------"<<endl;
            cout<<"===================================================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Status  :         | "<<status[i]<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"Lokasi Paket Anda : | "<<lokasi[i]<<endl;
            cout<<"----------------------------------------------------"<<endl;
            break;
        }

    }

    if(!si){
        cout<<"Nomor Resi tidak di temukan!"<<endl;
    }
    system("pause");
    system("cls");
    userr();
    
}

//fungsi cek resi
void jne::cariresi(){
    system("cls");
    string cari;
    bool res=false;
    cout<<"==== CEK RESI PENGIRIMAN ===="<<endl;
    cout<<"Masukkan Nomor Resi : ";
    cin>>cari;

    for(int i=0;i<jumlahkirim;i++){
        if(resi[i]==cari){
            res= true;
            system("cls");
            tampilresi(i);
            system("pause");
            userr();
            break;
        }
    }

    if(!res){
        cout<<"Nomor Resi tidak di temukan!"<<endl;
        system("pause");
    system("cls");
    userr();
    return;
    }
    

}

//fungsi untuk menampilkan resi pengiriman
void jne::tampilresi(int index){

    cout << "\n======================================================" << endl;
    cout << "                   RESI PENGIRIMAN JNE                 " << endl;
    cout << "======================================================" << endl;
    cout << " No. Resi      : " << resi[index] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " ASAL          : " << asalkir[index] << endl;
    cout << " TUJUAN        : " << tujuankir[index] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " PENGIRIM      : " << namapeng[index] << endl;
    cout << " NO PENGIRIM   : " << nopeng[index] << endl;
    cout << " PENERIMA      : " << namarim[index] << endl;
    cout << " NO PENERIMA   : " << norim[index] << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " JENIS KIRIMAN : " << jeniskirim[index] << endl;
    cout << " DESKRIPSI     : " << des[index] << endl;
    cout << " BERAT         : " << berat[index] << " kg" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " TOTAL HARGA   : Rp." << hargakirim[index] << endl;
    cout << "======================================================" << endl;
    cout << "         Terima kasih telah menggunakan JNE           " << endl;
    cout << "======================================================" << endl;

}

//Fungsi untuk menampilkan data No resi
int jne::hitungresi(){
    srand(time(0));
    int temp = 1000000000 + rand() % 9000000000; 
    cout<<"Debug  "<< temp<<endl;
    return temp;
}
//fungsi untuk menghitung harga barang perliko
int jne::hitungharga(int jenis, int index, float berat){
    int hargaperkg =0;

    switch(jenis){
        case 1:
        hargaperkg = harganml[index];
        break;
        case 2:
        hargaperkg = hargafrz[index];
        break;
        case 3:
        hargaperkg = hargapch[index];
        break;
        case 4:
        hargaperkg = hargacrgo[index];
        break;
    }
    return hargaperkg * berat;

}

//fungsi input data pengiriman
void jne::indatakirim(){
    system("cls");
    cout<<"===INPUT DATA PENGIRIMAN==="<<endl;

    asalkir[jumlahkirim]="Yogyakarta";
    tujuankir[jumlahkirim]= wilayah[alm-1];


    cin.ignore();
    cout<<"------------------------------------------"<<endl;
    cout<<"\n============ Data Pengirim ============="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Nama Pengirim : "; 
    getline(cin,namapeng[jumlahkirim]);
    cout<<"No HP Pengirim : ";
    cin>>nopeng[jumlahkirim];
   
    cin.ignore();
    cout<<"------------------------------------------"<<endl;
    cout<<"\n============ Data Penerima ============="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Nama Penerima : "; 
    getline(cin,namarim[jumlahkirim]);
    cout<<"No HP Penerima : ";
    cin>>norim[jumlahkirim];
   
    cin.ignore();
    cout<<"------------------------------------------"<<endl;
    cout<<"\n============= Data Barang =============="<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"\n\n-- Detail Barang --"<<endl;
    cout<<"Deskripsi Barang : ";
    getline(cin,des[jumlahkirim]);
    cout<<"Berat barang : ";
    cin>>berat[jumlahkirim];


    hargakirim[jumlahkirim] = hitungharga(pil,alm-1,berat[jumlahkirim]);

    string konresi= to_string(hitungresi());
    resi[jumlahkirim] = konresi;

    status[jumlahkirim]="On Proses";

    lokasi[jumlahkirim]="Pesanan di proses di lokasi sortir Yogyakarta DC";

    system("cls");
    tampilresi(jumlahkirim);

    jumlahkirim++;
    system("pause");
    system("cls");
    userr();

}
//user melakukan perngiriman
void jne::uskirim(){

    string ya;
     cout<<"HALO COSTUMER SELAMAT DATANG "<<endl;
     cout<<"Apakah Anda Benar Ingin Melakukan Pengiriman ? (ya/tidak) : ";
     cin>>ya;

    if(ya =="tidak" || ya =="Tidak"){
        userr();
    }else{
        system("cls");
        cout<<" BAIK LAH COSTUMER"<<endl; 
        system("cls");
    }

    do{
        displ1();
        cout<<"0. Kembali ke Halaman Sebelum nya : "<<endl;
        cout<<"\nMasukkan Alamat Tujuan no Berapa:";cin>>alm;

        if(alm==0){
            system("cls");
            userr();
            return;
        }

        if(alm<1 || alm>jmlhalmtkirim){
            cout<<"Pilihan tidak valid!"<<endl;
            continue;
        }
        
        cout<<"\n\n"<<". Dari Yogyakarta - "<<wilayah[alm-1]<<endl;
        cout<<" Jenis Pengiriman :"<<endl;
        cout<<"1. Pengiriman Normal : Rp."<<harganml[alm-1]<<"/kg"<<endl;
        cout<<"2. Pengiriman Freezer : Rp."<<hargafrz[alm-1]<<"/kg"<<endl;
        cout<<"3. Pengiriman Barang pecah : Rp."<<hargapch[alm-1]<<"/kg"<<endl;
        cout<<"4. Pengiriman Cargo : Rp."<<hargacrgo[alm-1]<<"/kg"<<endl;
        cout<<"\nPilih Jenis Pengiriman :";
        cin>>pil;

        if(pil<1 || pil>4){
            cout<<"Pilihan tidak valid!"<<endl;
            continue;
        }

        switch(pil){
            case 1:
            jeniskirim[jumlahkirim]="Pengiriman normal";
            break;
            case 2:
            jeniskirim[jmlhalmtkirim]="Pengiriman freezer";
            break;
            case 3:
            jeniskirim[jumlahkirim]="Pengiriman Barang anti pecah";
            break;
            case 4:
            jeniskirim[jumlahkirim]="Pengiriman Cargo";
            break;


        }

        indatakirim();
        return;

    }while(true);
     



}

//fungsi edit data pengiriman oleh admin
void jne::editprgm(){

    cout<<"Apakah a1nda benar ingin mengedit? (ya/tidak): ";
    cin>>ya;

    if(ya=="tidak" || ya=="Tidak"){
        pilpngrm();
    }

   //pemilihan pengiriman yang akan di edit
    do{
        displ();
        cout<<"0. Kembali"<<endl;
        cout<<"Pilih Yang Akan di Edit :";
        cin>>pil;

        if(pil-1 <pil && pil !=0){
            cout<<"\n\nAWAL :"<<endl;
            cout<<"_______________________________________________"<<endl;
            cout<<pil<<". Dari Yogyakarta - "<<wilayah[pil-1]<<endl;
            cout<<" Jenis Pengiriman :"<<endl;
            cout<<" - Pengiriman Normal : Rp."<<harganml[pil-1]<<"/kg"<<endl;
            cout<<" - Pengiriman Freezer : Rp."<<hargafrz[pil-1]<<"/kg"<<endl;
            cout<<" - Pengiriman Barang pecah : Rp."<<hargapch[pil-1]<<"/kg"<<endl;
            cout<<" - Pengiriman Cargo : Rp."<<hargacrgo[pil-1]<<"/kg"<<endl;
            cout<<"_______________________________________________"<<endl;
            cout<<"\nEDIT"<<endl;
            cout<<"_______________________________________________"<<endl;
            cout<<"Edit pengiriman nomor "<<pil<<". Dari Yogyakarta - ";
            cin>>wilayah[pil-1];
            cout<<" Jenis Pengiriman :"<<endl;
            cout<<" - Edit Pengiriman Normal : Rp.";
            cin>>harganml[pil-1];
            cout<<" - Edit Pengiriman Freezer : Rp.";
            cin>>hargafrz[pil-1];
            cout<<" - Edit Pengiriman Barang pecah : Rp.";
            cin>>hargapch[pil-1];
            cout<<" - Edit Pengiriman Cargo : Rp.";
            cin>>hargacrgo[pil-1];
            cout<<"_______________________________________________"<<endl;
            
        }else if(pil==0){
            cout<<"Program Edit Selesai"<<endl;
            admin();
        }

    }while(pil !=0);
   
}

//fungsi pilih edit data
void jne::pilpngrm(){

    cout<<"\n\nEDIT APA YANG INGIN DI LAKUKAN"<<endl;
    cout<<"1. Menambah Alamat Pengiriman "<<endl;
    cout<<"2. Menghapus atau Mengganti Yang Sudah Ada"<<endl;
    cout<<"0. Kembali"<<endl;

    do{
        cout<<"\nMasukkan pilihan :"; 
        cin>>pil;
    
        switch(pil){
            case 1 :
            system("cls");
            datahargakirim();
            
            break;
            case 2 :
            system("cls");
            editprgm();
            break;
            case 0:
            system("cls");
            admin();
            break;

    
        }

    }while(pil !=0);

}

//menampilkan semua alamat pengirim
void jne::displ1(){
    cout<<"ALAMAT PENGIRIMAN YANG TERSEDIA  "<<endl;

    for(int i=0;i<jmlhalmtkirim;i++){
        cout<<"\n=========================================================="<<endl;
        cout<<i+1<<". Dari Yogyakarta - "<<wilayah[i]<<endl;
        cout<<" Jenis Pengiriman :"<<endl;
        cout<<" - Pengiriman Normal : Rp."<<harganml[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Freezer : Rp."<<hargafrz[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Barang pecah : Rp."<<hargapch[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Cargo : Rp."<<hargacrgo[i]<<"/kg"<<endl;
        cout<<"----------------------------------------------------------"<<endl;

    }

    system("pause");
   

}

//menampilkan semua alamat pengirim dari jogja ke wilayah lainya
void jne::displ(){
    cout<<"ALAMAT PENGIRIMAN YANG TERSEDIA  "<<endl;

    for(int i=0;i<jmlhalmtkirim;i++){
        cout<<"\n=========================================================="<<endl;
        cout<<i+1<<". Dari Yogyakarta - "<<wilayah[i]<<endl;
        cout<<" Jenis Pengiriman :"<<endl;
        cout<<" - Pengiriman Normal : Rp."<<harganml[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Freezer : Rp."<<hargafrz[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Barang pecah : Rp."<<hargapch[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Cargo : Rp."<<hargacrgo[i]<<"/kg"<<endl;
        cout<<"----------------------------------------------------------"<<endl;

    }

    system("pause");
   

}

//fungsi menambah alamat pengiriman oleh admin
void jne::datahargakirim(){

    string ya;
    cout<<"=========================================================="<<endl;
    cout<<"======== MASUKKAN DATA HARGA DAN ALAMAT PENGIRIMAN ======="<<endl;;
    cout<<"=========================================================="<<endl;
    cout<<"\nDaftar Alamat Pengiriman "<<endl;
    cout<<"!!!MASUKKAN ALAMAT TUJUAN DAN HARGA NYA DENGAN ALAMAT AWAL ADALAH KOTA YOGYAKARTA "<<endl;
    do{
       
        cout<<"\nMasukkan Alamat Tujuan ke- "<<jmlhalmtkirim+1<<" : ";
        cin>>wilayah[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Barang normal/KG : ";
        cin>>harganml[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Pecah belah/KG : ";
        cin>>hargapch[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Makanan Freezer/KG : ";
        cin>>hargafrz[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Barang Cargo/KG : ";
        cin>>hargacrgo[jmlhalmtkirim];


        cout<<"Apakah anda ingin Menambah alamat lagi ? (ya/tidak) :"
        ;cin>>ya;
        if(ya =="ya"|| ya=="YA"){
            cout<<"";
            jmlhalmtkirim++;

            
        }else{
            cout<<"\n\nPenambahan alamat berhasil"<<endl;
            jmlhalmtkirim++;
            system("cls");
            displ();
            system("pause");
            system("cls");
            admin();
            break;
        }
        
        
        
       
    } while(true);

}

//fungsi login akun user
bool jne::loginuser(string user,string pw){

    cout<<"=========================================================="<<endl;
    cout<<"                       LOGIN USER                         "<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Masukkan Username : ";
    cin>>user;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Masukkan Password : ";
    cin>>pw;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"=========================================================="<<endl;

    for(int k=0;k<jumlahAkun;k++){
        if(user == ususer[k] && pw == pwuser[k]){
            system("cls");
            cout<<"Anda berhasil masuk \n"<<endl;
            userr();
            
            return true;
        }
    }
   
    // Periksa semua akun
    for(int i = 0; i < jumlahAkun; i++) { 
        if( pw != pwuser[i]){
            cout<<"Password Anda Salah "<<endl;
            cout<<"Apakah anda Ingin Riset Password dan atau tidak? (ya/tidak) : ";
            cin>>ya;
    
            if(ya=="ya" || ya=="YA"){
                system("cls");
                resetpw();
            }else{
                system("cls");
                return loginuser(user,pw);
            }
        }
    }
    cout<<"Username Atau Password Anda tidak Terdaftar"<<endl;
    cout<<"1. Kembali "<<endl;
    cout<<"2. Lanjut"<<endl;
    cout<<"Masukkan pilihan : ";cin>>pil;

    switch(pil){
        case 1:
        system("cls");
        utama();
        break;
        case 2:
        system("cls");
        loginuser(user,pw);
        break;
        default:
        cout<<"Pilihan tidak valid!!"<<endl;
        break;
    }
    return loginuser(user,pw);
    

}

//fungsi buat akun user
void jne::buataknuser(){
    cout<<"=========================================================="<<endl;
    cout<<"                        REGISTER AKUN                     "<<endl;
    cout<<"=========================================================="<<endl;
    
    do{
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Username anda (MAX 12 Karakter): |";
        cin>>ususer[jumlahAkun]; 
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Password anda (MAX 8 Karakter) : |";
        cin>>pwuser[jumlahAkun]; 
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Konvirmasi Password            : |";
        cin>>pwuser1[jumlahAkun]; 
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"=========================================================="<<endl;
        if(pwuser[jumlahAkun]!=pwuser1[jumlahAkun]){

            cout<<"Sandi Anda Berbeda dengan Yang Sebelumnya"<<endl;
        }
        else {

            cout<<"\n\nPendaftaran akun anda berhasil"<<endl;
            jumlahAkun++;
            system("cls");
            loginuser(user,pw);
            
            
            break;
        }
        system("pause");
            system("cls");
    } while(true);

}

//pengondisian input login
void jne::loguser(){

    string akn;
    cout<<"Apakah Anda Sudah Memiliki Akun? (belum/sudah): ";
    cin>>akn;
    system("cls");

    if(akn=="belum"||akn=="Belum"){
        system("cls");
        buataknuser();
        
    } else {
        system("cls");
        loginuser(user,pw);
    }
        
        
}

//input login admin
bool jne::logadmin(string user, string pw){

    string inputUser;
    string inputPw;
    cout<<"=========================================================="<<endl;
    cout<<"                         SILAHKAN LOGIN                   "<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Mohon Masukkan Username Anda :";
    cin>> inputUser;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Masukkan Password Anda       :";
    cin>> inputPw;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"=========================================================="<<endl;

    if((inputUser == "Admin" || inputUser == "admin" || inputUser == "ADMIN") && 
       (inputPw == "237" || inputPw == "203")) {

        cout<<"\nANDA BERHASIL MASUK"<<endl;
        system("pause");
        system("cls"); 
        admin();
        return true;

    } 
    else {
        cout<<"Username atau Password anda salah\n"<<endl;
        system("pause");
        system("cls");
        return logadmin(user,pw);
       
        

    }

}

//untuk menampilkan fitur fitur admin
void jne::admin(){

    cout<<"\n\nPILIH YANG ANDA INGIN LAKUKAN "<<endl;

    cout<<"1.  Menampilkan alamat Pengiriman "<<endl;
    cout<<"2.  Edit Data Pengiriman "<<endl;
    cout<<"3.  Edit Status dan Lokasi Pengiriman"<<endl;
    cout<<"4.  Managemen Akun user"<<endl;
    cout<<"5.  Melihat Data Pengiriman"<<endl;
    cout<<"6.  Kembali Ke Halaman Utama"<<endl;
    cout<<"0.  Keluar"<<endl;

    cout<<"Masukkan pilihan Anda : ";
    cin>>pil;

    switch(pil){
        case 1:
        system("cls");
        displ();
        system("cls");
        admin();
        break;

        case 2:
        system("cls");
        pilpngrm();
        break;

        case 3:
        system("cls");
        editstus();
        break;

        case 4:
        system("cls");
        menejakunus();
        break;

        case 5:
        system("cls");
        cekdat();
        break;

        case 6:
        system("cls");
        utama();
        break;
        case 0:
        system("cls");
        cout<<"Program selesai "<<endl;
        break;

        default:
        cout<<"Program Selesai"<<endl;
        break;

    }

}
//menampilkan fitur  user
void jne::userr(){
    cout<<"\nHALO PELANGGAN SETIA JNE PILIH YANG ANDA INGIN LAKUKAN "<<endl;

    cout<<"1.  Melakukan Pengiriman "<<endl;
    cout<<"2.  Melihat Status Pengiriman "<<endl;
    cout<<"3.  Melihat Resi Pengiriman"<<endl;
    cout<<"4.  Info Pengaduan"<<endl; 
    cout<<"5.  Kembali ke Halaman Utama"<<endl;
    cout<<"0.  Keluar"<<endl;
    
    cout<<"Masukkan pilihan Anda : ";
    cin>>pil;

    switch(pil){
        case 1:
        system("cls");
            uskirim();
        break;
        case 2:
        system("cls");
            cekstatus();
        break;
        case 3:
        system("cls");
            cariresi();
        break;
        case 4:
        pengaduan();
        break;
        case 5:
        system("cls");
         utama();
        break;
        case 0:
        system("cls");
        cout<<"Program selesai "<<endl;
        break;
        default:
        cout<<"Pilihan tidak valid";
        userr();
        break;

    }

}

//fungsi fitur utama
void jne::utama(){
    int p;
    
    cout<<"HALO SILAHKAN PILIH MASUK SEBAGAI ADMIN ATAU USER"<<endl;
    cout<<"1.  ADMIN"<<endl;
    cout<<"2.  USER"<<endl;
    cout<<"0.  Keluar"<<endl;
    do{
        cout<<"Masukkan pilihan anda : "; 
        cin>>p;
        switch(p){
            case 1:
            system("cls");
            cout<<"=============HALO SELAMAT DATANG ADMIN============="<<endl;
            logadmin(user,pw);
            break;
            case 2:
            
            cout<<"=============HALO SELAMAT DATANG PELANGGAN SETIA JNE============="<<endl;
            loguser();
            break;
            case 0:
            system("cls");
            cout<<"Program selesai"<<endl;
            break;
            default:
            cout<<"Pilihan tidak valid\n"<<endl;
            
        }

    }while(p>=3);
   

}

int main(){
    
    string user;
    string pw;
    jne x;
    x.utama();
   
    return 0;
}