/* Winning condition */

int winner(int arr[][4])

{

    int i, j, k = 1;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++, k++)
        
            if (arr[i][j] != k && k != 16)
            {
                break;
            }

        if (j < 4)
        {
            break;
        }
    }

    if (j < 4)
    {
        return 0;
    }

    return 1;
}