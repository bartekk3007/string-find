#include <iostream>
#include <string>

int main()
{
	std::string s1 = "Blood is thicker than water";
	std::string s2 = "water";

	std::size_t position = s1.find(s2);

	if (position != std::string::npos)
	{
		std::cout << s2 << " is on position " << position << '\n';
	}
	else
	{
		std::cout << "Not found\n";
	}

	int number = 5;
	std::string s3 = std::to_string(number);

	return 0;
}