#include<iostream>
#include "fifo.h"

using namespace std;



unsigned char mydata[] = { 'm','y','n','a','m','e','i','y' };
int main()
{
	Fifo_t myfifo;
	FifoInit(&myfifo, mydata, sizeof mydata );

	FifoPush(&myfifo, 3);

	for (int i = 0; i < myfifo.Size; i++)
		//printf("%s", myfifo.Data[i]);
		cout << myfifo.Data[i] << endl;

	FifoPop(&myfifo);

	for (int i = 0; i < myfifo.Size; i++)
		cout << 't'<<myfifo.Data[i] << endl;


	return 0;

}