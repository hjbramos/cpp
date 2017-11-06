#include <iostream>
#include <string>

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y, double z)
{
	return x + y + z;
	// or return add(add(a,b),c) //warn: loss information
}

int main()
{
    //std::string name;
    //std::cout << "Enter a name: ";
    //std::cin >> name;
    //std::cout << "Your name is " << name << std::endl;
	//std::cin.get();

	int choice;
	int answer = 7;
	bool playing = true;

	while (playing)
	{
		std::cout << "Enter a number: " << std::endl;
		std::cin >> choice;
		if (choice == answer)
		{
			std::cout << "Correct." << std::endl;
			std::cout << "1 + 7 = " << add(1, answer);
			playing = false;
		}
		if (choice < answer) 
		{
			std::cout << "Too low." << std::endl;
		}
		if (choice > answer)
		{
			std::cout << "Too high." << std::endl;
		}
	}

    return 0;
}