#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#define string std::string

auto main( ) {
    auto s, i, x, fun, last = 100;
    global=1;
    s = 0.0;
    i = last;
    x = true;
    last = fun2(last,s,last);
    x = fun2(last,s,x);
    fun = fun2(last,last,x);

    x = 1 ;
    while (x == true) {
	s = s + i;
    
	i = i + 1;
        x = i < last;
    }

    `
    printf("sum(%d) = %f\n", last, s);

    return x;
}


auto fun1(auto a,auto b,auto c){
    auto s,i,x;
    a=1;
    b=0.1;
    c= true;
    s = 100;
    i = 1.1;
    x = "hello";
    return b;
}

auto fun2(auto x,auto y,auto z){
    auto s,i,x;
    x=1;
    y=x;
    z= true;
    s = 100;
    i = " "
    i = fun1(y,0.0,z);
    
    return s;
}

