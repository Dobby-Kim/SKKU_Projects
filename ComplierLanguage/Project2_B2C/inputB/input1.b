#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define string std::string

auto func1(auto c, auto d);

auto main( ) {
    auto s, i, a, last = 100;
    
    s = 0.0;
    i = last;
    a = true;
    while (a == true) {
	s = s + i;
    
	i = i + 1;
    a = i < last;
    }
    
    

    return a ;
}

auto func1(auto c, auto b){

    c = 1;
    b = 1.1;
    return b;
}

auto func2(auto c, auto d){

    auto a,b = 100;

    c = 1.1;
    d = 1;
    a = false ;
    return c;
}



