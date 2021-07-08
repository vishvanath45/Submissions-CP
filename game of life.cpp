
#include <vector>
#include <random>

class gameOfLife
{
public:
    typedef std::vector< std::vector<int>> gridVector;

private:
    int gridSize;
    gridVector mainGrid;
    gridVector *gridCopy;

public:
    gameOfLife();

public:
    void run();
    void initGrid();
    void drawGrid();
    void updateGrid();
    void copyGrid ();
    int checkNeighbors(gridVector *grid, int x, int y);
    void nextGeneration(int x, int y, int lod);
    int randGenerate(int start, int end);

private:
    std::random_device randDevice;
    std::mt19937 gen;
};

gameOfLife::gameOfLife() : gridSize(15), gen(randDevice())
{
}

void gameOfLife::initGrid()
{
    for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < gridSize; j++)
        {
            mainGrid[i].push_back(0);
        }
    }

    for(int i = 1; i < gridSize ; i++)
    {
        for(int j = 1; j < gridSize ; j++)
        {
            int randSize     = randGenerate(2 , gridSize);
            int state       = randGenerate(0 , 2);
            int indexRow    = randGenerate(1, randSize );
            int indexColumn = randGenerate(1, randSize );

            mainGrid[indexColumn][indexRow] = state;
        }
    }
}

int gameOfLife::randGenerate(int start, int end)
{
        std::uniform_int_distribution<int> genenNum(start, end - 1);

        return genenNum(gen);
}

void gameOfLife::drawGrid()
{
    char ch = 254;
    for(int i = 1; i < gridSize - 1; i++)
    {
        for(int j = 1; j < gridSize - 1; j++)
        {

                if(mainGrid[i][j])
                {
                    std::cout << " "<<ch;
                }
                else
                {
                    std::cout << "  ";
                }

        }
        std::cout<<std::endl;
    }
}

void gameOfLife::copyGrid ()
{
    gridCopy = &mainGrid;
    (*gridCopy).resize(gridSize);
}

void gameOfLife::updateGrid()
{
    copyGrid();

    for(int i = 1; i < gridSize - 1 ; i++)
    {
        for(int j = 1; j < gridSize - 1; j++)
        {
            int lod = checkNeighbors(gridCopy, i, j);
            nextGeneration( i, j, lod);

        }

    }
}

int gameOfLife::checkNeighbors(gridVector *gridCopy, int x, int y)
{
    int lod = 0;
     for(int i = -1; i < 2; i++)
     {
         for(int j = -1; j < 2; j++)
         {
             if(!(i == 0 && j == 0))
             {
                 if((*gridCopy)[ x + i ][ y + j ])
                 {
                     lod++;
                 }
             }
         }
     }

     return lod;
}

void gameOfLife::nextGeneration(int x, int y, int lod)
{
    if(lod < 2)
    {
        mainGrid[x][y] = 0;
    }
    else if(lod == 3)
    {
        mainGrid[x][y] = 1;
    }
    else if(lod > 3)
    {
        mainGrid[x][y] = 0;
    }
}

void gameOfLife::run()
{
    mainGrid.resize(gridSize);

    initGrid();

    while(true)
    {
        drawGrid();
        updateGrid();
        system("cls");
    }
}


int main()
{
    gameOfLife gol;
    gol.run();

    std::cin.get();

    return 0;
}
