// veriYapilariÖdev1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>






struct ArrayList {
    int* baslangic;     // Dizinin başlangıç adresini tutar.
    void olustur();     // Başlangıç için  gereken tanımları içerir.
    void ekle(int deger, int sira );    // Değer ve Sıra numarası alarak ekleme yapar.
    void guncelle(int sira);    //Sıra numarası alarak güncelleme yapar.
    void sil(int sira);     //Sıra numarası alarak silme işlemi yapar.
    void yazdir();      // Liste içeriğini ekrana yazdırır.
    void bosalt();      // Listenin bellek alanlarını iade eder.
    int sayac;      //Liste kaç eleman olduğunu tutar.
    void basaEkle();    //Başa değer ekler.    
    void ortaEkle();    //Ortaya değer ekler.
    void sonaEkle();    //Sona değer ekler.
};



struct Node
{
    int deger;      //Düğümün sayısal değeri
    Node* sonraki;  //Sonraki düğüme işaretçi
};

struct LinkedList
{
    Node* baslangic;    //Listenin başlangıç adresini tutar.
    void olustur();     // Başlangıç için  gereken tanımları içerir.
    void ekle(int deger, int sira);     // Değer ve Sıra numarası alarak ekleme yapar.
    void guncelle(int sira);        //Sıra numarası alarak güncelleme yapar.
    void sil(int sira);     //Sıra numarası alarak silme işlemi yapar.
    void yazdir();      // Liste içeriğini ekrana yazdırır.
    void bosalt();      // Listenin bellek alanlarını iade eder.
    int sayac;      //Liste kaç eleman olduğunu tutar.
    void basaEkle(Node *p);    //Başa değer ekler.    
    void ortaEkle(Node *p);    //Ortaya değer ekler.
    void sonaEkle(Node *p);    //Sona değer ekler.
};



int main()
{
    int length = 100;

    LinkedList* linkL = new LinkedList();
    std::cout << "Main Fonksiyonu Calisti\n";
    linkL->olustur();
    linkL->yazdir();

    //for (int i = 0; i <length; i++)
    //{
    //    linkL->ekle(i, i);
    //}
    //
    //auto begin = std::chrono::high_resolution_clock::now(); //chrono başlangıç noktası

    //linkL->ekle(10, 1000);
    //
    //auto end = std::chrono::high_resolution_clock::now();
    //auto time = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    //std::cout << "Baglantili Listede Ekleme Süresi";


    Node* p = new Node();
    p->deger = 0;
    linkL->sonaEkle(p);
    linkL->yazdir();

    p = new Node();
    p->deger = 1;
    linkL->sonaEkle(p);
    linkL->yazdir();

    p = new Node();
    p->deger = 3;
    linkL->basaEkle(p);
    linkL->yazdir();


    p = new Node();
    p->deger = 2;
    linkL->sonaEkle(p);
    linkL->yazdir();

    p = new Node();
    p->deger = 3;
    linkL->basaEkle(p);
    linkL->yazdir();
    

   
}




void ArrayList::olustur()
{
    std::cout << "ArrayList Olustur Calisti\n";
    baslangic = NULL;
    sayac = 0;
}

void ArrayList::ekle(int deger, int sira)
{
    


}

void ArrayList::guncelle(int sira)
{
}

void ArrayList::sil(int sira)
{


}

void ArrayList::yazdir()
{
}

void ArrayList::bosalt()
{
}

void ArrayList::basaEkle()
{
}

void ArrayList::ortaEkle()
{
}

void ArrayList::sonaEkle()
{
}






void LinkedList::olustur()
{
    std::cout << "LinkedList Olustur Calisti\n";
    baslangic = NULL;
    sayac = 0;

}


void LinkedList::ekle(int deger, int sira)
{


}

void LinkedList::guncelle(int sira)
{
}

void LinkedList::sil(int sira)
{
}

void LinkedList::yazdir()
{
    Node* tara;
    tara = baslangic;

    if (!tara)
    {
        std::cout << "Liste Bos\n";
        return;
    }
    while (tara)
    {
        std::cout << tara->deger;
        tara = tara->sonraki;
    }
    std::cout << "\n";
}

void LinkedList::bosalt()
{
}

void LinkedList::basaEkle(Node *p)
{
    if (baslangic ==NULL)
    {
        baslangic = p;
    }
    else
    {
        p->sonraki = baslangic;
        baslangic = p;
    }
}

void LinkedList::ortaEkle(Node *p)
{
    if (baslangic ==NULL)
    {
        baslangic = p;
        return;
    }

    int dugumsayisi = 0;
    Node* tara = baslangic;

}

void LinkedList::sonaEkle(Node *p)
{
    if (baslangic ==NULL)
    {
        baslangic = p;
        return;
    }

    Node* tara;
    tara = baslangic;

    while (tara->sonraki)
    {
        tara = tara->sonraki;
    }

    tara->sonraki = p;
}

