grammar S;


nested_query
    : ( '(' nested_query ')' | '()' )+
    ;