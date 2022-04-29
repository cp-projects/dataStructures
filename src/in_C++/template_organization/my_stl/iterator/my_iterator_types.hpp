#pragma once

template <typename value_to_be_iterated_t>
class iterator{

    public:
	    typedef value_to_be_iterated_t val_type;
	    typedef val_type* ptr_type;
	    typedef val_type& ref_type;
	    typedef const val_type* const_ptr_type;
	    typedef const val_type& const_ref_type;

}

template <typename Iterator_t>
struct iterator_traits{

  typedef typename Iterator_t::val_type val_type;
  typedef typename Iterator_t::ptr_type ptr_type;
  typedef typename Iterator_t::ref_type ref_type;
  typedef typename Iterator_t::const_ptr_type const_ptr_type;
  typedef typename Iterator_t::const_ref_type const_ref_type;


};
