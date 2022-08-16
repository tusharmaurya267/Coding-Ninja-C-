#include<iostream>
using namespace std;


int main()
{

		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}


        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout << input[i][j] << " ";
            }
        }
        

        for(int i=0;i<row;i++)
        {
            delete[]input[i];
        }
        delete[]input;

}