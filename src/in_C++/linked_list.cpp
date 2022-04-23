#include <iostream>


//namespace DBL{
struct node_dbl{
    double* val;
    node_dbl *next;
}; //          }//end namespace

//namespace INT{
struct node_int{
    int* val;
    node_int *next;
};  //         }//end namespace

class singly_linked{    
    
    private:    
	node_dbl* m_head_dbl;
	node_int* m_head_int;
	int type;
	int m_len;
    
    public:
        singly_linked()
	    : m_len(0), m_head_dbl(nullptr), m_head_int(nullptr) {}
        
        int get_len(){
	    return m_len;
	}

	void set_len(int len){
	    this->m_len = len;
	}

	node_dbl* get_head_dbl(){
	    return m_head_dbl;
	}
	
	void set_head(node_dbl* new_head){
	    this->m_head_dbl = new_head;
	}

	node_int* get_head_int(){
            return m_head_int;
        }

        void set_head(node_int* new_head){
            this->m_head_int = new_head;
        }
	
};






int main(){

    singly_linked my_list = singly_linked();

    std::cout << my_list.get_len() << std::endl;
    my_list.set_len(2);
    std::cout << my_list.get_len() << std::endl;

    node_int* head = new node_int;
    head->val = new int;
    *(head->val) = 17;

    my_list.set_head(head);

    std::cout << *(my_list.get_head_int()->val) << std::endl;


    node_dbl* head2 = new node_dbl;
    head2->val = new double;
    *(head2->val) = 2.2222;

    my_list.set_head(head2);

    std::cout << *(my_list.get_head_dbl()->val) << std::endl;

    delete head->val;
    delete head;

    delete head2->val;
    delete head2;

}

