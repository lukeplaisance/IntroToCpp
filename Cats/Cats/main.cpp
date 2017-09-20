#include <iostream>
#include "Cath.h"

int main()
{
	Cat box[26];
	int i = 0;
	int dec = 65;
	while (i < 26)
	{
				

		if (i % 2 == 0)
		{
			box[i].NameMe(dec);
		}
		else
		{
			box[i].NameMe(dec + 32);
		}
		dec++;

		i++;
	}
	

	
	
	system("pause");
}