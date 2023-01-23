#pragma once

template <class Iterator>
void sortBubble(Iterator first, Iterator last) {
	for (Iterator i = first; i != last; ++i)
		for (Iterator j = first; j < i; ++j)
			if (*i < *j)
				iter_swap(i, j);
}

template <class Vector>
void sortBubble(Vector& vectorNumbers) {
	sortBubble(vectorNumbers.begin(), vectorNumbers.end());
}

template <typename Iterator>
void sortOddEven(Iterator first, Iterator last) {
	for (Iterator i = first; i != last; ++i)
	{
		Iterator min = i;
		for (Iterator j = i + 1; j != last; ++j)
		{
			if (*j < *min)
			{
				min = j;
			}

			iter_swap(i, min);
		}
	}
}

template <typename Vector>
void sortOddEven(Vector& vectorNumbers) {
	sortOddEven(vectorNumbers.begin(), vectorNumbers.end());
}

template <typename Iterator>
void sortInsertion(Iterator first, Iterator last) {
	for (Iterator i = last - 1; i != first; --i)
	{
		if (*(i - 1) > *i)
		{
			iter_swap(i - 1, i);
		}
	}

	for (Iterator i = first + 2; i != last; ++i)
	{
		Iterator j = i;
		auto v = *i;

		while (v < *(j - 1))
		{
			iter_swap(j, j - 1);
			--j;
		}
		*j = v;
	}
}

template <typename Vector>
void sortInsertion(Vector& vectorNumbers) {
	sortInsertion(vectorNumbers.begin(), vectorNumbers.end());
}