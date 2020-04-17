#include <stdio.h>
#include <string.h>
#include <verfier.h>

int verifier (char Username[], char Password[])
{
FILE*f;
FILE*f1;
char login1[20];char password1[20];
int espace;int c=-1,id;
f1=fopen("/home/hachem/Projects/project3/src/users_tempo.txt","w");
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
if(f !=NULL) {
while(fscanf(f,"%s %s %d %d\n",login1,password1,&espace,&id)!=EOF)
	{
		if ( strcmp(Username, login1)== 0)
		{
			if ( strcmp(Password, password1)== 0)
			{
				c=espace;
                                if(f1 !=NULL) 
                                {
                                fprintf(f1," %s %s %d %d \n" ,Username,Password,c,id);
                                fclose(f1);
                                }
              		}
		}
	}
}

fclose(f);
return c;
}


