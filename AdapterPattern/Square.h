#pragma once
class Square
{
public:
	explicit Square(const int side);
	~Square();
	int get_side() const;
private:
	int side{0};
};


