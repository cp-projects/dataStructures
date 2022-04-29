#pragma once
//#include <iterator>
//#include <algorithm>


template <typename T, std::size_t L>
struct my_array{

    my_array<T,L>()
	    : m_len(L) {}

    ~my_array<T,L>() {}

    private:
	    T m_array[L];
	    size_t m_len;

    public:
	    constexpr std::size_t get_len(){
	         return this->m_len;
	        }

	     T operator[] (size_t index) {return m_array[index];}


};
