#include<iostream>
#include<string>
using namespace std;

class jne{
    private:
    string user;
    string pw;
    int pil;
    string pwuser[100];
    string pwuser1[100];
    string ususer[100];
    int harganml[100];
    int hargafrz[100];
    int hargapch[100];
    int hargacrgo[100];
    string wilayah[100];
    int akunke;
    int jumlahAkun = 0;
    int jmlhalmtkirim =0;
    int alm;
    int noseri =0;
    int noresi =3214;
    string namarim[100];
    int norim[100];
    string des[100];


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
    void pilpngrm();
    void editprgm();
    void uskirim();
};

void jne::uskirim(){

    string ya;
     cout<<"HALO COSTUMER SELAMAT DATANG "<<endl;
     cout<<"Apakah Anda Benar Ingin Melakukan Pengiriman ? (ya/tidak)";cin>>ya;

    if(ya =="tidak" || ya =="Tidak"){
        userr();
    }else{
        system("cls");
        cout<<" BAIK LAH COSTUMER"<<endl; 
        system("cls");
    }

    do{
        displ();
        cout<<"\nMasukkan Alamat Tujuan :";cin>>alm;
        
        cout<<"\n\n"<<". Dari Yogyakarta - "<<wilayah[alm-1]<<endl;
        cout<<" Jenis Pengiriman :"<<endl;
        cout<<"1. Pengiriman Normal : Rp."<<harganml[alm-1]<<"/kg"<<endl;
        cout<<"2. Pengiriman Freezer : Rp."<<hargafrz[alm-1]<<"/kg"<<endl;
        cout<<"3. Pengiriman Barang pecah : Rp."<<hargapch[alm-1]<<"/kg"<<endl;
        cout<<"4. Pengiriman Cargo : Rp."<<hargacrgo[alm-1]<<"/kg"<<endl;
        cout<<"\nPilih Jenis Pengiriman :";cin>>pil;

        switch(pil){
            case 1:
            cout<<"\n"<<". Dari Yogyakarta - "<<wilayah[alm-1]<<endl;
            cout<<" Pengiriman Normal : Rp."<<harganml[alm-1]<<"/kg"<<endl;
            cout<<"Masukkan Data Pengirim :"<<endl;
            cin.ignore();
            cout<<"Nama :";getline(cin,namarim[alm-1]);
            cout<<"No Hp :";cin>>norim[alm-1];
            cout<<"Deskripsi :";getline(cin,des[alm-1]);
            break;
            case 2:
            cout<<"\n"<<". Dari Yogyakarta - "<<wilayah[alm-1]<<endl;
            cout<<" Pengiriman Freeze : Rp."<<hargafrz[alm-1]<<"/kg"<<endl;
            break;
            case 3:
            cout<<"\n"<<". Dari Yogyakarta - "<<wilayah[alm-1]<<endl; 
            cout<<" Pengiriman Barang Pecah : Rp."<<hargapch[alm-1]<<"/kg"<<endl;
            break;
            case 4:
            cout<<"\n"<<". Dari Yogyakarta - "<<wilayah[alm-1]<<endl;
            cout<<" Pengiriman Cargo : Rp."<<hargacrgo[alm-1]<<"/kg"<<endl;
            break;


        }

    }while(alm !=0);
     



}

void jne::editprgm(){

   
    do{
        displ();
        cout<<"0. Kembali"<<endl;
        cout<<"Pilih Yang Akan di Edit :";cin>>pil;

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
            cout<<"Edit pengiriman nomor "<<pil<<". Dari Yogyakarta - ";cin>>wilayah[pil-1];
            cout<<" Jenis Pengiriman :"<<endl;
            cout<<" - Edit Pengiriman Normal : Rp.";cin>>harganml[pil-1];
            cout<<" - Edit Pengiriman Freezer : Rp.";cin>>hargafrz[pil-1];
            cout<<" - Edit Pengiriman Barang pecah : Rp.";cin>>hargapch[pil-1];
            cout<<" - Edit Pengiriman Cargo : Rp.";cin>>hargacrgo[pil-1];
            cout<<"_______________________________________________"<<endl;
            
        }else if(pil==0){
            cout<<"Program Edit Selesai"<<endl;
            admin();
        }

    }while(pil !=0);
   
}


