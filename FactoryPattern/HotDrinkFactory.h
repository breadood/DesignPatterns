#pragma once
#include <memory>
#include "HotDrink.h"

class HotDrinkFactory
{
public:
	HotDrinkFactory();
	virtual ~HotDrinkFactory();
	virtual std::unique_ptr<HotDrink> make() const = 0;
};