// Christopher Hanna CSB150B
// A program to play blackjack

#include <iostream>
#include <cstdlib>		// For rand and srand
#include <ctime>		// For the time function
using namespace std;

int
main ()
{
  char playAgain = 'y';
  while (playAgain == 'y' || playAgain == 'Y')
    {
      // Constants
      const int MIN_VALUE = 1;
      const int MAX_VALUE = 10;

      // Variables
      int draw1;		// The value of the first card
      int draw2;		// The value of the second card
      int drawSum;		// The total of the first and second card
      int draw3;		// The value of the next card drawn
      int drawSum2;		// The total of the cards
      char drawAgain;		// The option to draw the cards again
   

      // Get the system time.
      unsigned seed = time (0);

      // Seed the random number generator.
      srand (seed);

      {
	char retry = 'y';
	while (retry == 'y' || retry == 'Y')
	  {
	    cout << "The first cards are:" << endl;
	    draw1 = (rand () % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	    draw2 = (rand () % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	    cout << draw1 << " & " << draw2 << endl;
	    drawSum = (draw1 + draw2);
	    cout << "The total is: " << endl;
	    cout << drawSum << endl;


	    while (drawSum < 21)
	      {
		cout << "Do you want another card? (y/n): \n";
		cin >> drawAgain;
		if (drawAgain == 'y' || drawAgain == 'Y')
		  {
		    draw3 =
		      (rand () % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		    cout << "Your card is: " << endl;
		    cout << draw3 << endl;
		    cout << "The total of the cards is:" << endl;
		    cout << (draw3 + drawSum) << endl;
		    drawSum = (draw3 + drawSum);

		    if (drawSum > 21)
		      {
			cout << "BUST. You went over 21. Dealer wins. \n";
			cout << "Would you like to play again? (y/n): " <<
			  endl;
			cin >> retry;
		      }
		    else if (drawSum == 21)
		      {
			cout << "You won! \n";
			cout << "Would you like to play again? (y/n): " <<
			  endl;
			cin >> retry;
		      }

		  }

		else if (drawAgain == 'n' || drawAgain == 'N')
		  {
		    cout << "You didn't want to draw again. \n";
		    cout << "Would you like to play again? (y/n): " << endl;
		    cin >> retry;
		  }

		else
		  {
		    cout << "Please type y or n next time. \n" << endl;
		  }

	      }


	  }


      }

      return 0;
    }
}


/* sample output:
CH-MBP:~ christopherh$ ./a.out
The first cards are:
9 & 10
The total is: 
19
Do you want another card? (y/n): 
y
Your card is: 
3
The total of the cards is:
22
BUST. You went over 21. Dealer wins. 
Would you like to play again? (y/n): 
y
The first cards are:
8 & 9
The total is: 
17
Do you want another card? (y/n): 
n
You didn't want to draw again. 
*/