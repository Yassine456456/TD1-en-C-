#include <iostream>
#include "my_class.h"

my_class::my_class()
{
    element = "";
}

my_class::my_class(std::string valeur)
{
    element = valeur;
}

void my_class::print_my_element()
{
    std::cout << element << std::endl;
}