void jne::pilpngrm(){

    cout<<"\n\nEDIT APA YANG INGIN DI LAKUKAN"<<endl;
    cout<<"1. Menambah Alamat Pengiriman "<<endl;
    cout<<"2. Menghapus atau Mengganti Yang Sudah Ada"<<endl;
    cout<<"0. Kembali"<<endl;

    do{
        cout<<"\nMasukkan pilihan :"; cin>>pil;
    
        switch(pil){
            case 1 :
            datahargakirim();
            
            break;
            case 2 :
            editprgm();
            break;
            case 0:
            system("cls");
            admin();
            break;

    
        }

    }while(pil !=0);

   
}


void jne::displ(){
    cout<<"Pengiriman Yang Tersedia  "<<endl;

    for(int i=0;i<jmlhalmtkirim;i++){
        cout<<i+1<<". Dari Yogyakarta - "<<wilayah[i]<<endl;
        cout<<" Jenis Pengiriman :"<<endl;
        cout<<" - Pengiriman Normal : Rp."<<harganml[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Freezer : Rp."<<hargafrz[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Barang pecah : Rp."<<hargapch[i]<<"/kg"<<endl;
        cout<<" - Pengiriman Cargo : Rp."<<hargacrgo[i]<<"/kg"<<endl;

    }
}


void jne::datahargakirim(){

    string ya;
    cout<<"\n\n======MASUKKAN DATA PENGIRIMAN======";
    cout<<"\nDaftar Alamat Pengiriman "<<endl;
    cout<<"MASUKKAN ALAMAT TUJUAN DAN HARGA NYA DENGAN ALAMAT AWAL ADALAH KOTA YOGYAKARTA "<<endl;
    do{
       
        cout<<"\nMasukkan Alamat Tujuan ke- "<<jmlhalmtkirim+1<<" : ";cin>>wilayah[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Barang normal/KG : ";cin>>harganml[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Pecah belah/KG : ";cin>>hargapch[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Makanan Freezer/KG : ";cin>>hargafrz[jmlhalmtkirim];
        cout<<"Masukkan Harga Pengiriman Barang Cargo/KG : ";cin>>hargacrgo[jmlhalmtkirim];


        cout<<"Apakah anda ingin Menambah alamat lagi ? (ya/tidak) :";cin>>ya;
        if(ya =="ya"|| ya=="YA"){
            cout<<"";
            jmlhalmtkirim++;

            
        }else{
            cout<<"\n\nPenambahan alamat berhasil"<<endl;
            jmlhalmtkirim++;
            system("cls");
            displ();
            admin();
            break;
        }
        
        
        
       
    } while(true);

}



bool jne::loginuser(string user,string pw){

    cout<<"\nSILAHKAN MASUKKAN USERNAME DAN PASSWORD UNTUK LOGIN "<<endl;
    cout<<"\nMasukkan Username : ";cin>>user;
    cout<<"Masukkan Password : ";cin>>pw;

    for(int i = 0; i < jumlahAkun; i++) { // Periksa semua akun
        if(user == ususer[i] || pw == pwuser[i]){
            system("cls");
            cout<<"Anda berhasil masuk \n"<<endl;
            userr();
            
            return true;
        }
    }
    cout<<"Username Atau Password Anda tidak Terdaftar"<<endl;
    return loginuser(user,pw);
}

void jne::buataknuser(){

    cout<<"\n\n======PENDAFTAR AKUN======";
    do{
        cout<<"\nDaftar Akun User ke : "<<jumlahAkun+1;
        cout<<"\n                                              ______________________"<<endl;
        cout<<"Masukkan Username anda (MAX 12 Karakter)  :  |";cin>>ususer[jumlahAkun]; 
        cout<<"                                              ______________________"<<endl;
        cout<<"                                              ______________________"<<endl;
        cout<<"Masukkan Password anda (MAX 8 Karakter)   :  |";cin>>pwuser[jumlahAkun]; 
        cout<<"                                              ______________________"<<endl;
        cout<<"                                              ______________________"<<endl;
        cout<<"Konvirmasi Password anda (MAX 8 Karakter) :  |";cin>>pwuser1[jumlahAkun]; 
        cout<<"                                              ______________________"<<endl;
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

void jne::loguser(){
    string akn;
    cout<<"Apakah Anda Sudah Memiliki Akun? (belum/sudah): ";
    cin>>akn;
    if(akn=="belum"||akn=="Belum"){
        system("cls");
        buataknuser();
        
    } else {
        system("cls");
        loginuser(user,pw);
    }
        
        
}


bool jne::logadmin(string user, string pw){
    string inputUser, inputPw;
    cout<<"                              ____________________________"<<endl;
    cout<<"Mohon Masukkan Username Anda :   ";cin>> inputUser;
    cout<<"                              ____________________________"<<endl;
    cout<<"Masukkan Password Anda       :   ";cin>> inputPw;
    cout<<"                              ____________________________"<<endl;
    
    if((inputUser == "Admin" || inputUser == "admin" || inputUser == "ADMIN") && 
       (inputPw == "237" || inputPw == "203")) {

        cout<<"\nANDA BERHASIL MASUK";
        system("pause");
        system("cls"); 
        admin();
        return true;

    } 
    else {

        cout<<"Username atau Password Anda Salah \n"<<endl;
        return logadmin(user,pw);
    }
}


void jne::admin(){

    cout<<"\n\nPILIH YANG ANDA INGIN LAKUKAN "<<endl;
    cout<<"1.  Memasukan alamat Pengiriman "<<endl;
    cout<<"2.  Edit Pengiriman "<<endl;
    cout<<"3.  Edit Status dan Lokasi Pengiriman"<<endl;
    cout<<"Masukkan pilihan Anda : ";
    cin>>pil;
    switch(pil){
        case 1:
        datahargakirim();
        break;
        case 2:
        pilpngrm();
        break;
        case 3:
        // Implementasi
        break;
    }
}

void jne::userr(){
    cout<<"\nHALO PELANGGAN SETIA JNE PILIH YANG ANDA INGIN LAKUKAN "<<endl;

    cout<<"1.  Melakukan Pengiriman "<<endl;
    cout<<"2.  Melihat Status Pengiriman "<<endl;
    cout<<"3.  Melacak Lokasi Paket"<<endl;
    cout<<"4.  Info Pengaduan"<<endl; 
    cout<<"Masukkan pilihan Anda : ";
    cin>>pil;
    switch(pil){
        case 1:
        
        break;
        case 2:
        // Implementasi
        break;
    }
}

void jne::utama(){
    int p;
    cout<<"HALO SILAHKAN PILIH MASUK SEBAGAI ADMIN ATAU USER"<<endl;
    cout<<"1.  ADMIN"<<endl;
    cout<<"2.  USER"<<endl;
    cout<<"0.  Keluar"<<endl;
    cout<<"Masukkan pilihan anda : "; cin>>p;
    switch(p){
        case 1:
        cout<<"=============HALO SELAMAT DATANG ADMIN============="<<endl;
        logadmin(user,pw);
        break;
        case 2:
        cout<<"=============HALO SELAMAT DATANG PELANGGAN SETIA JNE============="<<endl;
        loguser();
        break;
    }

}

int main(){
    
    string user;
    string pw;
    jne x;
    x.utama();
   
    return 0;
}