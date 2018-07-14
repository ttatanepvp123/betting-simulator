#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    
    if(argc >= 4){
        int csvMode = 0;
        int ArgCsv = 0;
        int money = 0;
        int bet = 1;
        int chance = 0;
        int aleatoire = 0;
        int rentabilite = 0;
        int succes = 0;
        int tour = 1;
        int MoneyMax = 0;
        int Win = 0;
        FILE *csv = NULL;
        sscanf(argv[1], "%d", &money);
        sscanf(argv[2], "%d", &chance);
        sscanf(argv[3], "%d", &rentabilite);

        for(size_t i = 0; i < argc; i++)
        {
            
            if(!strcmp(argv[i], "-FormatCsv")) {
                printf("csvMode ON [ %s ]\n", argv[i+1]);
                csvMode = 1;
                ArgCsv = i+1;
            }
            
        }

        srand(time(NULL));

        
        if(csvMode == 1){
            csv = fopen(argv[ArgCsv], "w+");
            fprintf(csv, "Tour,Money,Bet,Win\n");
        }
        

        while(money > 0){

            aleatoire = rand() % 100;

            if (aleatoire <= chance) {
                money += bet * (1 + (rentabilite / 100));
                printf("Tour : %d | Money : %d | bet : %d | Win : True\n", tour, money, bet);
                if(csvMode == 1) fprintf(csv, "%d,%d,%d,True\n", tour, money, bet);
                bet = 1;
                Win += 1;
            } else {
                money -= bet;
                printf("Tour : %d | Money : %d | bet : %d | Win : False\n", tour, money, bet);
                if(csvMode == 1) fprintf(csv, "%d,%d,%d,False\n", tour, money, bet);
                bet = bet * 2;
            }

            if (MoneyMax < money) {
                MoneyMax = money;
            }
            tour++;
        }
        fprintf(stderr, "FINISHED SIMULATION\n");
        printf("Tour : %d | MoneyMax : %d | Win : %d | Loose : %d | percentage : %d ", tour, MoneyMax, Win , (tour - Win), ((Win * 100) / tour));
        if(csvMode == 1) fprintf(csv, "TOUR,MONEY MAX,WIN,LOOSE\n");
        if(csvMode == 1) fprintf(csv, "%d,%d,%d,%d\n", tour, MoneyMax, Win, (tour - Win));
        if(csvMode == 1) fclose(csv);
        
    }else{
        fprintf(stderr, "Argument : <money> <percentage of luck> <percentage of profitability>\n");
        fprintf(stderr, "Exemple : 20 50 200\nor\n20 50 200 > myFile.txt");
    }
    
    
    return 0;
}
