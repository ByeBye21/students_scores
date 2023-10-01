#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Saymyname {
public:
    void say() {
        const int screenWidth = 34;
        const int screenHeight = 24;

        // set up the starting position of the train
        int x = 0;
        int y = screenHeight / 2;

        while (true) {
            // clear the screen
            system("cls");

            // draw the train
            for (int i = 0; i < x; i++) {
                cout << " ";
            }
            cout << "   ___     _  _                     ___     _  _                     ___      _    " << endl;
            for (int i = 0; i < x; i++) {
                cout << " ";
            }
            cout << "  | _ )   | || |   ___      o O O  | _ )   | || |   ___      o O O  |_  )    / |   " << endl;
            for (int i = 0; i < x; i++) {
                cout << " ";
            }
            cout << "  | _ \\    \\_, |  / -_)    o       | _ \\    \\_, |  / -_)    o        / /     | |   " << endl;
            for (int i = 0; i < x; i++) {
                cout << " ";
            }
            cout << "  |___/   _|__/   \\___|   TS__[O]  |___/   _|__/   \\___|   TS__[O]  /___|   _|_|_  " << endl;
            for (int i = 0; i < x; i++) {
                cout << " ";
            }
            cout << "_|\"\"\"\"\"|_| \"\"\"\"\"|_|\"\"\"\"\"\"| {======|_|\"\"\"\"\"|_| \"\"\"\"\"|_|\"\"\"\"\"\"| {======|_|\"\"\"\"\"|_|\"\"\"\"\"| " << endl;
            for (int i = 0; i < x; i++) {
                cout << " ";
            }
            cout << "`-0-0-'\"`-0-0-'\"`-0-0-'./o--000'\"`-0-0-'\"`-0-0-'\"`-0-0-'./o--000'\"`-0-0-'\"`-0-0-'  " << endl;

            // move the train
            x++;
            if (x >= screenWidth) {
                x = 0;
            }

            // sleep for a short time to slow down the animation
            Sleep(50);
        }
    }
};

struct tarih {
    int gun = 0; int ay = 0; int yil = 0;
};

struct ogrenci {
    string ad; string soyad; int no = 0; int kisasinav1 = 0; int kisasinav2 = 0; int odev1 = 0; int odev2 = 0; int proje = 0; int vize = 0; int final = 0; struct tarih tarih1;
};

float oku(string s, float min, float max) {
    float sayi;
    do {
        cout << s; cin >> sayi;
    } while (!(sayi >= min && sayi <= max));
    return sayi;
}

char notharf(float puan) {
    if (puan >= 85) {
        return 'A';
    }
    else if (puan >= 75) {
        return 'B';
    }
    else if (puan >= 60) {
        return 'C';
    }
    else if (puan >= 45) {
        return 'D';
    }
    else if (puan >= 30) {
        return 'E';
    }
    else {
        return 'F';
    }
}

