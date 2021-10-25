#include <iostream>
#define N 4


using namespace std;

double Average(int I[][N])
{
	int i, j;
	int sum  = 0;

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			sum += I[i][j];

	return (double)sum/(N*N);
}


int main()
{
    int I[N][N]= {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    cout << "Average : " << Average(I) << endl;

    return 0;
}
