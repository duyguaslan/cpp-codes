//dizinin elemanlarının aritmatik , geometrik ortalamasını , tek sayıların 
// ve cift sayıların ortalamasını bulan program 

#include <iostream> //cin ve cout kullanımı için gerekli
#include <math.h> // poe() kullanmı için gerekli 
using namespace std;

int main()
{   
    int Dizi[8] = { 5,7,2,8,9,1,4,3 }; 
      
    // Artirmatik ortalama bulan kodlar
    int toplam, Aortalama; 
    toplam = 0; 
    
    for (int i = 0;i < 8;i++) 
    {
        toplam += Dizi[i];  
        Aortalama = (float)toplam / 8;  
    } 
    cout << "Aritmatik ortalama : " << Aortalama << endl;
   
    //Geometrik ortalama bulan kodlar
    int carpim, Gortalama;
    carpim = 1;

    for (int i = 0; i < 8;i++)
    {
        carpim *= Dizi[i];
        Gortalama = pow(carpim, (float)1 / 8); 
    }

    cout << "geometrik ortalama : " << Gortalama << endl;
    
    //Dizideki tek sayaıların ortalamasın bulan kodlar 
    int tekToplam, tekOrtalama,tekSayac;
    tekToplam=0 ,tekSayac = 0;

    for (int i = 0; i < 8;i++)
    {
        if (Dizi[i] % 2 == 1)
        {
            tekToplam += Dizi[i];
            tekSayac += 1;
        }
        tekOrtalama = (float)tekToplam / tekSayac;
    }
    cout << "tek sayilarin ortalamasi : " << tekOrtalama << endl;
    
    //Dizideki çift sayılarn en büyüğü ile en küçügünün ortalaması
    int ciftToplam, ciftOrtalama, max, min;
    max = Dizi[0];
    min = Dizi[0];
    ciftToplam = 0;
    ciftOrtalama = 0;

    for (int i = 0;i < 8;i++) //dizi içince gezer
    {
        if (Dizi[i] % 2 == 0) //dizideki çiftleri ayıklar
        {
            if (max < Dizi[i]) // çiftlerin en buyugunu ayıklar
                max = Dizi[i];
            if (min > Dizi[i]) //çiftlerin en küçüğünü ayıklar
                min = Dizi[i];
        }
        ciftToplam = max + min;
        ciftOrtalama = (float)ciftToplam / 2;
    }
    //cout << "en buyuk: " << max << endl;
    //cout << "en kucuk: " << min << endl;
    cout << "cift sayilarin max ve mininin ortalamasi : " << ciftOrtalama;

    return 0;
}
