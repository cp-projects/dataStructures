#pragma once
//#include "../iterator.hpp"
//#include <iterator>
//#include <algorithm>
//#include <array>
#include <cassert>
#include "my_initializer_list.hpp"

template <typename array_t>
class array_iterator{

   public:
	   //type parameters
	   using value_type = typename array_t::value_type;
	   using ptr_type = value_type*;
	   using ref_type = value_type&;
	   using const_ptr_type = const ptr_type;
	   using const_ref_type = const ref_type;

           //constructor and destructor
	   array_iterator(ptr_type ptr)
	       : m_current_pointer(ptr), m_current_const_pointer(ptr){}

	   ~array_iterator(){}

      
   private:  //private data
	   ptr_type m_current_pointer;
	   const_ptr_type m_current_const_pointer;


   public: //operator overloads

	   array_iterator& operator++(){
	       m_current_pointer++;
	       return *this;
	      }

	   array_iterator operator++(int){
	       array_iterator iterator = *this;
	       ++(*this);
	       return iterator;
	      }

	   array_iterator& operator--(){
	       m_current_pointer--;
	       return *this;
	      }

	   array_iterator operator--(int){
	       array_iterator iterator = *this;
	       ++(*this);
	       return iterator;
	      }

	   array_iterator operator[](size_t index){
	       m_current_pointer + index;
	       return *this;
	      }

	   array_iterator* operator->(){
	       return m_current_pointer;
	      }

	   value_type operator*(){
	       return *(m_current_pointer);
	      }

	   bool operator==(const array_iterator& other) const{
	      return m_current_pointer == other.m_current_pointer;
	     }

	   bool operator!=(const array_iterator& other) const{
	      return !(m_current_pointer == other.m_current_pointer);
	     }

	   std::ostream& operator<<(const array_iterator& other){
	       static std::ostream stream;
	       stream << *(other.m_current_pointer) << '\n';
	       return stream;
	      }


    public: //non_operator functions

            value_type get_val(){
	        value_type ret =  *(m_current_pointer);
                return ret;
	       }
           

	    




	   


};


template <typename T, std::size_t L>
struct my_array{

    my_array<T,L>()
	    : m_len(L), m_start(begin()), m_finish(end()), null_fill_success(fill(0)) {}

    my_array<T,L>(my_initializer_list<T> input)   //std::initializer_list<T> input)
	    : m_len(L), m_start(begin()), m_finish(end()) 
          {
              assert(input.size() <= std::size(m_array));
	      //std::copy(input.begin(), input.end(), m_array);
	      size_t i = 0;
	      for(const T* curr = input.begin(); curr != input.end(); curr++){
	          m_array[i] = input[i];
		  //replace_val(*curr, i);
		  i++;
	         }         
	    }

    ~my_array<T,L>() {}

    public:
           typedef T value_type;
           typedef array_iterator<my_array> Iterator;
	   T m_array[L];

    private:
	    size_t m_len;
	    Iterator m_start;
	    Iterator m_finish;
	    bool null_fill_success;

    public:
	    constexpr std::size_t len(){
	         return this->m_len;
	        }

	    static constexpr T* static_ptr(const T& t) noexcept {
	        return const_cast<T*>(t);
	       }

	    static constexpr T& static_ref(const T& t, std::size_t len) noexcept {
	        return const_cast<T&>(t[len]);
	       }

	     T operator[] (size_t index) {
		 Iterator retNode = m_start[index];
		 T ret_val = retNode.get_val();
		 return ret_val;
	        }

             Iterator begin() {
	         return Iterator(m_array);
	        }

	     Iterator end() {
	         return Iterator(m_array+m_len);
	        }

    public:
	     
	     bool fill(T fill_val){
		 size_t i = 0;
		 for(Iterator current = m_start; current != m_finish; current++){
	             m_array[i] = fill_val;
		     i++;
		    }
		 return 1;
	        }

	     
	     void replace_val(T val, std::size_t index){ 
                 m_array[index] = val;
	        }









};


