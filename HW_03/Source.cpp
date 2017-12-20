//
//

#include<iostream>
#include<math.h>

int main()
{
	int choice = 0;
	std::cout << "Enter number of task:";
	std::cin >> choice;

	switch (choice)
	{

	case 1:
	{
		for (int number = 2; number < 1000; ++number)
		{
			bool simple = true;
			for (int i = 2; i < std::sqrt(number) + 1; ++i)
				if (number%i == 0)
				{
					simple = false;
					break;
				}

			if (simple)
				std::cout << number << std::endl;
		}
	}
	break;

	case 2:
	{
		int height, width = 0;
		std::cout << "Enter height:\n";
		std::cin >> height;
		std::cout << "Enter width:\n";
		std::cin >> width;
		int i;
		for (i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if ((i != 0) && (i != height - 1) && (j != 0) && (j != width - 1))
					std::cout << " ";
				else
					std::cout << "%";
			}


			std::cout << "\n";
		}
	}
	break;

	case 3:
	{
		int month = 0;
		int cur_day = 0;
		int cur_date = 0;
		std::cin >> month;
		std::cin >> cur_day;
		std::cin >> cur_date;
		std::cout << "MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n";
		for (int j = 1; j <= month; j++)
		{
			for (int i = 1; i <= 7; i++)
			{
				std::cout << j;
			}
			std::cout << "\n";
		}
		
	}

	system("pause");
	return 0;
	}

}
