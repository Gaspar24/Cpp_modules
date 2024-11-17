
#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		std::cout << "you need to insert 1 complain as a parameter!" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	for(size_t i = 0; i < level.length(); i++)
	{
		level[i] = (char)std::toupper(level[i]);
	}
	Harl pula;

	pula.complain(level);
	return 0;
}