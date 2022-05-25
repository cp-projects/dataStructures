#include <iostream>

#include "graph.hpp"


void test_getters(cap::graph<int, 10> &my_graph){


    cap::matrix adj_mat = my_graph.get_adj_matrix();
    std::cout << "\n\n\n\n\n\n" << "Adjacency" << "\n\n";
    adj_mat.print();
    std::cout << "\n\n\n\n\n\n\n";

    std::cout << "\n\n\n\n\n\n\n";
    my_graph.print();
    std::cout << "\n\n\n\n\n\n\n";


    cap::matrix deg_mat = my_graph.get_deg_matrix();
    std::cout << "\n\n\n\n\n" << "Degree" << "\n\n";
    deg_mat.print();
    std::cout << "\n\n\n\n\n\n\n";

    cap::matrix lap_mat = my_graph.get_lap_matrix();
    std::cout << "\n\n\n\n\n" << "Laplacian" << " \n\n";
    lap_mat.print();
    std::cout << "\n\n\n\n\n\n\n";

    //cap::matrix testing_getters = adj_mat*deg_mat - lap_mat;

    //std::cout << "\n\n\n\n\n\n\n";
    //testing_getters.print();
    //std::cout << "\n\n\n\n\n\n\n";

}






int main(){

    cap::graph my_graph = cap::graph<int, 10>();

    //my_graph.print_verticies();

    my_graph.discrete_uniform_rand(0.75);

    my_graph.set_deg();

    test_getters(my_graph);


}
