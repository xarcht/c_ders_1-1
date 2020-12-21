
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <random>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int say1, say2, islem, puan = 0, sonuc = 0, hak = 3;
    cout << "                                      ....3 İŞLEM OYUNU....     ";
    system("color 02");
    cout << endl;
    cout << "Her Doğru Cevap Size +1 Puan Kazandırır\n";
    cout << "Her Yanlış Cevap Puanınızdan -1 Düşürür\n";
    cout << "3 Defa Yanlış Cevap Verirseniz Oyun Biter\n";
    cout << "Başarılar.\n";
    for (int a = 0; a < 500; a++)
    {
        srand(time(NULL));
        say1 = rand() % 10 + 1;
        say2 = rand() % 10 + 1;

        islem = rand() % 3 + 1;

        if (hak == 1 || hak == 2 || hak == 3) {

            switch (islem) {


            case 1:
                cout << say1 << "+" << say2 << "=";
                cin >> sonuc;
                if ((say1 + say2) == sonuc) {

                    cout << endl;
                    cout << "DOĞRU CEVAP\n";
                    puan = puan + 1;
                    break;

                }
                else {
                    cout << endl;
                    hak = hak - 1;
                    cout << "Yanlış Cevap Verdiniz\n";
                    cout << "Kalan Hak Hakkınız:" << hak;
                    puan = puan - 1;
                    cout << endl;
                    break;
                }
            case 2:
                cout << say1 << "-" << say2 << "=";
                cin >> sonuc;
                if ((say1 - say2) == sonuc) {
                    cout << endl;
                    cout << "Doğru Cevap\n";
                    puan = puan + 1;
                    break;


                }
                else {
                    cout << endl;
                    hak = hak - 1;
                    cout << "Yanlış Cevap Verdiniz\n";
                    cout << "Kalan Hak Hakkınız:" << hak;
                    puan = puan - 1;
                    cout << endl;
                    break;

                }
            case 3:
                cout << say1 << "x" << say2 << "=";
                cin >> sonuc;
                if ((say1 * say2) == sonuc) {
                    cout << endl;
                    cout << "Doğru Cevap\n";
                    puan = puan + 1;
                    break;


                }
                else {
                    cout << endl;
                    hak = hak - 1;
                    cout << "Yanlış Cevap Verdiniz\n";
                    cout << "Kalan Hak Hakkınız:" << hak;
                    puan = puan - 1;
                    cout << endl;
                    break;

                }
            }




        }




    }

    cout << endl;
    cout << "OYUN BİTTİ.\n";
    cout << "Oynadığın teşekkürler......\n";
    cout << "Puanınız=" << puan;



}


