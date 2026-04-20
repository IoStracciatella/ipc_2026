//Bu kod karmaşık. 4 ana parçaya ayrılmış:
//================================================================================================================
//BİRİNCİ KISIM: Girdi kontrolü.
//Burada kod, girilen değerlerin izin verilen aralıkta olup olmadığını, tekrar eden kart olup olmadığını vb. kontrol eder.
//Tekrar eden kart kontrolü en karmaşık kısımdır (ama yine de basittir): kartlar dizisinin tüm elemanlarını dolaşan bir döngü oluştururuz
//ve onun içinde başka bir döngü. Büyük döngünün her iterasyonunda, küçük döngü ile tüm diziyi dolaşırız. Böylece kartlar[] dizisinin her elemanı için,
//tüm diziyi dolaşıp aynı değer var mı diye bakarız. Anladın mı? Dizinin her elemanı için, yine aynı diziyi dolaşıp eşleşme ararız.
//================================================================================================================
//İKİNCİ KISIM: Manilha’yı hesaplamak ve eşdeğerlik dizisi oluşturmak
//Bu kısımda, ordem[] adında bir dizi oluştururuz ve bu dizideki elemanların sırası truco’daki kartların güç sırasıdır: 3 > 2 > A > K > J > Q > 7 > 6 > 5 > 4.
//Örneğin bu dizide 4, 9. pozisyondadır çünkü en zayıf karttır; 5’in değeri 8, 6’nın değeri 7, 7’nin değeri 6’dır ve böyle devam eder.
//Bunu yaptıktan sonra, bu dizi sayesinde girilen bir kartın gücünü kolayca belirleyebiliriz.
//Bunun için ordem[] dizisini dolaşarak kullanıcının girdiği değeri ararız. Döngü bu değeri bulduğunda, o elemanın dizideki indeksini döndürür,
//böylece kartın gücünü öğrenmiş oluruz. Bu dizi ile ayrıca manilha’yı da kolayca hesaplayabiliriz; manilha, vira’dan sonra gelen karttır.
//Bunun için ordem[] dizisinde vira’yı ararız ve bulduğumuzda manilha = o elemandan sonra gelen eleman olur, yani [i+1].
//Eğer vira 4 ise, dizinin sınırını aşmamak için doğrudan manilha = 3 olarak tanımlarız.
//================================================================================================================
//ÜÇÜNCÜ KISIM: Girilen kartları karşılaştırarak en büyüğünü bulmak
//Kartlar dizisindeki en büyük elemanı bulmak için bir döngü oluştururuz. Basit mantık: ilk elemanı tutan bir değişken oluştururuz,
//sonraki eleman daha büyükse, mevcut en büyük elemanı güncelleriz. Ancak her iterasyonda kartı normal sıralamadan truco’daki güç sırasına çevirmemiz gerekir,
//bunu da ordem[] dizisini kullanarak yaparız. ordem[] içinde arama yaparak o kartın dizideki konumunu buluruz ve böylece gücünü öğreniriz.
//Bundan sonra döngü normal şekilde çalışır ve mevcut elemanı (truco sırasına çevrilmiş haliyle) mevcut en büyük elemanla karşılaştırır.
//Eğer daha büyükse, en büyük eleman güncellenir (yani listenin i’nci elemanı olur).
//================================================================================================================
//DÖRDÜNCÜ KISIM: En büyük elemanı tekrar truco sırasına çevirmek
//En büyük elemanı ordem[] dizisini kullanarak tekrar kart değerine çeviririz.
//Daha sonra bu kartın hangi naipe ait olduğunu buluruz. Bunun için kartlar dizisini bir döngü ile dolaşırız,
//ve en büyük kartı bulduğumuzda onun kartlar[] dizisindeki indeksini alırız.
//Bunu yaptıktan sonra bu indeksi naipes[] dizisinde kullanarak kartın uygun naipini buluruz.
//VE SONUNDA, EN BÜYÜK KARTI VE ONUN NAİPİNİ YAZDIRIRIZ. NE LANET BİR EGZERSİZ. ALLAHIM.

#include <stdio.h>

int main() {
    int cartas[4], naipes[4], ordem[10], manilha, carta_atual, naipe_maior;
    int carta_maior = 0;

    // ======== Girdi Kontrolleri ========

    for (int i = 0; i < 4; i++) { //Diziyi dolduruyoruz
        scanf("%d", &cartas[i]);
        scanf("%d", &naipes[i]);

        if (cartas[i] > 7 && cartas[i] < 11) { //Kartların izin verilen değerlerde olup olmadığını kontrol ediyoruz
            printf("Entrada invalida");
            return 0;
        } else if (cartas[i] > 13 || cartas[i] <= 0) {
            printf("Entrada invalida.");
            return 0;
        } else if (naipes[i] < 0 || naipes[i] > 3) {
            printf("Entrada invalida.");
            return 0;
        }
    }

    for (int i = 0; i < 3; i++) { //Tekrar eden kart var mı kontrol ediyoruz
        for (int j = i+1; j < 3; j++) {
            if (cartas[i] == cartas[j] && naipes[i] == naipes[j]) {
                printf("Entrada invalida.");
                return 0;
            }
    
        }
    }
    
    // ======== Manilha Hesaplama ========

    //Dönüşüm dizisinin pozisyonlarına değer atıyoruz
    ordem[0] = 4;
    ordem[1] = 5;
    ordem[2] = 6;
    ordem[3] = 7;
    ordem[4] = 12;
    ordem[5] = 11;
    ordem[6] = 13;
    ordem[7] = 1;
    ordem[8] = 2;
    ordem[9] = 3;

    for (int i = 0; i < 10; i++) { //Manilha’nın vira’dan sonraki kart olduğunu belirliyoruz
        if (cartas[3] == ordem[i] && i != 9) {
            manilha = ordem[i+1];
            break;
        } else if (i == 9) { //Dizi sınırını aşarsak 4 atıyoruz
            manilha = 4;
        }
    }

    printf("manilha %d", manilha);    

    // ======== Güce Göre Sıralama ========

    for (int i = 0; i < 3; i++) { //Kartlardan biri manilha mı kontrol ediyoruz
        if (cartas[i] == manilha && naipes[i] == naipes[3]) {
            printf("%d %d", cartas[i], naipes[i]);
            return 0;
        } 
    }

    carta_maior = 0; //Şu ana kadar bulunan en büyük kartı saklayan değişken

    for (int i = 0; i < 3; i++) { //Kartı güç sırasına çevirip karşılaştırıyoruz
        for (int j = 0; j < 10; j++) {
            if (cartas[i] == ordem[j]) {
                carta_atual = j;
                break; //BU BREAK ÇOK ÖNEMLİ, DEĞER BULUNDUKTAN SONRA GEREKSİZ DÖNGÜYÜ ÖNLER
            }
        }

        if (carta_maior < carta_atual) { //Eğer mevcut kart daha büyükse güncelliyoruz
            carta_maior = carta_atual;
        }
    }

    //En büyük kartı tekrar truco sırasına çeviriyoruz
    for (int i = 0; i < 10; i++) {
        if (carta_maior == i) {
            carta_maior = ordem[i];
            break;
        }
    }

    for (int i = 0; i < 3; i++) { //En büyük karta ait naipi buluyoruz
        if (carta_maior == cartas[i]) {
            naipe_maior = naipes[i];
        }
    }

    printf("%d %d", carta_maior, naipe_maior);

    return 0;
}
