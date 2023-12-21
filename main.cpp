#include "./Punkt3D.h"

// Testprogramm für Punkte im 2D-Raum
int main(void)
{
	printf(" Testprogramm fuer Punkte im 2D-Raum\n");
	/*
	printf("=====================================\n"
		   "geschwaetzige Variante ([j]a|any key]:");

	bool verbose = (_getch()=='j')?true:false;
	Punkt2D::SetVerbose( verbose );
	*/

	Punkt2D P1(10, 5), P2(-5, 2);

	P1.Info(); P1.Print();
	P2.Info(); P2.Print();
	P1.Move(P2);
	P1.Info(); P1.Print();

	printf("\n\nPunkt3D P3\n");
	Punkt3D P3;
	P3.Info(); P3.Print();

	/*
	printf("\n\nPunkt3D P4(4,-4,12)\n");
	Punkt3D P4(4,-4,12);
	P4.Info();P4.Print();
	*/

	_getch();
	return 0;
}