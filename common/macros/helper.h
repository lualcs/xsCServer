//检查指针
#define IGNORE_NPTR_VOID(p)		if(!(p)) {assert(p);return  ;}
#define IGNORE_NPTR_KIND(p,r)	if(!(p)) {assert(p);return r;}

//条件检查
#define IGNORE_NCDT_VOID(c)		if(!(c)) {return  ;}
#define IGNORE_NCDT_KIND(c,r)	if(!(c)) {return r;}

//除法取模
#define OPERATION_DIVISION(s,c) (0 == c: s / c)
#define OPERATION_DELIVERY(s,c) (0 == c: s % c)