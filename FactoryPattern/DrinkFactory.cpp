#include "stdafx.h"
#include "DrinkFactory.h"


DrinkFactory::DrinkFactory()
{
	hot_factories["coffee"] = make_unique<CoffeeFactory>();
	hot_factories["tea"] = make_unique<TeaFactory>();
}


DrinkFactory::~DrinkFactory()
{
}

unique_ptr<HotDrink> DrinkFactory::make_drink(const string & name, int volume)
{
	auto drink = hot_factories[name]->make(); // make the drink
	drink->prepare(volume);
	return drink;
}
