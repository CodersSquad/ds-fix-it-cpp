#
# Credit to <jshafferman>(https://cplusplus.com/user/jshafferman/)
# Source obtained from: https://cplusplus.com/forum/general/90347/
#
#

// in the main before call to deal
const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

const char *face[13] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
			                "Ten", "Jack", "Queen", "King"};
// ... end main

void deal(int wDeck[][13], const char *wFace[], const char *wSuit[])
{
     char hand[2][5][15] = {{""}};

	for(int handNumber = 0; handNumber < 2; handNumber++)
	{
		for(int cardNumber = 1; cardNumber <= 5; cardNumber++)
		{
			int row = rand() % 4;
			int column = rand() % 13;

			while(wDeck[row][column] == 0)
			{
				row = rand() % 4;
				column = rand() % 13;
			}

			wDeck[row][column] = 0;

			char description[14] = "";

			strcat(description, wFace[column]);
			strcat(description, " ");
			strcat(description, wSuit[row]);

			strcpy(hand[handNumber][cardNumber - 1], description);
			
			cout << hand[handNumber][cardNumber - 1] << endl;
		}

		cout << "=======================\n";
	}
}
