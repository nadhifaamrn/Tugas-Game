#include <stdio.h>
#include "intro.h"
#include "proof.h"

void backstory(){
    puts("Backstory: ");
    puts("Seseorang telah memecahkan tugu ARMY di desa BTS yang damai.");
    puts("Legenda mengatakan bahwa hal buruk akan menimpa desa jika tugu yang melindungi desa sejak zaman dahulu kala itu rusak.");
    puts("Itu sebabnya penduduk desa semakin cemas karena legenda mengatakan bahwa memecahkan tugu akan membawa malapetaka.");
    puts("Hari ini, misimu adalah menemukan pelaku yang memecahkan tugu ARMY");
    getch();
}


/*Dftar tersangka
1. Chief Park
2. Barber Hope
3. Ticket seller
4. Photographer 
5. Rich Guy
6. Gamer*/

int main() {
    char ready;

    puts("FIND THE CULPRIT!\n");

    puts("Petunjuk permainan: ");
    puts("Tugu Army telah dirusak!\nKamu berperan sebagai seorang detektif dan bertugas untuk mencari tahu 2 pelaku yang telah merusak tugu tersebut!");

    printf("\nKlik enter untuk melanjutkan.\n");
    getchar();

    puts("\n======================================================================================================================\n");

    intro();

    puts("\n======================================================================================================================\n");

    backstory();

    puts("\n======================================================================================================================\n");

    proof();

    puts("\n======================================================================================================================\n");

	int pelaku;
	
	printf("Carilah 2 orang pelaku yang telah menghancurkan tugu Army!\n");
	
	for (int i = 1; i <= 3; i++){
		printf("Tentukan tersangka yang anda curigai: ");
		scanf("%d", &pelaku);
		if (pelaku != 3 && pelaku != 5){
			if (i < 3) printf("\tAnda salah. Tersisa %d kesempatan menebak!\n", 3 - i);
			else if (i == 3) {
				printf("\tAnda salah. Kesempatan habis.\nGame Over!\n");
				return 0;
			}
		}
		
		if (pelaku == 3 || pelaku == 5){
			printf("\tAnda menemukan pelakunya.\n");
			while (i != 3){
				
				printf("Tentukan tersangka lainnya yang anda curigai: ");
				scanf("%d", &pelaku);
				i++;
				if (pelaku == 3 || pelaku == 5){
					printf("\tAnda menemukan kedua pelakunya!\nYou win!\n");
					goto EndLoops;
				}
					
				else {
					if (i != 3) printf("\tAnda salah. Tersisa %d kesempatan menebak!\n", 3-i);
					else printf("\tAnda salah. Kesempatan habis.\n");
				}
			}
			if (i == 3) printf("Anda hanya menemukan salah satu pelaku.\nGame Over!\n");
		}
	}
	
	EndLoops:
	
	
    return 0;
}
