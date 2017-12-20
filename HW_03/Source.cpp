//
//

#include<iostream>
#include<math.h>

int main()
{


	//for (int number = 2; number < 1000; ++number)
	//{
	//	bool simple = true;
	//	for (int i = 2; i < std::sqrt(number)+1; ++i)
	//		if (number%i == 0)
	//		{
	//			simple = false;
	//			break;
	//		}
	//	
	//	if (simple)
	//		std::cout << number << std::endl;
	//}

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


	system("pause");
	return 0;
}
