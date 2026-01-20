#include <iostream>
#include <iomanip>

int main()
{
    std::string str = "hello world";
    if (str.size()>4)
        std::cout<<str.substr(0,9)<<"."<<"\n";
    // std::cout <<std::setw(10)<< "Index" << "|"
	// 	  << std::setw(10) << "First Name" << "|"
	// 	  << std::setw(10) << "Last Name" << "|"
	// 	  << std::setw(10) << "Nickname" << "\n";

    //       std::cout <<std::setw(10)<< "1" << "|"
	// 	  << std::setw(10) << "ehsan" << "|"
	// 	  << std::setw(10) << "talash" << "|"
	// 	  << std::setw(10) << "ehsii" << std::endl;
}