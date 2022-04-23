#include <iostream>

struct node{
    double* val;
    node *next;
};

class singly_linked{    
    
    private:
        node* m_head;
	int m_len;
    
    public:
        singly_linked()
	    : m_len(0), m_head(nullptr) {}
        
        int get_len(){
	    return m_len;
	}

	void set_len(int len){
	    this->m_len = len;
	}

	node* get_head(){
	    return m_head;
	}

	void set_head(node* new_head){
	    this->m_head = new_head;
	}
	
};



int main(){

    singly_linked my_list = singly_linked();

    std::cout << my_list.get_len() << std::endl;
    my_list.set_len(2);
    std::cout << my_list.get_len() << std::endl;

    node* head = new node;
    head->val = new double;
    //*(head->val) = 17;

    std::cout << (my_list.get_head())->val << std::endl;

    delete head;

}

