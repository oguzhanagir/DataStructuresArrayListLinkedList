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
};





struct Node
{
    int deger;      //Düğümün sayılal değeri
    Node* sonraki;  //Sonraki düğüme işaretçi
};

struct LinkedList
{
    Node* baslangic;    
    void olustur();
    void ekle(int deger, int sira);
    void guncelle(int sira);
    void sil(int sira);
    void yazdir();
    void bosalt();
    int sayac;
};

typedef ArrayList VeriYapilari;

VeriYapilari list;


int main()
{
    std::cout << "Hello World!\n";
    list.olustur();

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






void LinkedList::olustur()
{
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
}

void LinkedList::bosalt()
{
}
