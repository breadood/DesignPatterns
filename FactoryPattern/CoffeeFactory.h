#pragma once
#include "HotDrinkFactory.h"
#include "Coffee.h"
class CoffeeFactory :
	public HotDrinkFactory
{
public:
	CoffeeFactory();
	~CoffeeFactory();
	std::unique_ptr<HotDrink> make() const override;
};
