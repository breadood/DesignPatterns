#include "stdafx.h"
#include "HtmlElement.h"


HtmlElement::HtmlElement()
{
}

HtmlElement::HtmlElement(const string & name, const string & text) :
name(name), text(text) 
{
}


HtmlElement::~HtmlElement()
{
}

string HtmlElement::str(int indent) const
{
	string output = "";
	string indent_space = string(indent_size * (indent), ' ');
	output += (indent_space + "<" + name + ">\n");
	if (text.size() > 0)
		output += (string(indent_size * (indent + 1), ' ') + text + "\n");
	for (const auto &e : elements) {
		output += e.str(indent + 1);
	}
	output += (indent_space + "</" + name + ">\n");
	return output;
}

void HtmlElement::addChild(const string & child_name, const string & child_text)
{
	HtmlElement e{ child_name, child_text };
	elements.emplace_back(e);
}
