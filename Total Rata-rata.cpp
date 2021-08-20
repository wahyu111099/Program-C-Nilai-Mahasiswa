#include<iostream>
 
using namespace std;
 
int main(){
 int i,n,sks[5],mutu[5],nilai[5];
 string matakuliah[5],ket[5];
 float ipsem,totsks,totmutu;
 cout<<"\n\n";
 cout<<" masukkan jumlah mata kuliah = ";
 cin>>i;
 cout<<endl;
 n=1;
 totmutu = 0;
 totsks = 0;
 do{
   cout<<" Mata Kuliah     = ";
   cin>>matakuliah[n];
   cout<<" Jumlah sks      = ";
   cin>>sks[n];
   cout<<" Nilai           = ";
   cin>>nilai[n];
   cout<<endl;
       
     if (nilai[n]==4){
       ket [n] = 'A';
     }
     else if (nilai[n]==3){
       ket [n] = 'B';
     }
     else if (nilai[n]==2){
       ket [n] = 'C';
     }
     else if (nilai[n]==1){
       ket [n] = 'D';
     }
     else{
       ket [n] = 'E';
     }

     mutu[n]= sks[n] * nilai[n] ;
     totsks = totsks + sks[n];
     totmutu = totmutu + mutu[n];
     n++;
   }while(n<=i);
   n=1;
   system("cls");
   cout<<endl;
    cout<< "---------------------------------------- "<<endl;
    cout<< " MATA KULIAH   SKS    NILAI     MUTU     "<<endl;
    cout<< "---------------------------------------- "<<endl;
    do{
        cout<<" "<<matakuliah[n]<<"  "<<sks[n]<<"   "<<ket[n]<<"     "<<mutu[n]<<endl;
        cout<< "---------------------------------------- "<<endl;
        n++;
    }while(n<=i);
    ipsem = totmutu/totsks;
    cout<<"    Total      = "<<totsks<<"               "<<totmutu<<endl;
    cout<< "   IP Semester =         "<<ipsem; 
}
