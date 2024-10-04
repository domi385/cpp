#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    int zycie = 100;
    int zycieWroga = 100;
    bool kartaZycia = 0;
    bool odkrytyPokoj1 = 0;
    bool odkrytyPokoj2 = 0;
    bool odkrytyPokoj3 = 0;
    int opcja;
    int gra = 1;

    srand(time(NULL));

    while (gra == 1){

        while (zycie > 0) {

            printf("Twoje zycie: %d\n", zycie);
            printf("Karta zycia posiadana: %d\n\n", kartaZycia);

            if (odkrytyPokoj1) {
                printf("Komnata bossa\n");

            }else {
                printf("Nieznana komnata\n");
                
            }

            if (odkrytyPokoj2) {
                printf("Komnata leczenia\n");

            }else {
                printf("Nieznana komnata\n");

            }

            if (odkrytyPokoj3) {
                printf("Komnata z przeciwnikiem\n");

            }else {
                printf("Nieznana komnata\n");

            }

            printf("\nGdzie chcesz pojsc? ");
            cin >> opcja;

            if (opcja == 1) {

                system("CLS");

                odkrytyPokoj1 = true;

                if (kartaZycia) {

                    printf("\nZaatakowal cie Azhog plugawiciel dusz\n");

                    zycieWroga = 50;

                    while (zycieWroga > 0 && zycie > 0) {

                        int dmgGracza = rand() % 10 + 1;
                        int dmgWroga = rand() % 15 + 1;

                        zycie -= dmgWroga;
                        zycieWroga -= dmgGracza;

                        printf("\nGracz zadaje %d obrazen. \n", dmgGracza);
                        printf("\nAzhog zadaje %d obrazen. \n", dmgGracza);

                        printf("\nZycie gracza: %d\n", zycie);
                        printf("\nZycie Azhoga: %d zycia\n", zycieWroga);

                    }

                    if (zycieWroga <= 0) {
                        
                        printf("\nPokonales bossa Azhoga i ukonczyles gre! Gratulacje!");
                        printf("\nJesli chcesz zagrac ponownie, wybierz 1. W przeicnym razie gra cie zakonczy.");

                        cin >> gra;
                            if(gra != 1){

                            break;

                            }

                        break;

                    }

                }else {

                    printf("\n\nWitaj w komnacie z bossem. Aby zawalczyc z bossem potrzebujesz karty zycia. Pokonaj przeciwnika w innej komnacie, by ja dostac\n\n");

                }

            }else if (opcja == 2) {

                system("CLS");
                odkrytyPokoj2 = true;
                zycie = 100;
                printf("\n\nWitaj w komnacie leczenia. Zostales uleczony i masz teraz 100hp\n");

            }else if (opcja == 3) {

                system("CLS");
                odkrytyPokoj3 = true;
                if (!kartaZycia){

                    printf("\n\nWitaj w komnacie z przeciwnikiem.\n");
                    printf("\nZaatakowal cie Straznik\n");
                    zycieWroga == 30;
                    while (zycieWroga > 0 && zycie > 0) {

                        int dmgGracza = rand() % 10 + 1;
                        int dmgWroga = rand() % 7 + 1;

                        zycie -= dmgWroga;
                        zycieWroga -= dmgGracza;

                        printf("\nGracz zadaje %d obrazen. \n", dmgGracza);
                        printf("\nStraznik zadaje %d obrazen. \n", dmgGracza);

                        printf("\nZycie gracza: %d\n", zycie);
                        printf("\nZycie Straznika: %d zycia\n", zycieWroga);


                        if (zycieWroga <= 0) {
                            
                            printf("\n\nGratulacje! Pokonales przeciwnika i otrzymales karte zycia. Mozesz teraz zawalczyc z bossem.\n");
                            kartaZycia = true;
                            printf("Gdzie teraz chcesz pojsc? ");

                        }else if (zycie <= 0) {
                            printf("Zostales pokonany. Aby sprobowac ponownie wybierz 1, w przeciwnym razie gra sie zakonczy. ");
                            cin >> gra;
                            if(gra != 1){

                            break;

                            }

                        }

                    }

                }else {

                    printf("Juz pokonales straznika");

                }

            }

        }

    }

    return 0;

}