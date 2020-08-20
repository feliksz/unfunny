#include "polando.hpp"

#include <iostream>

LICZBA_CALKOWITA32 ZdobadzWynik(LICZBA_CALKOWITA32 Argument1, LICZBA_CALKOWITA32 Argument2)
{
	ZWROC Argument1 + Argument2;
}

LICZBA_CALKOWITA32 main()
{
	POKAZ << "P O L S K A" << std::endl;

	LICZBA_CALKOWITA32 Liczba1, Liczba2;

	POKAZ << "Podaj pierwsza liczbe" << std::endl;
	WPROWADZ >> Liczba1;

	POKAZ << "Podaj druga liczbe" << std::endl;
	WPROWADZ >> Liczba2;

	POKAZ << ZdobadzWynik(Liczba1, Liczba2);

	return 0;
}