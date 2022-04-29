#pragma once
#include "my_iterator_types.hpp"

template<Iterator_t>
class forward_itr{

    protected:
	    Iterator_t m_current;
	    typedef iterator_traits<Iterator_t> traits_t;

    public:
	    typedef Iterator_t;
	    typedef typename traits_t::val_type val_type;
	    typedef typename traits_t::ptr_type ptr_type;
	    typedef typename traits_t::ref_type ref_type;
	    typedef typename traits_t::const_ptr_type const_ptr_type;
	    typedef typename traits_t::const_ref_type const_ref_type;


	    constexpr forwar_itr() noexcept
		    : m_current(Iterator_t){}

	    ref_type operator*() const noexcept{
	        return *m_current;
	    }

	    ptr_type operator->() const noexcept{
	        return m_current;
	    }

	    forward_itr& operator++() noexcept{
	        m_current++;
		return *this;
	    }

	    //VERY IMPORTANT REMEMBER TO OVERLOAD ==

    

}




