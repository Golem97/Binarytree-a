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

#include "doctest.h"
#include "BinaryTree.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace ariel;
using namespace std;

TEST_CASE("Tree Constructions (EVREY TYPES)"){ 

   BinaryTree<string> bt_s;

/*
    =====================
     String Binary Tree :
    =====================
          
          one
        /      \
     two       three
    /   \      /   \
 four  five  six   seven


*/ 

    //Creat Root :

    CHECK_NOTHROW(bt_s.add_root("one"));
    CHECK_NOTHROW(bt_s.add_right("one","three"));
    CHECK_NOTHROW(bt_s.add_left("one","two"));

    CHECK_NOTHROW(bt_s.add_right("two","four"));
    CHECK_NOTHROW(bt_s.add_left("two","five"));
    CHECK_NOTHROW(bt_s.add_right("three","six"));
    CHECK_NOTHROW(bt_s.add_left("three","seven"));
    
    string bt_out;

    for (auto iter =bt_s.begin_postorder(); iter!=bt_s.end_postorder(); ++iter) {

        bt_out+= *iter +',';
    }

    CHECK(bt_out=="five,four,two,seven,six,three,one,");

    bt_out.clear();


    

/*
    ==================
     Int Binary Tree :
    ==================
          
          1
        /    \
       2      3
     /  \    /  \
    4    5  6    7

*/ 

BinaryTree<int> bt_i;

    //Creat Root
    CHECK_NOTHROW(bt_i.add_root(1));
    CHECK_NOTHROW(bt_i.add_right(1,3));
    CHECK_NOTHROW(bt_i.add_left(1,2));

    CHECK_NOTHROW(bt_i.add_right(2,4));
    CHECK_NOTHROW(bt_i.add_left(2,5));

    CHECK_NOTHROW(bt_i.add_right(3,6));
    CHECK_NOTHROW(bt_i.add_left(3,7));
    

    for (auto iter =bt_i.begin_postorder(); iter!=bt_i.end_postorder(); ++iter) {

        bt_out+= *iter +',';

    }

    CHECK(bt_out=="5,4,2,7,6,3,1,");

    bt_out.clear();

    /*
    ==================
    Char Binary Tree :
    ==================
          
          a
        /    \
       b      c
     /  \    /  \
    d    e  f    g


*/ 
BinaryTree<int> bt_c;

    //Creat Root
    CHECK_NOTHROW(bt_c.add_root('a'));
    CHECK_NOTHROW(bt_c.add_right('a','c'));
    CHECK_NOTHROW(bt_c.add_left('a','b'));

    CHECK_NOTHROW(bt_c.add_right('b','d'));
    CHECK_NOTHROW(bt_c.add_left('b','e'));

    CHECK_NOTHROW(bt_c.add_right('c','f'));
    CHECK_NOTHROW(bt_c.add_left('c','g'));
    

    for (auto iter =bt_c.begin_postorder(); iter!=bt_c.end_postorder(); ++iter) {

        bt_out+= *iter +',';

    }

    CHECK(bt_out=="e,d,b,g,f,c,a,");

    bt_out.clear();

     /*
    ==================
    Double Binary Tree :
    ==================
          
           1.5
         /     \
      2.5       3.5
     /   \      /  \
   4.5   5.5  6.5  7.5


*/ 
BinaryTree<double> bt_d;

    //Creat Root
    CHECK_NOTHROW(bt_d.add_root('a'));
    CHECK_NOTHROW(bt_d.add_right('a','c'));
    CHECK_NOTHROW(bt_d.add_left('a','b'));

    CHECK_NOTHROW(bt_d.add_right('b','d'));
    CHECK_NOTHROW(bt_d.add_left('b','e'));

    CHECK_NOTHROW(bt_d.add_right('c','f'));
    CHECK_NOTHROW(bt_d.add_left('c','g'));
    

    for (auto iter =bt_d.begin_postorder(); iter != bt_d.end_postorder(); ++iter) {

        bt_out+= *iter +',';

    }

    CHECK(bt_out=="e,d,b,g,f,c,a,");

    bt_out.clear();


 }

 TEST_CASE("ORDER'S TEST"){
/*
    ================
     DEFAULT ORDER :
    ================
*/
/*
           10
         /     \
       20       30
      / \      /   \
     40   50  60    70
*/ 

     BinaryTree<int> bt_def;
     string bt_out;

    //Creat Root
    bt_def.add_root(10);
    bt_def.add_left(10,20);
    bt_def.add_left(20,40);
    bt_def.add_right(20,50);
    bt_def.add_right(10,30);
    bt_def.add_right(30,60);
    bt_def.add_left(30,70);

    //Must Be Inorder
    for (auto iter =bt_def.begin(); iter!=bt_def.end(); ++iter) {

        bt_out+= *iter +',';

    }

    CHECK(bt_out=="40,20,50,10,60,30,70,");

    bt_out.clear();


    /*
    ==========
     INORDER :
    ==========
*/
/*
           1
         /     \
       2       3
      / \     /  \
     4   5   6    7
*/ 

     BinaryTree<int> bt_in;
    

    //Creat Root
    bt_in.add_root(1);
    bt_in.add_left(1,2);
    bt_in.add_left(2,4);
    bt_in.add_right(2,5);
    bt_in.add_right(1,3);
    bt_in.add_right(3,6);
    bt_in.add_left(3,7);

    
    for (auto iter =bt_def.begin_inorder(); iter!=bt_def.end_inorder(); ++iter) {

        bt_out+= *iter +',';

    }

    CHECK(bt_out=="4,2,5,1,6,3,7,");

    bt_out.clear();
    
    /*
    ===========
    POSTORDER :
    ===========
          
          1
        /    \
       2      3
     /  \    /  \
    4    5  6    7


*/ 

BinaryTree<int> bt_post;

    //Creat Root
    CHECK_NOTHROW(bt_post.add_root(1));
    CHECK_NOTHROW(bt_post.add_right(1,3));
    CHECK_NOTHROW(bt_post.add_left(1,2));

    CHECK_NOTHROW(bt_post.add_right(2,4));
    CHECK_NOTHROW(bt_post.add_left(2,5));

    CHECK_NOTHROW(bt_post.add_right(3,6));
    CHECK_NOTHROW(bt_post.add_left(3,7));

    for (auto iter =bt_post.begin_postorder(); iter!=bt_post.end_postorder(); ++iter) {

        bt_out+= *iter +',';

    }

    CHECK(bt_out=="5,4,2,7,6,3,1,");

    bt_out.clear();


/*
    =========
    PREORDER:
    =========
          
          1
        /    \
       2      3
     /  \    /  \
    4    5  6    7


*/ 

BinaryTree<int> bt_pre;

    //Creat Root
    CHECK_NOTHROW(bt_pre.add_root(1));
    CHECK_NOTHROW(bt_pre.add_right(1,3));
    CHECK_NOTHROW(bt_pre.add_left(1,2));

    CHECK_NOTHROW(bt_pre.add_right(2,4));
    CHECK_NOTHROW(bt_pre.add_left(2,5));

    CHECK_NOTHROW(bt_pre.add_right(3,6));
    CHECK_NOTHROW(bt_pre.add_left(3,7));
    

    for (auto iter =bt_pre.begin_preorder(); iter!=bt_pre.end_preorder(); ++iter) {

        bt_out+= *iter +',';

    }

  CHECK(bt_out=="1,2,4,5,3,6,7,");

    bt_out.clear();

  }
 