#include <iostream>

using namespace std;

class Vader
{
	// se accesa desde donde sea
	public:
		double stamina;
		Vader();
		Vader(double stamina, int darkside);
		int getAngry();

	// solo se accesa en herencia
	protected:
		int kindness;

	// solo lo accesa el objeto
	private:
		int darkside;
		void increaseLevel();
};

Vader :: Vader()
{
	stamina = 100;
	darkside = 1000;
}

Vader :: Vader(double stamina, int darkside)
{
	this->stamina = stamina;
	this->darkside = darkside;
}

int Vader :: getAngry()
{
	increaseLevel();
	return darkside;
}

void Vader :: increaseLevel()
{
	darkside *= 2;
}



class Luke : public Vader
{
	private:
		int yodaMojo;
	
	protected:
		int lukeMojo;
	
	public:
		Luke()
		{
			yodaMojo = 10000;
			kindness = 4000;
			stamina = 5000;
			lukeMojo = 300;
		}
		
		Luke(double stamina, int darkside, int yodaMojo) : Vader(stamina, darkside)
		{
			this->yodaMojo = yodaMojo;
			kindness = 3;
			lukeMojo = 30;
		}

		void printLuke()
		{
			cout << stamina << "," << kindness << "," << yodaMojo << endl;
		}

};
