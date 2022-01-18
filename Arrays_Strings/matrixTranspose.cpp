#include <iostream>

#define N 4

using namespace std;

void transpose(int I[][N], int O[][N])
{
	int x, y;

	for(x = 0; x < N; x++)
		for(y = 0; y < N; y++)
			O[x][y] = I[y][x];

}

int main()
{
    int I[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    int O[N][N], i, j;

    transpose(I, O);

    cout <<"Result matrix is \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           cout <<" "<< O[i][j];
        cout <<"\n";
    }

    return 0;
}
