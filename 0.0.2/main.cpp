#include <iostream>
using namespace std;

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c) //auto - автоматическое определение типа функции
{
	bool Iterators = false;
	size_t array[10] = {0,1,2,3,4,5,6,7,8,9};

	if (first == last || first > last) 
	{
		throw runtime_error("error");
	}
	while (first != last)
	{
		int Summ = array[first] + array[last];
		if (Summ < c)
			first++;
		else if (Summ > c)
			last--;
		else
		{
			Iterators = true;
			cout << "We have next iterators: " << first << " " << last << endl;
			break;
		}
	}
	return 0;
}

int main()
{
	int c;
	cin >> c;

	size_t a = 0, b = 9;
	find_two_elements_with_sum(a,b,c);
	return 0;
}
