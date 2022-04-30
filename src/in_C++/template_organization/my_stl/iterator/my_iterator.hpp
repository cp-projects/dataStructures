#pragma once
//#include "my_iterator_types.hpp"

template<Iterator_t>
class forward_itr{

    protected:
	    Iterator_t m_current;
	    typedef iterator_traits<iterator> traits_t;

    public:
	    typedef Iterator_t;
	    typedef typename traits_t::val_type val_type;
	    typedef typename traits_t::ptr_type ptr_type;
	    typedef typename traits_t::ref_type ref_type;
	    typedef typename traits_t::const_ptr_type const_ptr_type;
	    typedef typename traits_t::const_ref_type const_ref_type;

            //constructor
	    constexpr forwar_itr() noexcept
		    : m_current(Iterator_t){}

	    //overwrite normal defreference 
	    ref_type operator*() const noexcept{
	        return *m_current;
	    }

	    //overwrite arrow pinter (de)reference
	    ptr_type operator->() const noexcept{
	        return m_current;
	    }

	    //increment
	    forward_itr& operator++() noexcept{
	        m_current++;
		return *this;
	    }

	    //I blieve this is for leaping multiple
	    //indicies but I am not 100% sure yet
	    forward_itr operator++(int) noexcept{
	        return forward_itr(m_current++);
	    }

	    ref_type operator[](size_t index) const noexcept{
	        return m_current[];
	    }

	    //VERY IMPORTANT REMEMBER TO OVERLOAD ==

    

}




