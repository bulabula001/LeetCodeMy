int myAtoi(char* str) {
	int minus=0;
	long result=0;
	
    if(str == NULL)
		return 0;
		
	while(*str<'0' || *str>'9')
	{
		
		if(*str != ' ' && *str != '+' && *str != '-')
    	return 0;

    	if(*str == ' ')
    	{
    	    if(minus!=0)
    	        return 0;
        	str++;  
    	}
    	else if(*str == '+')
    	{
    	    if(minus!=0)
    	        return 0;
    	    minus=1;
    	    str++;
    	}
    	else if(*str == '-')
    	{
    	    if(minus!=0)
    	        return 0;
    		minus=-1;
    		str++;
    	}
	}

    int max=0;
	
	while(*str>='0' && *str<='9')
	{
		result=result*10+*str-'0';
		if(result > INT_MAX)
		{
		    max=1;
		    break;
		}
		str++;
	}
	
	if(max)
	{
	    if(minus==-1)
	        return INT_MIN;
	    else 
	        return INT_MAX;
	}
	
	
	if(minus==-1)
	{
		result=result*(-1);
	}
	
	return  result; 
}