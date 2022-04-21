# dataStructures

Making an archive (.a) and/or shared object file (.so) with common data structures:

Currently getting the double data type to work first, then translating to int and float.
Have neglected void and string in most liberaries and am working primarily on the folders
listed in the Makefiles.

General Structure:

    This is a system of subdirectories with chained make file compilation. Each individual
    form of datastructure will have its own director which compiles an archive file (.a)
    and a relacatable object file (.o)

    ie) single value storing linked lists all are contained within the heap_linked_list/ directory
        and compiles to its own library and object files lib_linked_list.o/a

    Each broad form of data structure directory will have subdirectories for its different forms.

    ie) single value linked list -- has subdirectories singly/ and doubly/ which contain 
        singly-linked and doubly-linked single value storing linked lists

    Each of these form subdirectories have their own subdirectories for each data type.



    The make files connect the seperate subdirectories in that Makefiles in parent directories
    call make on child directories. So while any individual type can be worked on within its
    own folder they can also all be combined into a library.

    The choice to include both .a and .o (maybe adding a .so later) is so that any individual
    datastructure could be used in a project on its own (.a) or combined into a larger archive
    file with other data structure libraries (.o)

    This all breaks down into levels of compilation and dependency.
    

    top level (tiers):

        These are true depencies, the idea is to build from simple data structures up to more
        complicated ones which might use the simpler ones within their implamentation.
 
        Nothing in the same tier should be dependent on one another, or on anything in a higher
        tier.

        A tier seperation denotes a required depency on some code from a lower tier.

        So, nothing in tier 1 should be dependent on anything not in the c standard liberaries.
        And anything not dependent on anything but the C standard liberaries should be in tier 1.

        Tier 2 should be dependent only on tier 1. Tier 3 should be depend only on tier 2, and by extension tier 1.        
        And on and on for as many tiers as I choose to make.

        Tier 1 can be used on its own, tier 2 can be used with only tier 2 and tier 1 etc.

        The goal is to efficently move to more complicated structures which may, for example, rely on the code
        for a linked list or binary tree, but to also maintain the option of inlcuding only the structures needed
        in a project to avoid a bloated memory greedy liberary where only simple datastructures are needed.

        Working Tiers:
 
            tier_1: so far has a (mostly) working single value linked list and ordered pair linked list
            
            tier_2: currently working on an adjacency list which could represent a graph but depends on
                    the tier one single valued list to store verticies and the ordered pair linked list
                    to store edges.


Naming Convention:

    Many functions, folders and files have similar names other than being taged with the
    type of structure and the datatype.

    These tags always follow the order: data structure type -> datatype

    I use the following abreviations:
    
        dbl = doubly (as in doubly linked) when it describes structure, the data type double if 
              it's at the end of the name.
       
        flt = float
  
        int = int

        str = string/char*

        op = ordered pair

        adj = adjacency


generalized function types:

        Creating and Destroying an Instance of a manipulatable datastructure:
    
        
        create() -- creates an empty instance of the data structure in question
        
        clear() -- completely empties the data structure

        destroy() -- clears and frees an instance of the data structure




        Basic Stack and Queue functionality (aliased for use in different contexts):


        push(), enqueue(), insert_at_head(),  -- adds a value to the begining

        pop(), remove_at_head() -- removes and returns value from the beginning

        dequeue(), remove_at_tail() -- removes and returns value from the end

        insert_at_tail() -- inserts a value at end




        Iteration, Index and Value Searching, and more advanced insertion/deletion:

            Everyting here is based on itr_forward and itr_backward.
            They have a total of 5 flags and test values to make everuthing work.

            itr_forward() -- iterates through the structure forward from beginning to end, returns the node it breaks on.
            
            itr_backward() -- iterates through the structure backward frim end to beginnig, returns the node it breaks on.

                itr flags:
                    labaling positions: (instance of a data_structure, 1, 2, 3, 4, 5)
                    
                    position 1 -- breakVal, this is the value on which you want the iteration to break

                    position 2 -- breakIndex, this is the index on which you want the iteration to break

                    position 3 -- printFlag, if 1 the list will be printed while iterating, if 0 it will not

                    position 4 -- break_on_valFlag, if 1 the iteration will check each stored value, if that
                                  value is the same as breakVal (position 1) it will break

                    position 5 -- break_on_indexFlag, if 1 the iteration will break on the index specified
                                  in position 2. 

                    3 has no invalid uses, it can be 1 or 0 with any other combinations of flags, including
                    no flags which will iterate through and print the entire list (data_structure, 0,0,1,0,0)

                    1 can only be used validly if 4 is true (1), 2 can only be used validly if 5 is true (1).
                    
                    3, 4, and 5 should only ever be 0 or 1, and 4 and 5 cannot both be 1 at the same time.

     
        Functions which use the above iteration methods for insertion or deletion:

        insert_after_val() -- inserts a new value after the specified test value is found iterating though the list

        remove_at_val() -- removes a specific value from the list

        insert_at_index() -- inserts a new value after/at a specified index

        remove_at_index() -- removes whatever value is at a specified index from the list
        

