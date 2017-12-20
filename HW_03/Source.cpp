//
//

#include<iostream>
#include<math.h>

int main()
{
	int number=2;
	bool simple = true;
	for (; number < 1000; number++)
	{
		for (int i = 2; i < std::sqrt(number); i++)
		{
			if (number%i == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)
			std::cout << number << std::endl;
	}



	system("pause");
	return 0;
}
//using namespace std;
//int main() {
//	bool prime;
//	for (int i = 2; i<1000; i++) {
//		prime = true;
//		double sqrti = sqrt((double)i);
//		for (int j = 2; j<sqrti + 1; j++)
//			if (i%j == 0) {
//				prime = false;
//				break;
//			}
//		if (prime) cout << i <<;
//	}
//	
//	system("pause");
//	return 0;
//}