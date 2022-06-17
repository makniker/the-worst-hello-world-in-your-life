#include <iostream>

#include "Printer.hpp"
#include "LetterGetters.hpp"

int main()
{
    h_getter hGet;
    Printer<h_getter> hPrinter(hGet);
    e_getter eGet;
    Printer<e_getter> ePrinter(eGet);
    l_getter lGet;
    Printer<l_getter> lPrinter(lGet);
    o_getter oGet;
    Printer<o_getter> oPrinter(oGet);
    w_getter wGet;
    Printer<w_getter> wPrinter(wGet);
    r_getter rGet;
    Printer<r_getter> rPrinter(rGet);
    d_getter dGet;
    Printer<d_getter> dPrinter(dGet);
    comma_getter commaGet;
    Printer<comma_getter> commaPrinter(commaGet);
    space_getter spaceGet;
    Printer<space_getter> spacePrinter(spaceGet);

    dPrinter(lPrinter(rPrinter(oPrinter(wPrinter(spacePrinter(commaPrinter(oPrinter(lPrinter(lPrinter(ePrinter(hPrinter(std::cout)))))))))))) << "\n";
    return 0;
}