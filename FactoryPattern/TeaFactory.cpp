#include "stdafx.h"
#include "TeaFactory.h"
#include <map>

TeaFactory::TeaFactory()
{
}


TeaFactory::~TeaFactory()
{
}

std::unique_ptr<HotDrink> TeaFactory::make() const
{
	return std::make_unique<Tea>();
}
