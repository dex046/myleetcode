int myAtoi(char* str) {
    int MAX_INT = (unsigned)~0 >> 1;
    int MIN_INT = -((unsigned)~0 >> 1) - 1;

    int sign = 1;
    int res = 0;

    if(str == 0)
    {
        return 0;
    }

    while(isspace(*str))
    {
        ++str;
    }

    if(*str == '-')
    {
        sign = false;
        ++str;
    }
    else if(*str == '+')
    {
        ++str;
    }


    while(isdigit(*str))
    {
        int temp = *str - '0';
        if(sign && (res > MAX_INT / 10 || res == MAX_INT / 10 && temp > MAX_INT % 10))
        {
            return MAX_INT;
        }


        if(!sign && (res > (unsigned)MIN_INT / 10 || res == (unsigned)MIN_INT / 10 && temp > (unsigned)MIN_INT % 10))
        {
            return MIN_INT;
        }

        res = res * 10 + temp;
        ++str;
    }

    return sign ? res : -res;
}