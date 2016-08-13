void shellsort(vector<int> &vec)
{
    int size = vec.size();
    for(int i = size / 2; i >= 1 ; --i)
    {
        for(int j = 0; j < size - i; ++j)
        {
            if(vec[j] > vec[j+i])
            {
                swap(vec[j], vec[j+i]);
            }
        }
    }
    return;
}
