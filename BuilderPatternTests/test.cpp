#include "pch.h"
#include "../BuilderPattern/HtmlBuilder.h"
#include <string>

TEST(BuilderPattern, TestHtmlBuilder) {
	auto builder = HtmlBuilder::build("ul")
		.add_child("li", "item1")
		.add_child("li", "item2");

	auto result = "<ul>\n  <li>\n    item1\n</li>\n  <li>\n    item2\n</li>\n</ul>\n";

	EXPECT_EQ(result, builder.str());
}