/* - Naval Ship - */
/* - karagiannidis dimitris naiiiii- */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void checkShips();
void quitGame();
void targeting();

	int check[128];
	int target, hit = 0, i;
	int airpone, airptwo, airpthree, airpfour, airpfive;
	int destroypone, destroyptwo, destroypthree, destroypfour,destroypfive;

char rowone[50] = "11 12 13 14 15 16 17 18 19 110\n";
	char rowtwo[50] = "21 22 23 24 25 26 27 28 29 210\n";
	char rowthree[50] = "31 32 33 34 35 36 37 38 39 310\n";
	char rowfour[50] = "41 42 43 44 45 46 47 48 49 410\n";
	char rowfive[50] = "51 52 53 54 55 56 57 58 59 510\n";
	char rowsix[50] = "61 62 63 64 65 66 67 68 69 610\n";
	char rowseven[50] = "71 72 73 74 75 76 77 78 79 710\n";
	char roweight[50] = "81 82 83 84 85 86 87 88 89 810\n";
	char rownine[50] = "91 92 93 94 95 96 97 98 99 910\n";
	char rowten[50] ="101 102 103 104 105 106 107 108 109 1010\n";
	char e;

int airponetwo, airptwotwo, airpthreetwo, airpfourtwo, airpfivetwo;
	int destroyponetwo, destroyptwotwo, destroypthreetwo, destroypfourtwo,destroypfivetwo;
