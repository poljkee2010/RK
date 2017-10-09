#include <iostream>
using namespace std;

template <typename Iterator1, typename Iterator2>
auto merge(Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output) -> Iterator2
{
	for (; first1 != last1; ++output)
  {
  	if (*first2 < *first1) 
    {
			*output = *first2;
			++first2;
		}
    
		if (first2 == last2) 
    {
			return copy(first1, last1, output);
		}
    
		else 
    {
			*output = *first1;
			++first1;
		}
	}
	return copy(first2, last2, output);
};

int main()
{
	return 0;
}
