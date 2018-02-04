#include "stdafx.h"
#include "CoffeeFactory.h"


CoffeeFactory::CoffeeFactory()
{
}


CoffeeFactory::~CoffeeFactory()
{
}

std::unique_ptr<HotDrink> CoffeeFactory::make() const
{
	return std::make_unique<Coffee>();
}