char rowonetwo[50] = "11 12 13 14 15 16 17 18 19 110\n";
	char rowtwotwo[50] = "21 22 23 24 25 26 27 28 29 210\n";
	char rowthreetwo[50] = "31 32 33 34 35 36 37 38 39 310\n";
	char rowfourtwo[50] = "41 42 43 44 45 46 47 48 49 410\n";
	char rowfivetwo[50] = "51 52 53 54 55 56 57 58 59 510\n";
	char rowsixtwo[50] = "61 62 63 64 65 66 67 68 69 610\n";
	char rowseventwo[50] = "71 72 73 74 75 76 77 78 79 710\n";
	char roweighttwo[50] = "81 82 83 84 85 86 87 88 89 810\n";
	char rowninetwo[50] = "91 92 93 94 95 96 97 98 99 910\n";
	char rowtentwo[50] ="101 102 103 104 105 106 107 108 109 1010\n";
	char e;
	main() {

	printf("naval battle\nBy karagiannidis dimitris\n");
	printf("These are the posible positions: \n");
    printf("11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19 ,110\n"); /* Displays posible ship positions */
	printf("21 ,22 ,23 ,24 ,25 ,26 ,27 ,28 ,29 ,210\n");
	printf("31 ,32 ,33 ,34 ,35 ,36 ,37 ,38 ,39 ,310\n");
	printf("41 ,42 ,43 ,44 ,45 ,46 ,47 ,48 ,49 ,410\n");
	printf("51 ,52 ,53 ,54 ,55 ,56 ,57 ,58 ,59 ,510\n");
	printf("61 ,62 ,63 ,64 ,65 ,66 ,67 ,68 ,69 ,610\n");
	printf("71 ,72 ,73 ,74 ,75 ,76 ,77 ,78 ,79 ,710\n");
	printf("81 ,82 ,83 ,84 ,85 ,86 ,87 ,88 ,89 ,810\n");
    printf("91 ,92 ,93 ,94 ,95 ,96 ,97 ,98 ,99 ,910\n");
    printf("101 ,102 ,103 ,104 ,105 ,106 ,107 ,108 ,109 ,1010\n");
    printf("(5 spaces)Enter your Destroyers's poition: \n");
	printf("position1: ");
	scanf("%d", &destroypone);
	printf("position2: ");
	scanf("%d", &destroyptwo);
	printf("position3: ");
	scanf("%d", &destroypthree);
	printf("position4: ");
	scanf("%d", &destroypfour);
printf("position5: ");
	scanf("%d", &destroypfive);
    printf("(5 spaces)Enter your Air craft carier's poition: \n");
	printf("position1: ");
	scanf("%d", &airpone);
	printf("position2: ");
	scanf("%d", &airptwo);
	printf("position3: ");
	scanf("%d", &airpthree);
	printf("position4: ");
	scanf("%d", &airpfour);
	printf("position5: ");
	scanf("%d", &airpfive);
	printf("Here is your board: \n");
	checkShips();
void targeting(){

    /* Checks if target is hit or not and if youv destroyed all enemy ships */
for(i=0; i<64; i++) {
	getche();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("P1 here is your status: \n");
	printf("Boats position list: \n");
    printf(rowone);
	printf(rowtwo);
	printf(rowthree);
	printf(rowfour);
	printf(rowfive);
	printf(rowsix);
	printf(rowseven);
	printf(roweight);
    printf(rownine);
	printf(rowten);
	printf("Target: ");
	scanf("%d", &target);
		switch(target){

	case 11:
		switch(destroyponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(destroyptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(destroypthreetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(destroypfourtwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
switch(destroypfivetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
switch(airponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airpthreetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airpfourtwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airpfivetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;



		quitGame();
	getche();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("P2 here is your status: \n");
	printf("Boats position list: \n");
	printf(rowonetwo);
	printf(rowtwotwo);
	printf(rowthreetwo);
	printf(rowfourtwo);
	printf(rowfivetwo);
	printf(rowsixtwo);
	printf(rowseventwo);
	printf(roweighttwo);
	printf("Target: ");
	scanf("%d", &target);
switch(target){
case 21:
		switch(destroypone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(destroyptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(destroypthree) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(destroypfour) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
switch(destroypfive) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
switch(airpone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airpthree) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airpfour) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
		switch(airpfive) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;


		}
void quitGame();
	}
}
void quitGame() {   /* Quit game when won */
		if(hit >= 18) {
		printf("Player 2 is the winner!!!\nType somthing to quit: ");
		getche();
		exit(0);
	}
	}
		}
} } }
void checkShips() {   /* Charts ships position */
			switch(destroypone) {
	case 11:
		rowone[0] = 'D';
		rowone[1] = 'E';
		break;
	case 12:
		rowone[3] = 'D';
		rowone[4] = 'E';
		break;
	case 13:
		rowone[6] = 'D';
		rowone[7] = 'E';
		break;
	case 14:
		rowone[9] = 'D';
		rowone[10] = 'E';
		break;
	case 15:
		rowone[12] = 'D';
		rowone[13] = 'E';
		break;
	case 16:
		rowone[15] = 'D';
		rowone[16] = 'E';
		break;
	case 17:
		rowone[18] = 'D';
		rowone[19] = 'E';
		break;
	case 18:
		rowone[21] = 'D';
		rowone[22] = 'E';
		break;
	case 21:
		rowtwo[0] = 'D';
		rowtwo[1] = 'E';
		break;
	case 22:
		rowtwo[3] = 'D';
		rowtwo[4] = 'E';
		break;
	case 23:
		rowtwo[6] = 'D';
		rowtwo[7] = 'E';
		break;
	case 24:
		rowtwo[9] = 'D';
		rowtwo[10] = 'E';
		break;
	case 25:
		rowtwo[12] = 'D';
		rowtwo[13] = 'E';
		break;
	case 26:
		rowtwo[15] = 'D';
		rowtwo[16] = 'E';
		break;
	case 27:
		rowtwo[18] = 'D';
		rowtwo[19] = 'E';
		break;
	case 28:
		rowtwo[21] = 'D';
		rowtwo[22] = 'E';
		break;
	case 31:
		rowthree[0] = 'D';
		rowthree[1] = 'E';
		break;
	case 32:
		rowthree[3] = 'D';
		rowthree[4] = 'E';
		break;
	case 33:
		rowthree[6] = 'D';
		rowthree[7] = 'E';
		break;
	case 34:
		rowthree[9] = 'D';
		rowthree[10] = 'E';
		break;
	case 35:
		rowthree[12] = 'D';
		rowthree[13] = 'E';
		break;
	case 36:
		rowthree[15] = 'D';
		rowthree[16] = 'E';
		break;
	case 37:
		rowthree[18] = 'D';
		rowthree[19] = 'E';
		break;
	case 38:
		rowthree[21] = 'D';
		rowthree[22] = 'E';
		break;
	case 41:
		rowfour[0] = 'D';
		rowfour[1] = 'E';
		break;
	case 42:
		rowfour[3] = 'D';
		rowfour[4] = 'E';
		break;
	case 43:
		rowfour[6] = 'D';
		rowfour[7] = 'E';
		break;
	case 44:
		rowfour[9] = 'D';
		rowfour[10] = 'E';
		break;
	case 45:
		rowfour[12] = 'D';
		rowfour[13] = 'E';
		break;
	case 46:
		rowfour[15] = 'D';
		rowfour[16] = 'E';
		break;
	case 47:
		rowfour[18] = 'D';
		rowfour[19] = 'E';
		break;
	case 48:
		rowfour[21] = 'D';
		rowfour[22] = 'E';
		break;
	case 51:
		rowfive[0] = 'D';
		rowfive[1] = 'E';
		break;
	case 52:
		rowfive[3] = 'D';
		rowfive[4] = 'E';
		break;
	case 53:
		rowfive[6] = 'D';
		rowfive[7] = 'E';
		break;
	case 54:
		rowfive[9] = 'D';
		rowfive[10] = 'E';
		break;
	case 55:
		rowfive[12] = 'D';
		rowfive[13] = 'E';
		break;
	case 56:
		rowfive[15] = 'D';
		rowfive[16] = 'E';
		break;
	case 57:
		rowfive[18] = 'D';
		rowfive[19] = 'E';
		break;
	case 58:
		rowfive[21] = 'D';
		rowfive[22] = 'E';
		break;
	case 61:
		rowsix[0] = 'D';
		rowsix[1] = 'E';
		break;
	case 62:
		rowsix[3] = 'D';
		rowsix[4] = 'E';
		break;
	case 63:
		rowsix[6] = 'D';
		rowsix[7] = 'E';
		break;
	case 64:
		rowsix[9] = 'D';
		rowsix[10] = 'E';
		break;
	case 65:
		rowsix[12] = 'D';
		rowsix[13] = 'E';
		break;
	case 66:
		rowsix[15] = 'D';
		rowsix[16] = 'E';
		break;
	case 67:
		rowsix[18] = 'D';
		rowsix[19] = 'E';
		break;
	case 68:
		rowsix[21] = 'D';
		rowsix[22] = 'E';
		break;
	case 71:
		rowseven[0] = 'D';
		rowseven[1] = 'E';
		break;
	case 72:
		rowseven[3] = 'D';
		rowseven[4] = 'E';
		break;
	case 73:
		rowseven[6] = 'D';
		rowseven[7] = 'E';
		break;
	case 74:
		rowseven[9] = 'D';
		rowseven[10] = 'E';
		break;
	case 75:
		rowseven[12] = 'D';
		rowseven[13] = 'E';
		break;
	case 76:
		rowseven[15] = 'D';
		rowseven[16] = 'E';
		break;
	case 77:
		rowseven[18] = 'D';
		rowseven[19] = 'E';
		break;
	case 78:
		rowseven[21] = 'D';
		rowseven[22] = 'E';
		break;
	case 81:
		roweight[0] = 'D';
		roweight[1] = 'E';
		break;
	case 82:
		roweight[3] = 'D';
		roweight[4] = 'E';
		break;
	case 83:
		roweight[6] = 'D';
		roweight[7] = 'E';
		break;
	case 84:
		roweight[9] = 'D';
		roweight[10] = 'E';
		break;
	case 85:
		roweight[12] = 'D';
		roweight[13] = 'E';
		break;
	case 86:
		roweight[15] = 'D';
		roweight[16] = 'E';
		break;
	case 87:
		roweight[18] = 'D';
		roweight[19] = 'E';
		break;
	case 88:
		roweight[21] = 'D';
		roweight[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	}

			switch(destroyptwo) {
	case 11:
		rowone[0] = 'D';
		rowone[1] = 'E';
		break;
	case 12:
		rowone[3] = 'D';
		rowone[4] = 'E';
		break;
	case 13:
		rowone[6] = 'D';
		rowone[7] = 'E';
		break;
	case 14:
		rowone[9] = 'D';
		rowone[10] = 'E';
		break;
	case 15:
		rowone[12] = 'D';
		rowone[13] = 'E';
		break;
	case 16:
		rowone[15] = 'D';
		rowone[16] = 'E';
		break;
	case 17:
		rowone[18] = 'D';
		rowone[19] = 'E';
		break;
	case 18:
		rowone[21] = 'D';
		rowone[22] = 'E';
		break;
	case 21:
		rowtwo[0] = 'D';
		rowtwo[1] = 'E';
		break;
	case 22:
		rowtwo[3] = 'D';
		rowtwo[4] = 'E';
		break;
	case 23:
		rowtwo[6] = 'D';
		rowtwo[7] = 'E';
		break;
	case 24:
		rowtwo[9] = 'D';
		rowtwo[10] = 'E';
		break;
	case 25:
		rowtwo[12] = 'D';
		rowtwo[13] = 'E';
		break;
	case 26:
		rowtwo[15] = 'D';
		rowtwo[16] = 'E';
		break;
	case 27:
		rowtwo[18] = 'D';
		rowtwo[19] = 'E';
		break;
	case 28:
		rowtwo[21] = 'D';
		rowtwo[22] = 'E';
		break;
	case 31:
		rowthree[0] = 'D';
		rowthree[1] = 'E';
		break;
	case 32:
		rowthree[3] = 'D';
		rowthree[4] = 'E';
		break;
	case 33:
		rowthree[6] = 'D';
		rowthree[7] = 'E';
		break;
	case 34:
		rowthree[9] = 'D';
		rowthree[10] = 'E';
		break;
	case 35:
		rowthree[12] = 'D';
		rowthree[13] = 'E';
		break;
	case 36:
		rowthree[15] = 'D';
		rowthree[16] = 'E';
		break;
	case 37:
		rowthree[18] = 'D';
		rowthree[19] = 'E';
		break;
	case 38:
		rowthree[21] = 'D';
		rowthree[22] = 'E';
		break;
	case 41:
		rowfour[0] = 'D';
		rowfour[1] = 'E';
		break;
	case 42:
		rowfour[3] = 'D';
		rowfour[4] = 'E';
		break;
	case 43:
		rowfour[6] = 'D';
		rowfour[7] = 'E';
		break;
	case 44:
		rowfour[9] = 'D';
		rowfour[10] = 'E';
		break;
	case 45:
		rowfour[12] = 'D';
		rowfour[13] = 'E';
		break;
	case 46:
		rowfour[15] = 'D';
		rowfour[16] = 'E';
		break;
	case 47:
		rowfour[18] = 'D';
		rowfour[19] = 'E';
		break;
	case 48:
		rowfour[21] = 'D';
		rowfour[22] = 'E';
		break;
	case 51:
		rowfive[0] = 'D';
		rowfive[1] = 'E';
		break;
	case 52:
		rowfive[3] = 'D';
		rowfive[4] = 'E';
		break;
	case 53:
		rowfive[6] = 'D';
		rowfive[7] = 'E';
		break;
	case 54:
		rowfive[9] = 'D';
		rowfive[10] = 'E';
		break;
	case 55:
		rowfive[12] = 'D';
		rowfive[13] = 'E';
		break;
	case 56:
		rowfive[15] = 'D';
		rowfive[16] = 'E';
		break;
	case 57:
		rowfive[18] = 'D';
		rowfive[19] = 'E';
		break;
	case 58:
		rowfive[21] = 'D';
		rowfive[22] = 'E';
		break;
	case 61:
		rowsix[0] = 'D';
		rowsix[1] = 'E';
		break;
	case 62:
		rowsix[3] = 'D';
		rowsix[4] = 'E';
		break;
	case 63:
		rowsix[6] = 'D';
		rowsix[7] = 'E';
		break;
	case 64:
		rowsix[9] = 'D';
		rowsix[10] = 'E';
		break;
	case 65:
		rowsix[12] = 'D';
		rowsix[13] = 'E';
		break;
	case 66:
		rowsix[15] = 'D';
		rowsix[16] = 'E';
		break;
	case 67:
		rowsix[18] = 'D';
		rowsix[19] = 'E';
		break;
	case 68:
		rowsix[21] = 'D';
		rowsix[22] = 'E';
		break;
	case 71:
		rowseven[0] = 'D';
		rowseven[1] = 'E';
		break;
	case 72:
		rowseven[3] = 'D';
		rowseven[4] = 'E';
		break;
	case 73:
		rowseven[6] = 'D';
		rowseven[7] = 'E';
		break;
	case 74:
		rowseven[9] = 'D';
		rowseven[10] = 'E';
		break;
	case 75:
		rowseven[12] = 'D';
		rowseven[13] = 'E';
		break;
	case 76:
		rowseven[15] = 'D';
		rowseven[16] = 'E';
		break;
	case 77:
		rowseven[18] = 'D';
		rowseven[19] = 'E';
		break;
	case 78:
		rowseven[21] = 'D';
		rowseven[22] = 'E';
		break;
	case 81:
		roweight[0] = 'D';
		roweight[1] = 'E';
		break;
	case 82:
		roweight[3] = 'D';
		roweight[4] = 'E';
		break;
	case 83:
		roweight[6] = 'D';
		roweight[7] = 'E';
		break;
	case 84:
		roweight[9] = 'D';
		roweight[10] = 'E';
		break;
	case 85:
		roweight[12] = 'D';
		roweight[13] = 'E';
		break;
	case 86:
		roweight[15] = 'D';
		roweight[16] = 'E';
		break;
	case 87:
		roweight[18] = 'D';
		roweight[19] = 'E';
		break;
	case 88:
		roweight[21] = 'D';
		roweight[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	}

printf(rowonetwo);  /* Displays P1s ships positions */
	printf(rowtwotwo);
	printf(rowthreetwo);
	printf(rowfourtwo);
	printf(rowfivetwo);
	printf(rowsixtwo);
	printf(rowseventwo);
	printf(roweighttwo);
	printf(rowninetwo);
	printf(rowtentwo);
	getche();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("These are the posible positions: \n");
    printf("11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19 ,110\n");
	printf("21 ,22 ,23 ,24 ,25 ,26 ,27 ,28 ,29 ,210\n");
	printf("31 ,32 ,33 ,34 ,35 ,36 ,37 ,38 ,39 ,310\n");
	printf("41 ,42 ,43 ,44 ,45 ,46 ,47 ,48 ,49 ,410\n");
	printf("51 ,52 ,53 ,54 ,55 ,56 ,57 ,58 ,59 ,510\n");
	printf("61 ,62 ,63 ,64 ,65 ,66 ,67 ,68 ,69 ,610\n");
	printf("71 ,72 ,73 ,74 ,75 ,76 ,77 ,78 ,79 ,710\n");
	printf("81 ,82 ,83 ,84 ,85 ,86 ,87 ,88 ,89 ,810\n");
    printf("91 ,92 ,93 ,94 ,95 ,96 ,97 ,98 ,99 ,910\n");
    printf("101 ,102 ,103 ,104 ,105 ,106 ,107 ,108 ,109 ,1010\n");
    printf("(5 spaces)Player 2 enter your Destroyers's poition: \n");
    printf("position1: ");
	scanf("%d", &destroyponetwo);
	printf("position2: ");
	scanf("%d", &destroyptwotwo);
	printf("position3: ");
	scanf("%d", &destroypthreetwo);
	printf("position4: ");
	scanf("%d", &destroypfourtwo);
    printf("position5: ");
	scanf("%d", &destroypfivetwo);
	printf("(5 spaces)Enter your Air craft carier's poition: \n");
	printf("position1: ");
	scanf("%d", &airponetwo);
	printf("position2: ");
	scanf("%d", &airptwotwo);
	printf("position3: ");
	scanf("%d", &airpthreetwo);
	printf("position4: ");
	scanf("%d", &airpfourtwo);
	printf("position5: ");
	scanf("%d", &airpfivetwo);
	printf("Here is your board: \n");
switch(airpone) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(airptwo) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(airpthree) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(airpfour) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(airpfive) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;

		printf("Error342.  Restart.");
		break;
	}
	switch(destroypone) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(destroyptwo) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(destroypthree) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	}

switch(destroypfour) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	}
switch(destroypfive) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;

		printf("Error342.  Restart.");
		break;
	printf(rowonetwo); /* Prints P2 ships positions */
	printf(rowtwotwo);
	printf(rowthreetwo);
	printf(rowfourtwo);
	printf(rowfivetwo);
	printf(rowsixtwo);
	printf(rowseventwo);
	printf(roweighttwo);
	}
}
