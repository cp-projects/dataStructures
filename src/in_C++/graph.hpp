#pragma once

#include <array>
#include<vector>
#include<random>
#include<map>
#include<tuple>
#include<type_traits>

#include "../../../Linear-Algebra-Tools/src/libLA.hpp"


namespace cap{

template<typename label_type, size_t num_verticies>
class graph{

    private:
	    typedef typename std::array<label_type, num_verticies> vertex_list_t;
	    typedef typename std::map<label_type, std::tuple<label_type, label_type>> coordinates_map_t;
            
	    typedef typename std::vector<label_type> edges_per_vert_list_t;
	    typedef typename std::array<edges_per_vert_list_t, num_verticies> adjacency_list_t;

	    typedef typename cap::matrix<label_type, num_verticies, num_verticies> matrix_t;


    public:
	    graph<label_type, num_verticies>()
		    :m_self_vertex_list(), m_num_verts(num_verticies), m_self_adjacency_list(), m_self_adjacency_matrix(), m_self_degrees_matrix(), m_self_laplacian_matrix(), m_self_coords(){

			set_vertex_list();
		        m_self_adjacency_matrix.Fill(0);
			m_self_degrees_matrix.Fill(0);
			m_self_laplacian_matrix.Fill(0);
		    }

	    ~graph<label_type, num_verticies>(){}

    private:
	    vertex_list_t m_self_vertex_list;
	    size_t m_num_verts;
            coordinates_map_t m_self_coords;


	    adjacency_list_t m_self_adjacency_list;

	    matrix_t m_self_adjacency_matrix;
	    matrix_t m_self_degrees_matrix;
	    matrix_t m_self_laplacian_matrix;

   
    public:
	    matrix_t get_adj_matrix(){
	        return m_self_adjacency_matrix;
	       }

	    matrix_t get_deg_matrix(){
                return m_self_degrees_matrix;
               }

	    matrix_t get_lap_matrix(){
                return m_self_laplacian_matrix;
               }

	    adjacency_list_t get_adj_list(){
	        return m_self_adjacency_list;
	       }

	    void print(){
	        std::cout << "\n\n\n\n\n" << "Adjacency List" << "\n\n";
                for(int i = 0; i < num_verticies; i++)
                    for(int j = 0; j < m_self_adjacency_list[i].size(); j++)
                        std::cout << "   " << "Node " << i+1 << ": is connected to " << m_self_adjacency_list[i].at(j)+1 << "  \n ";
                    std::cout << "\n\n\n\n";
	          }

	    void print_verticies(){
		std::cout << "\n\n\n\n\n" << "Vertex List" << "\n\n";
	        for(int i = 0; i < num_verticies; i++)
			std::cout << m_self_vertex_list[i] << "\n";
	              }


     public:

	    void set_vertex_list(){
	         label_type vertex = (label_type)0;
                 if(typename std::is_same<label_type,char>::is_same())
                    vertex = 'a';

	        for(int i = 0; i < num_verticies; i++){
	            m_self_vertex_list[i] = vertex;
		    vertex++;
		   }
	          }

	    void set_adj(label_type i, label_type j){
	        if(i == j)
			return;
		m_self_adjacency_matrix[i][j] = 1;
		m_self_adjacency_matrix[j][i] = 1;
		m_self_adjacency_list[i].push_back(m_self_vertex_list[j]); 
	      }


	    void set_deg(){
	        for(int i = 0; i < num_verticies; i++)
		    for(int j = 0; j < num_verticies; j++)
		       if(i == j)
			    m_self_degrees_matrix[i][j] =  m_self_adjacency_list[i].size(); 
	                  }	


	    void discrete_uniform_rand(double edge_density){
	    
	        std::default_random_engine my_generator;
		std::uniform_int_distribution<label_type> distribution(0,100);
		for(int i = 0; i < num_verticies; i++){
	           //Generate random coordinates
                   label_type X = distribution(my_generator);
		   label_type Y = distribution(my_generator);                             //std::cout << "(" << X << ',' << Y << ")" << '\n';
		   m_self_coords[(label_type)i] = std::make_tuple(X,Y);

		   //Generate Adjacency list/matrix
		   for(int j = 0; j < i+1; j++){
		       label_type trial = distribution(my_generator);                                    //std::cout << trial << '\n';
		       if(trial > 0 && trial < 100*edge_density)
		           set_adj(i, j);    
		          }
		         } 
	                }


	     void continuous_uniform_rand(double edge_density){

                std::default_random_engine my_generator;
                std::uniform_real_distribution<label_type> distribution(-100,100);
                for(int i = 0; i < num_verticies; i++){
                   //Generate random coordinates
                   label_type X = distribution(my_generator);
                   label_type Y = distribution(my_generator);                             //std::cout << "(" << X << ',' << Y << ")" << '\n';
                   m_self_coords[(label_type)i] = std::make_tuple(X,Y);

                   //Generate Adjacency list/matrix
                   for(int j = 0; j < i+1; j++){
                       label_type trial = distribution(my_generator);                                    //std::cout << trial << '\n';
                       if(trial > 0 && trial < 100*edge_density*0.5)
                           set_adj(i, j);
                          }
                         }
                        }




};



}
