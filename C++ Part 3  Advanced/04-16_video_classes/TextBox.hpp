#ifndef TEXT_BOX_HPP
# define TEXT_BOX_HPP

# include <iostream>

class TextBox
{
  private:
	std::string value;

  public:
  	TextBox();
	explicit TextBox(const std::string str);

	std::string getValue();
	void  setValue(const std::string &str);
};



#endif