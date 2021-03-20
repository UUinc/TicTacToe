#include <stdio.h>
	
	
	void main(){
		
		int pos,x,y,i,j,c=0,check=0,choice,repeat=0;
		char toc[10][21]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					 	  {' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
					   	  {' ',' ',' ',' ',' ','1',' ',' ','|',' ',' ','2',' ',' ','|',' ',' ','3',' ',' ',' '},
					 	  {' ',' ',' ','_','_','_','_','_','|','_','_','_','_','_','|','_','_','_','_','_',' '},
					  	  {' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
					  	  {' ',' ',' ',' ',' ','4',' ',' ','|',' ',' ','5',' ',' ','|',' ',' ','6',' ',' ',' '},
					 	  {' ',' ',' ','_','_','_','_','_','|','_','_','_','_','_','|','_','_','_','_','_',' '},
					 	  {' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
					  	  {' ',' ',' ',' ',' ','7',' ',' ','|',' ',' ','8',' ',' ','|',' ',' ','9',' ',' ',' '},
					 	  {' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
						  };
		char win,checkxo,enter;
	do{		
		do{
			printf("tic Toc\n\n\n");
			printf("Menu  : \n\n");
			printf("1.Play \n\n2.Instruction\n\n3.Exit\n\n\n");
			printf("type your choice : ");
			scanf("%d",&choice);
			system("cls");
	
		}
		while(!(choice>0 && choice<4));
		
		if(choice == 1){
			
			system("cls");
			
		//		Show begin
		
			for(i=0;i<10;++i){
			
				for(j=0;j<22;++j){
				
					printf("%c",toc[i][j]);
				
				}
					printf("\n");
			}	
		
		//		Show end

		//		Display & input 

			do {
		
				printf("\n\nPosition : ");
				scanf("%d",&pos);
			
				while(!(pos>0 && pos<10)){
				
					printf("\npostion invalid");
					printf("\n\nPosition : ");
					scanf("%d",&pos);
				}
			
		//			Traitement place position 
			
			switch (pos){
				
				case 1 : 
						x = 2;
						y = 5;
						break;
				case 2 : 
						x = 2;
						y = 11;
						break;
				case 3 : 
						x = 2;
						y = 17;
						break;
				case 4 : 
						x = 5;
						y = 5;
						break;
				case 5 : 
						x = 5;
						y = 11;
						break;
				case 6 : 
						x = 5;
						y = 17;
						break;	
				case 7 : 
						x = 8;
						y = 5;
						break;
				case 8 : 
						x = 8;
						y = 11;
						break;
				case 9 : 
						x = 8;
						y = 17;
						break;	
			}
			
			
//			T P P end
			while(toc[x][y] == 'O' || toc[x][y] == 'X'){
				
				printf("\npostion full");
				printf("\n\nPosition : ");
				scanf("%d",&pos);
				
				switch (pos){
				
					case 1 : 
							x = 2;
							y = 5;
							break;
					case 2 : 
							x = 2;
							y = 11;
							break;
					case 3 : 
							x = 2;
							y = 17;
							break;
					case 4 : 
							x = 5;
							y = 5;
							break;
					case 5 : 
							x = 5;
							y = 11;
							break;
					case 6 : 
							x = 5;
							y = 17;
							break;	
					case 7 : 
							x = 8;
							y = 5;
							break;
					case 8 : 
							x = 8;
							y = 11;
							break;
					case 9 : 
							x = 8;
							y = 17;
							break;	
				}
			}
			
			if(c == 0){
				
				printf("\nTaper 'O' or 'X' : ");
				scanf(" %c",&toc[x][y]);
				checkxo = toc[x][y];
			
				while(!(toc[x][y] == 'O' || toc[x][y] == 'X')){
				
					printf("\nTaper 'O' or 'X' : ");
					scanf(" %c",&toc[x][y]);
			
				}
			}
			else{
				
				if(checkxo == 'X'){
					
					toc[x][y] = 'O';
					checkxo = 'O';
					
				}
				else {
					
					toc[x][y] = 'X';
					checkxo = 'X';
					
				}
		
			} 	
				
			printf("\n\n");
			
			system("cls");	
			
		//	Show begin
		
			for(i=0;i<10;++i){
			
				for(j=0;j<22;++j){
				
					printf("%c",toc[i][j]);
				
				}
				printf("\n");
			}
		
		//	Show end
			
			c++;
		
			//	Traitement 
		
				if(c>=5){
				
					if ((toc[2][5] == toc[2][11]) && (toc[2][11] == toc[2][17])){
	
						win = toc[2][5];		
						c = 9;
						check = 1;
		
	
					}

					else if ((toc[5][5] == toc[5][11]) && (toc[5][11] == toc[5][17])){
	
						win = toc[5][5];
						c = 9;
						check = 1;
						
	
					}

					else if ((toc[8][5] == toc[8][11]) && (toc[8][11] == toc[8][17])){
	
						win = toc[8][5];
						c = 9;
						check = 1;
				
					}			

					else if ((toc[2][5] == toc[5][5]) && (toc[5][5] == toc[8][5])){
	
						win = toc[2][5];
						c = 9;
						check = 1;
	
					}

					else if ((toc[2][11] == toc[5][11]) && (toc[5][11] == toc[8][11])){
	
						win = toc[2][11];
						c = 9;
						check = 1;
					
					}

					else if ((toc[2][17] == toc[5][17]) && (toc[5][17] == toc[8][17])){
			
						win = toc[2][17];
						c = 9;
						check = 1;
					
					}
	
					else if ((toc[2][5] == toc[5][11]) && (toc[5][11] == toc[8][17])){
	
						win = toc[2][5];
						c = 9;
						check = 1;
					
					}

					else if ((toc[2][17] == toc[5][11]) && (toc[5][11] == toc[8][5])){
	
						win = toc[2][17];
						c = 9;
						check = 1;
					
					}

				
				}
 			//	Traitement ends
		
			}
			while(c!=9);
		
		//	Display & input ends

			if(check == 1)
				printf("\n\n%c WIN ",win);
			else
				printf("\n\nDraw ");
				
			getch();
			
		}
		
		else if(choice == 2){
			
			system("cls");
			
			printf("\nWelcome to Tic Tac Toc AKA 'XO' : \n");
			
			//		Show begin
		
			for(i=0;i<10;++i){
			
				for(j=0;j<22;++j){
				
					printf("%c",toc[i][j]);
				
				}
					printf("\n");
			}	
		
			//		Show end
			
			printf("\n\nTo play you need to choose a position and write the number position in the next message \n");
		
			printf("\n\nPosition : ");
			scanf("%d",&pos);
	
			while(!(pos>0 && pos<10)){
				
				printf("\npostion invalid");
				printf("\n\nPosition : ");
				scanf("%d",&pos);
				
				}
			switch (pos){
				
				case 1 : 
						x = 2;
						y = 5;
						break;
				case 2 : 
						x = 2;
						y = 11;
						break;
				case 3 : 
						x = 2;
						y = 17;
						break;
				case 4 : 
						x = 5;
						y = 5;
						break;
				case 5 : 
						x = 5;
						y = 11;
						break;
				case 6 : 
						x = 5;
						y = 17;
						break;	
				case 7 : 
						x = 8;
						y = 5;
						break;
				case 8 : 
						x = 8;
						y = 11;
						break;
				case 9 : 
						x = 8;
						y = 17;
						break;	
			}
			
			printf("\n\nAfter that you will need to choose one time to play with 'X' or 'O' Remember in MAJ \n");
			
			printf("\nTaper 'O' or 'X' : ");
			scanf(" %c",&toc[x][y]);
			
			while(!(toc[x][y] == 'O' || toc[x][y] == 'X')){
				
				printf("\nOps Re-enter X or O in MAJ : ");
				scanf(" %c",&toc[x][y]);
			
			}
			
			system("cls");
			
			//		Show begin 2
		
			for(i=0;i<10;++i){
			
				for(j=0;j<22;++j){
				
					printf("%c",toc[i][j]);
				
				}
					printf("\n");
			}	
			
			toc[2][5] = '1';
			toc[2][11] = '2';
			toc[2][17] = '3';
			toc[5][5] = '4';
			toc[5][11] = '5';
			toc[5][17] = '6';
			toc[8][5] = '7';
			toc[8][11] = '8';
			toc[8][17] = '9';
			
			//		Show end 2
			
			printf("\n\nAfter you know how to play ,Now you'll need to know how to win \n");
			printf("its easy you should have 3 X or O in same way like those : (ENTER)\n\n");
			scanf("%c%c",&enter,&enter);
			
			while(repeat != 3){
				
				if(repeat == 0){
					
					toc[2][5] = 'X';
					toc[2][11] = 'X';
					toc[2][17] = 'X';
					
					repeat = 1;
				}
				else if(repeat == 1){
					
					toc[2][5] = 'X';
					toc[5][5] = 'X';
					toc[8][5] = 'X';
					
					repeat = 2;
				}
				else if(repeat == 2){
					
					toc[2][5] = 'X';
					toc[5][11] = 'X';
					toc[8][17] = 'X';
					
					repeat = 3;
				}
				
				for(i=0;i<10;++i){
			
					for(j=0;j<22;++j){
				
						printf("%c",toc[i][j]);
				
					}
					printf("\n");
				}
				toc[2][5] = '1';
				toc[2][11] = '2';
				toc[2][17] = '3';
				toc[5][5] = '4';
				toc[5][11] = '5';
				toc[5][17] = '6';
				toc[8][5] = '7';
				toc[8][11] = '8';
				toc[8][17] = '9';
			}
				
		
			//		Show end 2
			getch();
			
		}
		else if(choice == 3){
			printf("\n\nby :Lazrek Yahya");
			printf("\n\nVersion 3.0\n\n\n");
			getch();
		}
	
		toc[2][5] = '1';
				toc[2][11] = '2';
				toc[2][17] = '3';
				toc[5][5] = '4';
				toc[5][11] = '5';
				toc[5][17] = '6';
				toc[8][5] = '7';
				toc[8][11] = '8';
				toc[8][17] = '9';
				
		
	
		system("cls");
		
	}
	while(choice != 3);	

	}
