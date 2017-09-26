#include <iostream.h>
#include <string.h>
#include <vector.h>

string mini(const string& num, int k)
{
	string result = num;
	if( k <= 0 )
		return num;
	else if( num.size() > 0 && num.size() > k )
	{
		int i;
		for( i = 0; i < k; i++ )
		{
			int in;
			for(in = 0; in < result.size()-1; in++ )
			{
				if( result[in] > result[in+1] )
				{
					result.erase(result.begin() + in);
					break;
				}
			}
			if( in == result.size()-1 )
			{
				result.erase(result.end()-1);
			}
		}
	}
	return result;
}

void main()
{
	cout << mini("670124", 3);
	cout << mini("8361957", 5) ;
	return 0;
}
