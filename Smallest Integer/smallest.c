int smallest_integer(int *numbers, int length)
{
    int smallest = numbers[0];
    int i;
    if (length > 0)
    {
        for (i = 0; i < length; i++)
        {
            if (numbers[i] < smallest)
            {
                smallest = numbers[i];
            } 
        }
    }
    return(smallest);
}