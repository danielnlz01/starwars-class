#include <iostream>
#include "Starwars.h"

using namespace std;

int main() 
{
	// creating object
  Vader vader = Vader();

	// private not accessible
	/*cout << vader.darkside << endl;
	vader.increaseLevel();*/

	// attributos públicos
	vader.stamina -= 3;
	cout << vader.getAngry() << endl;

	//protected no se puede por fuera



	Vader salinas = Vader(50, 5000);

	Luke luke = Luke();
	luke.printLuke();

	Luke luke1 = Luke(30, 40, 50);
	luke1.printLuke();

	cout << luke1.getAngry() << endl;
}