int euklidesIter(int a, int b)
{
    while ( a != b ){
        int temp_b = b;
        if ( a < b ){
            b = b - a;
        }
        else{
            a = a - b;
        }
    }
    return a;
}

int euklidesRek(int a, int b){
    if ( a == b ){
        return a;
    }
    else{
        if ( a < b ){
            return euklidesRek(a, b-a);
        }
        else{
            return euklidesRek(a-b, b);
        }
    }
}

int NWW(int a, int b, int c)
{
    return a*b/c;

}