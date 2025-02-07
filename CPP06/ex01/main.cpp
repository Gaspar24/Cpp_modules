#include "Serializer.hpp"
#include "Data.hpp"



int main(void){


	Data data;
	data.grade = 1;
	data.name = "test";

	std::cout << "name: " + data.name << " has the grade: " << data.grade << std::endl;
	std::cout << "-----------------------------\n";

	std::cout << "Original Data pointer: " << &data << std::endl;

	std::cout << "-----------------------------\n";

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized: " << raw << std::endl;
	std::cout << "-----------------------------\n";
	Data *ptr = Serializer::deserialize(raw);

	std::cout << "Deserialized Data pointer: " << ptr << std::endl;
	std::cout << "-----------------------------\n";

	if (ptr == &data)
		std::cout << "success: pointers match!" << std::endl;
	else
		std::cout << "error: pointeres don t match!" << std::endl;
	return 0;
}