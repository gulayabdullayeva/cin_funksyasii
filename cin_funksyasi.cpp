 #include <iostream>
 #include <string>
using namespace std;

int main (){
    
    system("cls"); 
    string fullname;//melumati saxlamaq ucun qutu yaradiriq
    string ata;
    int yas;


    cout << " ad soyadnizi daxil edin: ";//ekrana bildiris cxardir
    getline(cin,fullname);
    
    cout << " ata adinizi yazn: ";
    getline(cin,ata);

    cout << " yasinini daxil edin: ";
    cin >> yas ; //istifadecinin yazdigi ededi gororuk

    cout << " ad soyad = " << fullname << " ata adi = " << ata << "yasiniz = " << yas << endl;
    cout << " gelen ilki yasiniz " << yas + 1 << " olacaq" << endl;




    return 0;
}