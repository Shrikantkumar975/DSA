#include <iostream>
#include <string>

class Person {


int main() {
  Person person;

  person.setName("Saveli Sujatha");
  person.setAge(25);
  person.setCountry("USA");

  std::cout << "Name: " << person.getName() << std::endl;
  std::cout << "Age: " << person.getAge() << std::endl;
  std::cout << "Country: " << person.getCountry() << std::endl;

  return 0;
}

//OUTPUT
// Name: Saveli Sujatha
// Age: 25
// Country: USA
