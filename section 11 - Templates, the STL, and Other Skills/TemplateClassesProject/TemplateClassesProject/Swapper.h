#ifndef SWAPPER_H
#define SWAPPER_H


template <class T>
class Swapper
{
public:
	Swapper(T first, T last);
	void swap();
	T getFirst() const;
	T getLast() const;

private:
	T first;
	T last;

};

template <class T>
Swapper<T>::Swapper(T first, T last)
{
	this->first = first;
	this->last = last;
}

template <class T>
void Swapper<T>::swap()
{
	T temp = first;
	first = last;
	last = temp;

}

template <class T>
T Swapper<T>::getFirst() const
{
	return first;
}

template <class T>
T Swapper<T>::getLast() const
{
	return last;
}


#endif // !SWAPPER_H
