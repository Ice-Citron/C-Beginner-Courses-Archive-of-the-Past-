

int main(){

    //conversion of const value, to changeable-variable -- insight into casting
    const int hi = 9;
    const_cast<int&>(hi) = 6;

    //int jj = 5;
    //static_cast<const int&>(j);

    int j, k, l, m;

    ///////////////////////
    //declaration of const

    const int i = 9;

    const int *p1 = &i; // data is const, pointer is not
    p1++; //increments memory address position to next 

    int* const p2 = &j; //data is not, pointer is const

    const int* const p3 = &k; // both data and pointer are const

    int const *p4 = &l;  //pointer is const, data is not
    const int *p5 = &m;  //pointer is const, data is not

    //overall
    //const on the left of *, data is const
    //const on the right of *, pointer is const
    //LDRP


    return 0;
}