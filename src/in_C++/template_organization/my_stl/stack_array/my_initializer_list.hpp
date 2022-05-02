#pragma once

template <class class_type>
class my_initializer_list{

    public:
	    typedef class_type val_type;
	    
	    typedef val_type& ref_type;
            typedef const val_type& const_ref;
	    
	    typedef val_type* ptr_type;
            typedef const val_type* const_ptr;

	    typedef class_type* iterator;

    private:
	    iterator m_array;
	    std::size_t m_len;

    public:
	    my_initializer_list(ptr_type start, std::size_t len)
		    : m_array(start), m_len(len) {}
	    
	    //~my_initializer_list{}

	    constexpr std::size_t len() const noexcept{
    		    return m_len;
	       }

	    
	    iterator begin(){
	        return m_array;
	       }

	    iterator end(){
	        return m_array + m_len;
	       }
	    
};



template <class class_type>
constexpr const class_type* begin(my_initializer_list<class_type> _ils) noexcept{
    return _ils.begin();
}

template <class class_type>
constexpr const class_type* end(my_initializer_list<class_type> _ils) noexcept{
    return _ils.end();
}
