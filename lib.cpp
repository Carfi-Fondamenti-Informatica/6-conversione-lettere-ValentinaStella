#include "prototipoconversione.h"
char conversionelettere (char c){
    char risultato;
    bool cifra;
    if(c>='A'&& c<='Z') {
        risultato = c + 32;
    }else if( c>='a' && c<='z'){
        risultato=c-32;
    } else if (('0'<= c)&& (c<='9')){
        cifra= false;
    }
    return risultato;
    }
