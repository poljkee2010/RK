Дана неубывающая посследовательность чисел, нужно найти 2 числа этой последовательности, сумма которых равна определенному числу. Указать категорию итераторов.
```ShellSession
template <typename Iterator, typename T>
auto find_two_elements_with_sum( Iterator first, Iterator last, T c )
-> std::pair<bool, std::pair<Iterator, Iterator>> 
```
