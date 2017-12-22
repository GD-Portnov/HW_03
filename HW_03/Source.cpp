//Actual source file on Git Hub:
//https://github.com/GD-Portnov/HW_03/blob/master/HW_03/Source.cpp

#include<iostream>
#include<math.h>

int main()
{
	int choice = 0;
	std::cout << "Enter number of task:\n1. Show simple numbers in range from 2 to 1000\n2. Draw a square\n3. Show a calendar of current month\n";
	std::cout << "4. Show inverted sequance of values in array\n5. Sum of odd and sum of even elements of array\n";
	std::cout << "6. Find identic values in array\n7. Show minimal odd value in array\n";
	std::cin >> choice;

	switch (choice)
	{

		case 1:
		{
			for (int number = 2; number < 1000; ++number)
			{
				for (int j = 0; j < 10; j++)
				{
					bool simple = true;
					for (int i = 2; i < std::sqrt(number) + 1; ++i)
						if (number%i == 0)
						{
							simple = false;
							break;
						}

					if (simple)
						std::cout << number << "\t";
				}
				std::cout << std::endl;
			}
		}
		break;

		case 2:
		{
			int height = 0;
			int width = 0;
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
						std::cout << "*";
				}


				std::cout << "\n";
			}
		}
		break;

		case 3:
		{   int offset = 4;
			std::cout << "MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n";
			for (int i = 1; i < 32+offset; i++)
			{
				if (i <= offset)
					std::cout << " " << "\t";
				else
				std::cout << i-offset << "\t";

				if (i % 7 == 0)
				std::cout << "\n";
			}
			std::cout<< std::endl;
		}
		break;

		case 4:
		{
			int array[10];
			for (int i = 0; i < 10; i++)
			{
				std::cout << "Enter value of element [" << (i + 1) << "]\n";
				std::cin >> array[i];
			}
			std::cout << "Inverеd sequence of elements in your array:\n";
			for (int j = 9; j >= 0; j--)
			{
				std::cout << array[j] << "\t";
			}
			std::cout << "\n";
		}
		break;

		case 5:
		{
			int array[10];
			for (int i = 0; i < 10; i++)
			{
				std::cout << "Enter value of element [" << (i + 1) << "]\n";
				std::cin >> array[i];
			}
			int sum_odd = 0;
			int	sum_even = 0;
			for (int i = 0; i < 10; i++)
			{
				if (array[i] % 2 == 0)
					sum_even += array[i];
				else
					sum_odd += array[i];
			}
			std::cout << "Sum of odd elements = " << sum_odd << "\n";
			std::cout << "Sum of even elements = " << sum_even << "\n";
		}
		break;

		case 6:
		{
			int array[10];
			for (int i = 0; i < 10; i++)
			{
				std::cout << "Enter value of element [" << (i + 1) << "]\n";
				std::cin >> array[i];
			}
		
		
			for (int i = 0; i < 10; i++)
			{
				int sum = 0;
				for (int j = 0; j < 10; j++)
				{

					if (array[i] - array[j] == 0)
						sum += 1;
				}
				if (sum > 1)
					std::cout << "Element [" << i+1 << "] appears " << sum << " times in array.\n";
			}

		}
		break;

		case 7:
		{
			int array[10];
			int min_odd = 0;
			for (int i = 0; i < 10; i++)
			{
				std::cout << "Enter value of element [" << (i + 1) << "]\n";
				std::cin >> array[i];
			}
			
			for (int i = 0; i < 10; i++)
			{
				if ((array[i] % 2) == 0)
					continue;
				min_odd = array[i];
			}

			if (min_odd!=0)
			{
			for (int i=0;i<10;i++)
				if (min_odd > array[i])
					min_odd = array[i];
					std::cout << "Minimal odd value in your array is " << min_odd << std::endl;
			}
			else
				std::cout << "There is no odd values in array!\n";
		}
		break;
	}
	system("pause");
	return 0;
	

}
