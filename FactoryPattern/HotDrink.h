#pragma once
class HotDrink
{
public:
	HotDrink();
	virtual ~HotDrink();
	virtual void prepare(int volume) = 0;
	virtual void drink() = 0;
};

