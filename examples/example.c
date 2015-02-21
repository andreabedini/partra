#include "partra.h"

int main(void)
{
unsigned char N=2;
char dirname[256] = "data";
unsigned char flag;

Matrix M;
unsigned long long msize[2];
char filename1[256],filename2[256];

//Create and output first file
flag = i_sq_f_f_file(N,dirname); 
if (flag!=0)
{
	return 0;
}
flag = i_sq_f_f_file_ldc(N,dirname,.324+I*.546); 
if (flag!=0)
{
	return 0;
}

//Second file - outputs should be equal
flag = i_sq_f_f(&M,msize,filename1,N);
sprintf(filename2,"_%s",filename1);
flag = matrix_fprintf(&M,msize,filename2,dirname);

/*
fid = fopen(filename2,"w");
for (n=0ULL;n<msize[0];n++)
{
	for (m=0ULL;m<msize[0];m++)
	{
		fprintf(fid,"%hhu\n",M[n][m][1][0]);
	}
}
fclose(fid);
*/


matrix_free(M,msize);
return 0;
}