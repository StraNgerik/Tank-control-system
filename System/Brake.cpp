#include <iostream>
#include "Brake.h"

Brake::Brake()
{
    is_applied = false;
}

void Brake::Apply()
{
    is_applied = true;
    std::cout << "Brake applied" << std::endl;
}

void Brake::DisApply()
{
    is_applied = false;
    std::cout << "Brake denied" << std::endl;
}
