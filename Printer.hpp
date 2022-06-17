#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <iosfwd>

template < typename LetterGetter>
class Printer
{
public:
    Printer(LetterGetter letterGetter): letter_(letterGetter){};
    std::ostream& operator()(std::ostream&);
private:
    LetterGetter letter_;
};

template <typename LetterGetter>
std::ostream &Printer<LetterGetter>::operator()(std::ostream &out)
{
    return out << letter_();
}

#endif