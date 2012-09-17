#include <iostream>

int get_size() {
    return 1024;
}

int main(int argc, const char *argv[])
{
    unsigned buf_size = 1024;
    
    int ia[buf_size] ;
    int ia1[get_size()];
    int ia2[4*7-14];
    char st[12] = "fundamental";
    //char st1[11] = "fundamental";
    char st2[13] = "fundamental\0";
    return 0;
}

