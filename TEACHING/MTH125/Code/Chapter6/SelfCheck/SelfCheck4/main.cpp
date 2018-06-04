#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
const int COLUMNS=3;


/**
Computes the total of a row in a table.
@param table a table with 3 columns
@param row the row that needs to be totaled
@return the sum of all elements in the given row
*/
int row_total(int table[][COLUMNS],int row)
{
    int total=0;
    for(int j=0; j<COLUMNS; j++)
    {
        total+=table[row][j];
    }
    return total;
}

/**
Computes the total of a column in a table.
@param table a table with 3 columns
@param row the row that needs to be totaled
@return the sum of all elements in the given row
*/
int column_total(int table[][COLUMNS],int column,int rows)
{
    int total=0;
    for(int i=0; i<rows; i++)
    {
        total+=table[i][column];
    }
    return total;
}

void question30()
{
const int COUNTRIES=7;
const int MEDALS=3;

    string countries[] =
    {
        "Canada",
        "China",
        "Germany",
        "Korea",
        "Japan",
        "Russia",
        "United States"
    };

    int counts[COUNTRIES][MEDALS] =
    {
        { 1, 0, 1 },
        { 1, 1, 0 },
        { 0, 0, 1 },
        { 1, 0, 0 },
        { 0, 1, 1 },
        { 0, 1, 1 },
        { 1, 1, 0 }
    };

    cout << " \t Country   Gold   Silver  Bronze   Total" << endl;
    // Print countries, counts, and row totals
    for (int i = 0; i < COUNTRIES; i++)
    {
        cout << setw(15) << countries[i];
        // Process the ith row
        for (int j = 0; j < MEDALS; j++)
        {
            cout << setw(8) << counts[i][j];
        }
        int total = row_total(counts, i);
        cout << setw(8) << total << endl;
    }
    cout << setw(15) << "Total";
    for (int j=0; j < COLUMNS; j++)
    {
        cout << setw(8) << column_total(counts,j,COUNTRIES);
    }
}


void question31()
{
    int board[8][8];
    for(int i = 0; i < 8; i ++)
    {
        for(int j=0; j < 8; j++)
        {
            board[i][j]=(i+j)%2 ? 1 : 0; // show the students this more elegant way
        }
    }
    for(int i = 0; i < 8; i ++)
    {
        for(int j=0; j < 8; j++)
        {
            cout<<setw(5)<< board[i][j];
        }
        cout<<endl;
    }
}

void question32_and_33()
{
    char tictac[3][3]={{' '}}; //A neat trick as well to assign all elements to a sam value

    tictac[0][2]='x';
    for(int i = 0; i < 3; i ++)
    {
        for(int j=0; j < 3; j++)
        {
            cout<<setw(5)<< "|" << tictac[i][j];
        }
        cout<<endl;
    }

}

int main()
{
    //question30();
    //question31();
    //question32_and_33();

    vector<int> squares;
    for (int i = 0; i < 5; i++) { squares.push_back(i * i); }
    cout<<"Squares: "<<endl;
    for (int e:squares)
    {
        cout << e;
    }
    cout<<endl;
    vector<int> lucky_numbers; // Initially empty
    lucky_numbers = squares; // Now lucky_numbers contains the same elements as squares
    cout<<"Lucky numbers "<<endl;
    for (int e:lucky_numbers)
    {
        cout << e;
    }
    cout<<endl;
    squares.push_back(2);
    cout<<"Squares changed: "<<endl;
    for (int e:squares)
    {
        cout << e;
    }
    cout<<endl;
    cout<<"Lucky numbers changed? "<<endl;
    for (int e:lucky_numbers)
    {
        cout << e;
    }

    return 0;
}
