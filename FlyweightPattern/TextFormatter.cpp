#include "stdafx.h"
#include "TextFormatter.h"


TextFormatter::TextFormatter(const string& plain_text) : 
	plain_text(plain_text)
{
}

TextFormatter::TextRange & TextFormatter::get_range(int start, int end)
{
	formatting.emplace_back(TextRange{ start, end, false });
	return *formatting.rbegin();
}

string TextFormatter::str() const
{
	string s;
	for (auto i = 0; i < plain_text.length(); ++i) {
		auto c = plain_text[i];
		for (auto& range : formatting) {
			if (range.covers(i) && range.cap) {
				c = toupper(c);
			}
		}
		s += c;
	}
	return s;
}
