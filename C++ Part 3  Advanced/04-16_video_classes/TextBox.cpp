#include "TextBox.hpp"

TextBox::TextBox()
{
}

TextBox::TextBox(const std::string str) : value(str)
{
	//this->setValue(str);  //se nao tiver o : value(str) -- member initializer
}


void TextBox::setValue(const std::string &str)
{
	this->value = str;
}

std::string TextBox::getValue()
{
	return (std::string(this->value));
}