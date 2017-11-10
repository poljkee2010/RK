#include <algorithm>
#include <iostream>

//RandomAccessIterator
template <typename Iterator1, typename Iterator2>
void merge_sort(Iterator1 first, Iterator1 last, Iterator2 memory)
{
	if (last - first > 1)
	{
		auto mid = first + (last - first) / 2;
		merge_sort(first, mid, memory);
		merge_sort(mid, last, memory);
		std::inplace_merge(first, mid, last);
	}
}


int main()
{
	int arr1[] = { -6, 17, 0, 12, 5, -9, -4, 8, 1, 17 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[10];

	merge_sort(arr1, arr1 + size1, arr2);

	return 0;
}
