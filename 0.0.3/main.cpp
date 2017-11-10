#include <iostream>
using namespace std;

template <typename Iterator1, typename Iterator2>
auto merge(Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output)->Iterator2
{
	while (true)
	{
		if (first1 == last1)
		{
			while (first2 != last2)
			{
				*output = *first2;
				++output; ++first2;
			}

			return output;
		}
		if (first2 == last2)
		{
			while (first1 != last1)
			{
				*output = *first1;
				++output; ++first1;
			}

			return output;
		}

		*output++ = (*first2 < *first1) ? *first2++ : *first1++;
	}

	return output;
}

int main()
{
	int arr1[] = { -6, -4, 0, 2, 5, 7, 8, 8, 13, 17 };
	int arr2[] = {-7, -3, -1, 0, 13, 21, 22};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int arr3[sizeof(arr1) / sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0])];

	auto arr3_last = merge(arr1, arr1 + size1, arr2, arr2 + size2, arr3);

	return 0;
}
