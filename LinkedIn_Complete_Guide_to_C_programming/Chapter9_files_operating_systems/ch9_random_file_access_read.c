#include <stdio.h>

int main()
{
	const char filename[] = "heroes.dat";
    struct marvel_hero {
        char real_name[32];
        char alter_ego[32];
        int first_appearance;
        char power[32];
    } hero;
	int x;
	FILE *fp;

	/* open the file */
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	/* prompt to read a specific record */
	printf("Enter record to read (1-8): ");
	scanf("%d",&x);
	/* validate the input */
	if( x<1 || x>10 )
	{
		puts("Invalid input");
		return(1);
	}
	/* decrement x to reference the proper offset */
	x--;

	/* Set the file position indicator */
	fseek(fp, sizeof(struct marvel_hero)*x, SEEK_SET);
	/* fetch the record */
	fread(&hero, sizeof(struct marvel_hero), 1, fp);

	/* print the result */
	printf("The heroes alter ego is %s and the real name of that hero is: '%s'. It first appeared in a comic in %d. Main powers are: %s\n",
			hero.alter_ego,
			hero.real_name,
            hero.first_appearance,
			hero.power
		  );

	/* close-up */
	fclose(fp);
	return(0);
}