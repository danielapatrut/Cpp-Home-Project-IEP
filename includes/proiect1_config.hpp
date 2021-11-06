#ifndef PROIECT1DANIELA_CONFIG_HPP

#define PROIECT1DANIELA_CONFIG_HPP

#include <iostream>

#ifndef COPYRIGHT_INFO

#define COPYRIGHT_INFO "Copyright Daniela"

#endif



namespace proiect1daniela {


///\brief Text to get displayed

inline void version()

{

    std::cout << "Application " << "Proiect1daniela" << std::endl 

              << "Version " << "4.1" << std::endl 

              << COPYRIGHT_INFO << std::endl

              << std::endl;

}



} // namespace proiect1daniela



#endif // PROIECT1DANIELA_CONFIG_HPP