//#include <iostream>
#include <stdio.h>
#include "kolejka.h"

void menu(void)
{
    printf("\n");
    printf("1 - Dodaj liczbe do kolejki (Add)\n");
    printf("2 - Odczytaj pierwsza wartosc z kolejki (First)\n");
    printf("3 - Usun wartosc z z kolejki(Remove)\n");
    printf("4 - Sprawdz czy kolejka jest pusty\n");
    printf("5 - Sprawdz czy kolejka jest pelny\n");
    printf("6 - Koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("Kolejka - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    Add(temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pelna!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = First();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pusta!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Remove();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pusta!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Kolejka jest pusta.\n");
                }
                else {
                    printf("Kolejka nie jest pusta.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Kolejka jest pelna.\n");
                }
                else {
                    printf("Kolejka nie jest pelna.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}