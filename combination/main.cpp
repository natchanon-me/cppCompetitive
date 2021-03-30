#include <iostream>

using namespace std;

int fac(int n) {
    if(n==0) {
        return 1;
    }else{
        return fac(n-1)*n;
    }
}

// Formula is n!/(r!(n-r)!)
int nCr(int n, int r) {
    int num,den;

    num = fac(n);
    den = fac(r) * fac(n-r);

    return num/den;
}

// This using concept of pascal's triangle
int modnCr(int n, int r) {
    if(r==0 || n == r) {
        return 1;
    }else {
        return modnCr(n-1,r-1)+modnCr(n-1,r);
    }
}

int main()
{
    int x1 = nCr(5,2);
    int x2 = modnCr(5,2);
    cout << x1 << " : " << x2 << endl;
    return 0;
}
