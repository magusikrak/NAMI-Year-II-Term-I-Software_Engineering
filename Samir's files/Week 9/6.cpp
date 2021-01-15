#include <iostream>
using namespace std;
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main(){
    int size =3;
    int a[3] = {1, 2, 3};
    int res = findSum(a, size);
    cout << res;

}