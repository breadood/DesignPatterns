#include "stdafx.h"
#include "HtmlBuilder.h"

HtmlBuilder::HtmlBuilder(const string & root_name):
	root{root_name, ""}
{
}

HtmlBuilder::~HtmlBuilder()
{
}

HtmlBuilder& HtmlBuilder::add_child(const string & child_name, const string & child_text)
{
	root.addChild(child_name, child_text);
	return *this;
}

string HtmlBuilder::str() const
{
	return root.str();
}

HtmlBuilder HtmlBuilder::build(string root_name)
{
	return HtmlBuilder(root_name);
}

HtmlBuilder::operator HtmlElement() const
{
	return root;
}
