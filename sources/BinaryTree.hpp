/*
===============================================================
>Submission 5.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>BinaryTree-a
================================================================
*/

//============
/* INCLUDES */
//============
#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>


using namespace std;
namespace ariel {

    //=================
    /* BinaryTree<T> */
    //=================

   template<typename T> class BinaryTree
    {
        //========
        /* Node */
        //========

        struct Node
        {
            T data;
            Node *n_parent =NULL;
            Node *n_right=NULL;
            Node *n_left =NULL;

        //DEFAULT CONSTRUCTOR
        Node()
        { 
           this->n_parent = NULL;
           this->n_left = NULL;
           this->n_right = NULL;
        }

        //CONSTRUCTOR
        Node(T data) 
       {  
           this->n_parent = NULL;
           this->data = data;
           this->n_left = NULL;
           this->n_right = NULL;
       }
       

        };
        Node *_root;
        
    public:
   
        BinaryTree() : _root(NULL) {}
        ~BinaryTree() { delete _root; }
        
        //add_root - receives root places it at the root of the tree(Remplace it if exist). 
        BinaryTree &add_root(const T &root){return *this;}

        //add_left - receives 2 nodes First is the parent that i will place the Second as left Child
        BinaryTree &add_left(const T &n_parent, const T &n_left){return *this;}

        //add_right - receives 2 nodes First is the parent that i will place the Second as right Child
        BinaryTree &add_right(const T &n_parent, const T &n_right){return *this;}
        
        //Output operator - prints the wood in some logical format 
        friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &binaryTree){return os;}
        
        

    //__________________________________________________________________________________________________

    //============
    /* PREORDER */
    //============

    //__________________________________________________________________________________________________
        
        class Preorder
        {
         private:
            Node *n_current;

        public:

            Preorder(Node *ptr = NULL) : n_current(ptr){};

            T &operator*() const{return n_current->data;}

            T *operator->() const{return &(n_current->data);}

            Preorder &operator++(){return *this;}

            const Preorder operator++(int){return *this;}
            
            bool operator==(const Preorder &other) const {return false;}

            bool operator!=(const Preorder &other) const{return false;}
        };
          
        // begin_preorder / end_preorder
        // Returns iterators to move in order of preorder (parent - left - right).
        Preorder begin_preorder(){return Preorder{};}
        Preorder end_preorder(){return Preorder{};}

    //__________________________________________________________________________________________________

    //===========
    /* INORDER */
    //===========

    //__________________________________________________________________________________________________
        
        class Inorder
        {
         private:
            Node *n_current;

        public:

            Inorder(Node *ptr = NULL) : n_current(ptr){};

            T &operator*() const{return n_current->data;}

            T *operator->() const{return &(n_current->data);}

            Inorder &operator++(){return *this;}

            const Inorder operator++(int){return *this;}
            
            bool operator==(const Inorder &other) const {return false;}

            bool operator!=(const Inorder &other) const{return false;}
        };
          
        // begin_inorder - end_inorder
        // Returns iterators to move in order in order (left - parent - right).
        Inorder begin_inorder(){return Inorder{};}
        Inorder end_inorder(){return Inorder{};}

        //Defauld begin - End must be Inorder
        Inorder begin(){return begin_inorder();};
        Inorder end(){return end_inorder();};
    //__________________________________________________________________________________________________
    

    //============
    /* POSTORDER */
    //============
   
    //__________________________________________________________________________________________________
        
        class Postorder
        {
         private:
            Node *n_current;

        public:

            Postorder (Node *ptr = NULL) : n_current(ptr){};

            T &operator*() const{return n_current->data;}

            T *operator->() const{return &(n_current->data);}

            Postorder &operator++(){return *this;}

            const Postorder operator++(int){return *this;}
            
            bool operator==(const Postorder &other) const {return false;}

            bool operator!=(const Postorder &other) const{return false;}
        };
          
        // begin_postorder - end_postorder  
        // Returns iterators for switching in order order (left - right - parent).

        Postorder begin_postorder(){return Postorder{};}
        Postorder end_postorder(){return Postorder{};}

    //__________________________________________________________________________________________________
    





    };
    
   
    

}