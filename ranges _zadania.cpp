#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <numeric>

bool isPrime(int i)
{
	for (int j = 2; j * j <= i; ++j) {
		if (i % j == 0) return false;
	}
	return true;
}

int main()
{

	//Przydatne linki
	//	https://en.cppreference.com/w/cpp/ranges
	//	https://en.cppreference.com/w/cpp/algorithm/ranges
	//	https://en.cppreference.com/w/cpp/ranges/iota_view
	//	https://hannes.hauswedell.net/post/2019/11/30/range_intro/
	//	https://www.modernescpp.com/index.php/c-20-functional-patterns-with-the-ranges-library
	//	https://itnext.io/c-20-ranges-complete-guide-4d26e3511db0

	/*Zadanie 1 : Utwórz nowy vector do którego używajac biblioteki ranges wpiszesz podwojone
				  liczby podzielne przez 3 znajdujace sie w vector numbers
	*/

	std::cout << "zadanie 1 " << std::endl;
	std::vector<int> numbers = { 6,2,8,9,10,12,8,1,16,8,15,21,8,3,18,23,27,45,8,37,2 };
	//Rozwiazanie
	

	/*Zadanie 2 : Używajac biblioteki ranges
					a. znajdź i wyswietl na ekranie Największy i najmniejszy element vectora numbers.
					b. Wypisuj elementy wektora numbers1 tak długo, jak są to potęgi dwójki.
					   Następnie policz ilość wszystkich wystąpień potęg dwójki w wektorze
					c. posortuj vector numbers od 10 elementu do konca
					d. pomieszaj vector vec0, a nastepnie pomnoż każdy element razy 2

	*/
	std::cout << "zadanie 2 " << std::endl;
	//Rozwiazanie
	//a
	std::cout << "a" << std::endl;
	

	//b
	std::cout << "b " << std::endl;

	std::vector<int> numbers1{ 2,4,8,16,32,64,70,128 };

	

	//c
	std::cout << "c" << std::endl;
	
	

	//d 

	std::cout << "\n\n";
	std::cout << "d" << std::endl;
	std::vector<int> vec0{ 1,43,432,6,876,23,5 };



	/*Zadanie 3: Używajac biblioteki ranges
	*				a. połącz ze sobą vec1 i vec2 (stwórz nowy wektor będący ich połączeniem (posortowany)
	*				b. połacz ze soba vec1 i vec2 bez powtarzania elementów (zapisz wynik do nowego wektora)
	*				c. znajdz roznicę (w sensie wynik odejmowania na zbiorach) vec1 - vec2 (różnicę zapisz do nowego wektora)

	*/
	std::cout << std::endl;
	std::cout << "zadanie 3 " << std::endl;


	std::vector<int> vec1 = { 1,2,3,4,5,6 };
	std::vector<int> vec2 = { 5,6,7,8,9 };

	//a
	std::cout << "a" << std::endl;

	
	//b

	std::cout << "b" << std::endl;
	
	//c
	
	std::cout << "c" << std::endl;

	

	//Zadanie : Używajac biblioteki ranges - wypisz 20 liczb pierwszych począwszy od 100000.

	std::cout << "\nzadanie 4\n";

	

}
