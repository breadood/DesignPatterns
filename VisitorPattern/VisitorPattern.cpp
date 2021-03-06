// VisitorPattern.cpp : Defines the entry point for the console application.
//
// A pattern where a component is allowed to traverse the
// entire inheritance hierarchy. Implemented by propagating
// a single visit() method throughout the entire hierarchy

// intrusive visitor: Add new feature in bas-class
// breaks open-close principle -> modifying existing class
// it would be difficult that if hierarchy is big
// also breaks single responsibility principle

// reflective visitor: Add a new class to deal with hierarchy
// not good because of dynamic casting. 
// does not scale well with with more dynamic types  
// does have seperation of concerns

#include "stdafx.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;
// Visitor pattern

struct DoubleExpression;
struct AdditionExpression;

struct ExpressionVisitor
{
	virtual void visit(DoubleExpression* de) = 0;
	virtual void visit(AdditionExpression* ae) = 0;
};



struct Expression
{
	virtual void accept(ExpressionVisitor* visitor) = 0;
};

struct DoubleExpression : Expression
{
	double value;

	DoubleExpression(double value) : value(value) {}

	void accept(ExpressionVisitor* visitor)
	{
		visitor->visit(this);
	}
};

struct AdditionExpression : Expression
{
	Expression* left, * right;

	AdditionExpression(Expression* left, Expression* right)
		: left(left), right(right) {}

	~AdditionExpression()
	{
		delete left;
		delete right;
	}

	void accept(ExpressionVisitor* visitor)
	{
		visitor->visit(this);
	}
};

struct ExpressionPrinter : ExpressionVisitor
{
	ostringstream oss;

	void visit(DoubleExpression* de)
	{
		oss << de->value;
	}

	void visit(AdditionExpression* ae)
	{
		oss << "(";
		ae->left->accept(this);
		oss << "+";
		ae->right->accept(this);
		oss << ")";
	}

	string str()
	{
		return oss.str();
	}
};

// We can easily add another visit for MinusExpression 
// by adding a method for ExpressionPrinter

// or add a ExpressionCalculator as a new visitor

int main()
{

	auto e = new AdditionExpression{
		new DoubleExpression{2},
		new AdditionExpression{
			new DoubleExpression{3},
			new DoubleExpression{5}
		}
	};

	ExpressionPrinter ep;
	ep.visit(e);

	cout << ep.str() << endl;

	delete e;
	system("pause");
    return 0;
}