int main() {
    string isim[30] = { "kemal","hasan","emir","yunus","sedat","gurkan","yasin","can","derya","ayse","buse","ismet","arda","betul","meryem","ecem","eylul","yasar","aziz","okan","bayram","selin","yaren","sefa","suleyman","ahmet","fatma","melis","naz","simge" };
    string soyisim[30] = { "yilmaz","celik","kaya","koc","cakir","aydin","demir","aslan","turgut","korkmaz","polat","aktas","guler","bulut","isik","tas","avci","sari","ates","aksoy","kaplan","gul","unal","gunes","yildirim","ferah","ozturk","ozdemir","simsek","kurt" };
    ogrenci students[100];

    int tercih;
    while (true) {
    cout << "Ogrenci degiskeninin uyeleri rastgele (1)\nOgrenci degiskeni uye degerleri kullanicidan istenecek (2)\n\n";
    cin >> tercih;

    if (tercih == 1 || tercih == 2) {
        break;
    } else {
        cout << "\n\nGecersiz tercih. Lutfen 1 veya 2 girin.\n" << endl;
    }
}

    switch (tercih) {
    case 1: {
        for (int i = 0; i < 10; i++) {
            students[i].ad = { isim[rand() % 30] }; students[i].soyad = { soyisim[rand() % 30] }; students[i].no = { rand() % 999999 + 9900000 }; students[i].kisasinav1 = { rand() % 41 }; students[i].kisasinav2 = { rand() % 41 }; students[i].odev1 = { rand() % 41 }; students[i].odev2 = { rand() % 41 }; students[i].proje = { rand() % 41 }; students[i].vize = { rand() % 41 }; students[i].final = { rand() % 41 }; students[i].tarih1.gun = { rand() % 29 + 1 }; students[i].tarih1.ay = { rand() % 12 + 1 }; students[i].tarih1.yil = { rand() % 4 + 2000 };
        }
        for (int i = 10; i < 60; i++) {
            students[i].ad = { isim[rand() % 30] }; students[i].soyad = { soyisim[rand() % 30] }; students[i].no = { rand() % 999999 + 9900000 }; students[i].kisasinav1 = { rand() % 31 + 40 }; students[i].kisasinav2 = { rand() % 31 + 40 }; students[i].odev1 = { rand() % 31 + 40 }; students[i].odev2 = { rand() % 31 + 40 }; students[i].proje = { rand() % 31 + 40 }; students[i].vize = { rand() % 31 + 40 }; students[i].final = { rand() % 31 + 40 }; students[i].tarih1.gun = { rand() % 29 + 1 }; students[i].tarih1.ay = { rand() % 12 + 1 }; students[i].tarih1.yil = { rand() % 4 + 2000 };
        }
        for (int i = 60; i < 75; i++) {
            students[i].ad = { isim[rand() % 30] }; students[i].soyad = { soyisim[rand() % 30] }; students[i].no = { rand() % 999999 + 9900000 }; students[i].kisasinav1 = { rand() % 11 + 70 }; students[i].kisasinav2 = { rand() % 11 + 70 }; students[i].odev1 = { rand() % 11 + 70 }; students[i].odev2 = { rand() % 11 + 70 }; students[i].proje = { rand() % 11 + 70 }; students[i].vize = { rand() % 11 + 70 }; students[i].final = { rand() % 11 + 70 }; students[i].tarih1.gun = { rand() % 29 + 1 }; students[i].tarih1.ay = { rand() % 12 + 1 }; students[i].tarih1.yil = { rand() % 4 + 2000 };
        }
        for (int i = 75; i < 100; i++) {
            students[i].ad = { isim[rand() % 30] }; students[i].soyad = { soyisim[rand() % 30] }; students[i].no = { rand() % 999999 + 9900000 }; students[i].kisasinav1 = { rand() % 21 + 80 }; students[i].kisasinav2 = { rand() % 21 + 80 }; students[i].odev1 = { rand() % 21 + 80 }; students[i].odev2 = { rand() % 21 + 80 }; students[i].proje = { rand() % 21 + 80 }; students[i].vize = { rand() % 21 + 80 }; students[i].final = { rand() % 21 + 80 }; students[i].tarih1.gun = { rand() % 29 + 1 }; students[i].tarih1.ay = { rand() % 12 + 1 }; students[i].tarih1.yil = { rand() % 4 + 2000 };
        }
        break;
    }
    case 2: {
        for (int i = 0; i < 100; i++) {
            cout << "ogrenci icin ad giriniz? "; cin >> students[i].ad;
            cout << "ogrenci icin soyad giriniz? "; cin >> students[i].soyad;
            students[i].kisasinav1 = oku("kisasinav1 notu giriniz? ", 0.0, 100.0);
            students[i].kisasinav2 = oku("kisasinav2 notu giriniz? ", 0.0, 100.0);
            students[i].odev1 = oku("odev1 notu giriniz? ", 0.0, 100.0);
            students[i].odev2 = oku("odev2 notu giriniz? ", 0.0, 100.0);
            students[i].proje = oku("proje notu giriniz? ", 0.0, 100.0);
            students[i].vize = oku("vize notu giriniz? ", 0.0, 100.0);
            students[i].final = oku("final notu giriniz? ", 0.0, 100.0);
            students[i].tarih1.gun = oku("ogrenci dogum tarih gunu giriniz? ", 0, 31);
            students[i].tarih1.ay = oku("ogrenci dogum tarih ayi giriniz? ", 0, 12);
            students[i].tarih1.yil = oku("ogrenci dogum tarih yili giriniz? ", 1900, 2010);
            break;
        }
    }
    }
    float puan[100];
    for (int i = 0; i < 100; i++) {
        puan[i] = (students[i].vize * 27.5 + students[i].kisasinav1 * 3.85 + students[i].kisasinav2 * 3.85 + students[i].odev1 * 5.5 + students[i].odev2 * 5.5 + students[i].proje * 8.8 + students[i].final * 45) / 100;
    }
    int tercih2;
    char tekrar;
    do {
        while (true) {
            cout << "\nsinifin listesini yazdir(1)\nsinifin en yuksek notunu hesapla(2)\nsinifin en dusuk notunu hesapla(3)\nsinifin ortalamasini hesapla(4)\nsinifin standart sapmasini hesapla(5)\nbasari notu belirli bir aralikta olanlar listelensin(6)\nbasari notu belirtilen bir degerin altinda olan ogrencilerin listesi(7)\nbasari notu belirtilen bir degerin ustunde olan ogrencilerin listesi(8)\n\n";
            cin >> tercih2;

            if (tercih2 == 1 || tercih2 == 2 || tercih2 == 3 || tercih2 == 4 || tercih2 == 5 || tercih2 == 6 || tercih2 == 7 || tercih2 == 8) {
                break;
            } else {
                cout << "\n\nGecersiz tercih. Lutfen 1'den 8'e kadar bir sayi giriniz.\n" << endl;
            }
        }

        switch (tercih2) {
        case 1: {
            cout << "|--------|---------|----------|------------|------------|------|------|-----|----|-----|-----------|\n";
            cout << "|---AD---|--SOYAD--|OGRENCI NO|KISA SINAV 1|KISA SINAV 2|ODEV 1|ODEV 2|PROJE|VIZE|FINAL|---TARIH---|\n";
            cout << "|--------|---------|----------|------------|------------|------|------|-----|----|-----|-----------|\n";
            for (int i = 0; i < 100; i++) {
                cout << setw(8) << students[i].ad << setw(9) << students[i].soyad << setw(12) << students[i].no << setw(9) << students[i].kisasinav1 << setw(13) << students[i].kisasinav2 << setw(10) << students[i].odev1 << setw(7) << students[i].odev2 << setw(6) << students[i].proje << setw(6) << students[i].vize << setw(5) << students[i].final << setw(6) << students[i].tarih1.gun << '/' << students[i].tarih1.ay << '/' << students[i].tarih1.yil << endl;
                if ((i + 1) % 20 == 0 && i != 99) {
                    cout << "\n\ndevam etmek icin herhangibi bir tusa basiniz\n\n";
                    system("pause");
                    system("CLS");
                    cout << "|--------|---------|----------|------------|------------|------|------|-----|----|-----|-----------|\n";
                    cout << "|---AD---|--SOYAD--|OGRENCI NO|KISA SINAV 1|KISA SINAV 2|ODEV 1|ODEV 2|PROJE|VIZE|FINAL|---TARIH---|\n";
                    cout << "|--------|---------|----------|------------|------------|------|------|-----|----|-----|-----------|\n";
                }
            }
            break;
        }
        case 2: {
            float max = puan[0];
            for (int i = 0; i < 100; i++) {
                if (puan[i] > max) {
                    max = puan[i];
                }
            }
            cout << "\nsinifin en yuksek notu : " << max << "\t*" << notharf(max) << '*' << endl;
            break;
        }
        case 3: {
            float min = puan[0];
            for (int i = 0; i < 100; i++) {
                if (puan[i] < min) {
                    min = puan[i];
                }
            }
            cout << "\nsinifin en dusuk notu : " << min << "\t*" << notharf(min) << '*' << endl;
            break;
        }
        case 4: {
            float result = 0;
            for (int i = 0; i < 100; i++) {
                result = result + puan[i];
            }
            cout << "\nsinifin ortalamasi : " << result / 100 << "\t*" << notharf(result / 100) << '*' << endl;
            break;
        }
        case 5: {
            float result = 0;
            for (int i = 0; i < 100; i++) {
                result = result + puan[i];
            }
            result = result / 100;
            float result2 = 0;
            for (int i = 0; i < 100; i++) {
                result2 = result2 + (puan[i] - result) * (puan[i] - result);
            }
            cout << "\nsinifin standart sapmasi : " << sqrt(result2 / 99) << endl;
            break;
        }
        case 6: {
            float min, max;
            cout << "\nen dusuk basari notu : ";
            cin >> min;
            cout << "en yuksek basari notu : ";
            cin >> max;
            cout << min << " ile " << max << " arasindaki notlar :\n\n";
            for (int i = 0; i < 100; i++) {
                if (puan[i] > min && puan[i] < max) {
                    cout << puan[i] << "\t*" << notharf(puan[i]) << '*' << endl;
                }
            }
            break;
        }
        case 7: {
            float max;
            cout << "\nen yuksek basari notu : ";
            cin >> max;
            cout << max << " altindaki notlar :\n\n";
            for (int i = 0; i < 100; i++) {
                if (puan[i] < max) {
                    cout << puan[i] << "\t*" << notharf(puan[i]) << '*' << endl;
                }
            }
            break;
        }
        case 8: {
            float min;
            cout << "\nen dusuk basari notu : ";
            cin >> min;
            cout << min << " ustundeki notlar :\n\n";
            for (int i = 0; i < 100; i++) {
                if (puan[i] > min) {
                    cout << puan[i] << "\t*" << notharf(puan[i]) << '*' << endl;
                }
            }
            break;
        }
        }
        do {
            cout << "\nbaska bir islem yapmak ister misiniz? (y/n) : ";
            cin >> tekrar; cout << endl;
        } while (tekrar != 'y' && tekrar != 'n');
    } while (tekrar == 'y');

    Saymyname saymyname;
    saymyname.say();
}
