#include <iostream>
#include "Animal.h"
#include "Frisian.h"
#include "Cow.h"
#include "Sheep.h"
#include <vector>

using namespace std;

int main()
{
	vector<Animals*> container; //stores the chosen animals here

	int number_of_objects;
	int number_of_sheep = 0;
	int number_of_cows = 0;
	int number_of_Frisians = 0;

	cout << "Enter how many sheep you want: ";
	cin >> number_of_sheep; //stores the number of sheep wanted by the user

	cout << "Enter how many cows you want: ";
	cin >> number_of_cows; //stores the number of sheep wanted by the user

	cout << "Enter how many Frisians you want: ";
	cin >> number_of_Frisians; //stores the number of Frisians wanted by the user

		//int user_choice; //stores the users choice of animals here
		//cout << "Select the animal of your choice: 1. Sheep , 2. Cow, 3. Frisian cow \n";
			//cin >> user_choice;

		Animals* animal;

		//if (user_choice == 1) //based on the users choice it adds to the vector depending on how many animals want to be added
		//{
			//animal = new Sheep();
		//}
		//else if (user_choice == 2)
		//{
			//animal = new Cow();
		//}
		//else if ( user_choice == 3)
		//{
			//animal = new Frisian();
		//}
		//else
		//{
			//cout << "that is not a selected output";
		//} 
		if (number_of_cows > 0)
		{
			for (int a = 0; a < number_of_cows; ++a)
			{
				animal = new Cow();
				container.push_back(animal);
			}
		}
		if (number_of_sheep > 0)
		{
			for (int b = 0; b < number_of_sheep; ++b)
			{
				animal = new Sheep();
				container.push_back(animal);
			}
		}
		if (number_of_Frisians > 0)
		{
			for (int z = 0; z < number_of_Frisians; ++z)
			{
				animal = new Frisian();
				container.push_back(animal);
			}
		}



	



	for (int r = 0; r < container.size(); r++) //iterates through the vector and calls the speak command for every animal in the vector
	{
		container[r]->speak();

	}

	return 0;
}



