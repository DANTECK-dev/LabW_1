#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main() {

	setlocale(LC_ALL, "ru");
repit:	//?????? ???? ?????? ??????????? ????? ????????
	int a;
	cout << "1. ?????-????\n"
		<< "2. ?????\n"
		<< "3. ????? ??????\n"
		<< "4. ????????? ???????\n"
		<< "5. ?????????????? ????\n"
		<< "6. ????????? ?????????????\n"
		<< "7. ??????? ??????\n"
		<< "8. ????????? ????????????? ?????????\n"
		<< "9. ??????????????? ?????????? ????? ?????? ???????????? ??????? ? ?????????\n"
		<< "10. ????? ?????????? ????????? ????????, ??????? ????????? ???????????? ?????????\n"
		<< "11. ???????????? ????????????????? ??????????\n"
		<< "12. ???????????????????? ????????\n"
		<< "13. ????????? ? ?????????? ????????????\n"
		<< "14. ?????? ??????????? ??????:\n\n"
		<< "??????? ????? ????????: ";

	cin >> a;
	cout << endl;

	//--------------------------------------------//	1	?????? ???????		//-----------------------------------------------------------------//

	if (a == 1) {
		cout << "?? ??????? 1 ??????? ?????-????\n";
		cout << "?????????? ????????? ?????? ?-??????????, ?-?????????????, ?-???????????? ???????\n\n";
		cout << "??????? ???-?? ?????????: ";
		int sizeC;
		float Sum = 0;
		int sumD = 0;
		int Days = 0;
		cin >> sizeC;
		cout << endl;
		int* arNom = new int[sizeC] {};
		char* arKat = new char[sizeC] {};
		float* arCen = new float[sizeC] {};
		int* arSro = new int[sizeC] {};
		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ????? " << i + 1 << " ??????: "; cin >> arNom[i];
			cout << "\n??????? ????????? " << i + 1 << " ??????: "; cin >> arKat[i];
			cout << "\n??????? ???? " << i + 1 << " ??????: "; cin >> arCen[i];
			cout << "\n??????? ???? ???????? " << i + 1 << " ??????: "; cin >> arSro[i]; cout << endl << endl;
			Sum += arCen[i];
			sumD += arSro[i];
		}
		Days = sumD / sizeC;
		cout << "-------------------------------------------------------------------------\n";
		cout << "|?????-????                                                             |\n";
		cout << "|-----------------------------------------------------------------------|\n";
		cout << "|  ????? ??????   |   ?????????     |   ????(???)     |???? ????????(??)|\n";
		cout << "|-----------------|-----------------|-----------------|-----------------|\n";
		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-17d|%-17c|%-17f|%-17.1d|\n", arNom[i], arKat[i], arCen[i], arSro[i]);
		}
		cout << "|------------------|-----------------|-----------------|----------------|\n";
		printf_s("|   ????? ????    |                 |%-17.1f|                 |\n", Sum);
		cout << "|------------------|-----------------|-----------------|----------------|\n";
		printf_s("|  ??????? ????   |                 |                 |%-17d|\n", Days);
		cout << "|-----------------------------------------------------------------------|\n";
		cout << "|?????????? ????????? ?????? ?-??????????, ?-?????????????,             |\n";
		cout << "|? - ???????????? ???????                                               |\n";
		cout << "-------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	2	?????? ???????		//-----------------------------------------------------------------//

	if (a == 2) {
		cout << "?? ??????? 2 ??????? ?????\n\n";
		cout << "??????? ???-?? ????: ";

		int sizeC;
		float SumCha = 0;
		float SumObe = 0;
		int SumKol = 0;
		cin >> sizeC;
		cout << endl;

		int* arNom = new int[sizeC] {};
		int* arKol = new int[sizeC] {};
		float* arObe = new float[sizeC] {};
		float* arCha = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ????? " << i + 1 << " ?????: "; cin >> arNom[i];
			cout << "\n??????? ???-?? " << i + 1 << " ?????????: "; cin >> arKol[i];
			cout << "\n??????? ????? ??????? (???. $) " << i + 1 << " ?????: "; cin >> arObe[i];
			cout << "\n??????? ????? ????? (%) " << i + 1 << " ?????: "; cin >> arCha[i]; cout << endl << endl;
			SumKol += arKol[i];
			SumObe += arObe[i];
			SumCha += arCha[i];
		}

		cout << "-----------------------------------------------------------------------------\n";
		cout << "|?????                                                                      |\n";
		cout << "|---------------------------------------------------------------------------|\n";
		cout << "|   ????? ?????    | ???-?? ????????? |???? ??????(???.$)|  ????? ?????(%)  |\n";
		cout << "|------------------|------------------|------------------|------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-18d|%-18d|%-18.2f|%-18.1f|\n", arNom[i], arKol[i], arObe[i], arCha[i]);

		}

		cout << "|-------------------|------------------|------------------|-----------------|\n";
		printf_s("|????? ???-?? ????.|%-18d|                  |                  |\n", SumKol);
		cout << "|-------------------|------------------|------------------|-----------------|\n";
		printf_s("|????? ????? ??????|                  |%-18.2f|                  |\n", SumObe);
		cout << "|-------------------|------------------|------------------|-----------------|\n";
		printf_s("|????. ????? ????? |                  |                  |%-18.1f|\n", SumCha);
		cout << "-----------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	3	??????? ???????		//-----------------------------------------------------------------//

	if (a == 3) {
		cout << "?? ??????? 3 ??????? ????? ??????\n\n";
		cout << "??????? ???-?? ???????????: ";

		int sizeC;
		int SumAge = 0;
		int SrSumAge = 0;
		float SumOkl = 0;
		float SrSumOkl = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: ?-????????, ?-?????????, ?-???????\n";
		int* arNom = new int[sizeC] {};
		char* arDol = new char[sizeC] {};
		int* arAge = new int[sizeC] {};
		float* arOkl = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ????? " << i + 1 << " ??????????: "; cin >> arNom[i];
			cout << "\n??????? ????????? " << i + 1 << " ??????????: "; cin >> arDol[i];
			cout << "\n??????? ???????? " << i + 1 << " ??????????: "; cin >> arAge[i];
			cout << "\n??????? ????? (???. ???.) " << i + 1 << " ??????????: "; cin >> arOkl[i]; cout << endl << endl;
			SumAge += arAge[i];
			SumOkl += arOkl[i];
		}

		SrSumAge = SumAge / sizeC;
		SrSumOkl = SumOkl / sizeC;

		cout << "-------------------------------------------------------------------------\n";
		cout << "|????? ??????                                                           |\n";
		cout << "|-----------------------------------------------------------------------|\n";
		cout << "|????? ?????????? |    ?????????    |  ???????? (???) |????? (???. ???.)|\n";
		cout << "|-----------------|-----------------|-----------------|-----------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-17d|%-17c|%-17d|%-17.2f|\n", arNom[i], arDol[i], arAge[i], arOkl[i]);

		}

		cout << "|-----------------|-----------------|-----------------|-----------------|\n";
		printf_s("|??????? ???????? |                 |%-17d|                 |\n", SrSumAge);
		cout << "|-----------------|-----------------|-----------------|-----------------|\n";
		printf_s("|  ??????? ?????  |                 |                 |%-17.2f|\n", SrSumOkl);
		cout << "|-----------------------------------------------------------------------|\n";
		cout << "|??????????: ?-????????, ?-?????????, ?-???????                         |\n";
		cout << "-------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	4	???¨???? ???????	//-----------------------------------------------------------------//

	if (a == 4) {
		cout << "?? ??????? 4 ??????? ????????? ???????\n\n";
		cout << "??????? ???-?? ???????: ";

		int sizeC;
		int SumKol = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: ?-????????????, ?-????????, ?-????????????\n";
		int* arNom = new int[sizeC] {};
		char* arType = new char[sizeC] {};
		int* arKol = new int[sizeC] {};
		int* arVes = new int[sizeC] {};
		int* arVesAll = new int[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ????? " << i + 1 << " ??????: "; cin >> arNom[i];
			cout << "\n??????? ??? " << i + 1 << " ??????: "; cin >> arType[i];
			cout << "\n??????? ???-?? " << i + 1 << " ???????: "; cin >> arKol[i];
			cout << "\n??????? ??? ????? ?????? (?): "; cin >> arVes[i];
			cout << "\n??????? ????? ??? (?)" << i + 1 << " ???????: "; cin >> arVesAll[i]; cout << endl << endl;
			SumKol += arKol[i];
		}

		cout << "--------------------------------------------------------------------------------------\n";
		cout << "|????????? ???????                                                                   |\n";
		cout << "|------------------------------------------------------------------------------------|\n";
		cout << "|  ????? ??????  |       ???      |   ??????????   |??? 1 ?????? (?)| ????? ??? (?)  |\n";
		cout << "|----------------|----------------|----------------|----------------|----------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-16d|%-16c|%-16d|%-16d|%-16d|\n", arNom[i], arType[i], arKol[i], arVes[i], arVesAll[i]);

		}

		cout << "|----------------|----------------|----------------|----------------|----------------|\n";
		printf_s("|  ????? ???-??  |                |%-16d|                |                |\n", SumKol);
		cout << "|------------------------------------------------------------------------------------|\n";
		cout << "|??????????: ?-????????????, ?-????????, ?-????????????                              |\n";
		cout << "--------------------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	5	????? ???????		//-----------------------------------------------------------------//

	if (a == 5) {
		cout << "?? ??????? 5 ??????? ????????????? ????\n\n";
		cout << "??????? ???-?? ????: ";

		int sizeC;
		int SumCha = 0;
		int SrSumCha = 0;
		float SumRam = 0;
		float SrSumRam = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: ??? ?-CISC ?????????, R-RISC ?????????\n";
		int* arNom = new int[sizeC] {};
		int* arCha = new int[sizeC] {};
		float* arRam = new float[sizeC] {};
		char* arType = new char[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ??? " << i + 1 << " ??????????: "; cin >> arNom[i];
			cout << "\n??????? ??????? (Mgz) " << i + 1 << " ??????????: "; cin >> arCha[i];
			cout << "\n??????? ????? RAM " << i + 1 << " ??????: "; cin >> arRam[i];
			cout << "\n??????? ??? " << i + 1 << " ??????????: "; cin >> arType[i]; cout << endl << endl;
			SumCha += arCha[i];
			SumRam += arRam[i];
		}

		SrSumCha = SumCha / sizeC;
		SrSumRam = SumRam / sizeC;

		cout << "-------------------------------------------------------------\n";
		cout << "|?????????????? ????                                        |\n";
		cout << "|-----------------------------------------------------------|\n";
		cout << "|??? ??????????|??????? (Mgz) |   RAM (Gb)   |     ???      |\n";
		cout << "|--------------|--------------|--------------|--------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-14d|%-14d|%-14.1f|%-14c|\n", arNom[i], arCha[i], arRam[i], arType[i]);

		}

		cout << "|--------------|--------------|--------------|--------------|\n";
		printf_s("| ??. ???????  |%-14d|              |              |\n", SrSumCha);
		cout << "|--------------|--------------|--------------|--------------|\n";
		printf_s("|??. ????? RAM |              |%-14.1f|              |\n", SrSumRam);
		cout << "|-----------------------------------------------------------|\n";
		cout << "|??? ?-CISC ?????????, R-RISC ?????????                     |\n";
		cout << "-------------------------------------------------------------\n";
	}

	//--------------------------------------------//	6	?????? ???????		//-----------------------------------------------------------------//

	if (a == 6) {
		cout << "?? ??????? 6 ??????? ????????? ?????????????\n\n";
		cout << "??????? ???-?? ????? ?????????????: ";

		int sizeC;
		int SumKol = 0;
		int SumVes = 0;
		int SrSumVes = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: R-????????,C-???????????\n";
		int* arKod = new int[sizeC] {};
		char* arType = new char[sizeC] {};
		float* arNom = new float[sizeC] {};
		int* arKol = new int[sizeC] {};
		int* arVes = new int[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ??? " << i + 1 << " ??????????????: "; cin >> arKod[i];
			cout << "\n??????? ??? " << i + 1 << " ??????????????: "; cin >> arType[i];
			cout << "\n??????? ??????? " << i + 1 << " ??????????????: "; cin >> arNom[i];
			cout << "\n??????? ?????????? " << i + 1 << " ?????????????: "; cin >> arKol[i];
			cout << "\n??????? ??? " << i + 1 << " ??????????????: "; cin >> arVes[i]; cout << endl << endl;
			SumVes += arVes[i];
			SumKol += arKol[i];
		}

		SrSumVes = SumVes / sizeC;

		cout << "--------------------------------------------------------\n";
		cout << "|????????? ?????????????                               |\n";
		cout << "|------------------------------------------------------|\n";
		cout << "|   ???    |   ???    | ???????  |??????????| ??? (?)  |\n";
		cout << "|----------|----------|----------|----------|----------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-10d|%-10c|%-10.1f|%-10d|%-10d|\n", arKod[i], arType[i], arNom[i], arKol[i], arVes[i]);

		}

		cout << "|----------|----------|----------|----------|----------|\n";
		printf_s("|??. ???-??|          |          |%-10d|          |\n", SumKol);
		cout << "|----------|----------|----------|----------|----------|\n";
		printf_s("| ??. ???  |          |          |          |%-10d|\n", SrSumVes);
		cout << "|------------------------------------------------------|\n";
		cout << "|??????????: R-????????, C-???????????                 |\n";
		cout << "--------------------------------------------------------\n";
	}

	//--------------------------------------------//	7	??????? ???????		//-----------------------------------------------------------------//

	if (a == 7) {
		cout << "?? ??????? 7 ??????? ??????? ??????\n\n";
		cout << "??????? ???-?? ????? ???????: ";

		int sizeC;
		int SumKol = 0;
		int SumCen = 0;
		int SrSumKol = 0;
		float SrSumCen = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: M-Microsoft, L-Lotus, S-Sun\n";
		int* arNom = new int[sizeC] {};
		char* arPro = new char[sizeC] {};
		int* arKol = new int[sizeC] {};
		float* arCen = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ????? " << i + 1 << " ??????: "; cin >> arNom[i];
			cout << "\n??????? ????????????? " << i + 1 << " ??????: "; cin >> arPro[i];
			cout << "\n??????? ???-?? ????.?????? " << i + 1 << " ??????: "; cin >> arKol[i];
			cout << "\n??????? ???? ($): " << i + 1 << " ??????: "; cin >> arCen[i]; cout << endl << endl;

			SumKol += arKol[i];
			SumCen += arCen[i];
		}

		SrSumKol = SumKol / sizeC;
		SrSumCen = SumCen / sizeC;


		cout << "---------------------------------------------------------------\n";
		cout << "|??????? ??????                                               |\n";
		cout << "|-------------------------------------------------------------|\n";
		cout << "|  ?????   |  ?????????????  |???-?? ????. ??????|  ???? ($)  |\n";
		cout << "|----------|-----------------|-------------------|------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-10d|%-17c|%-19d|%-12.1f|\n", arNom[i], arPro[i], arKol[i], arCen[i]);

		}

		cout << "|----------|-----------------|-------------------|------------|\n";
		printf_s("|C?. ???-??|                 |%-19d|            |\n", SrSumKol);
		cout << "|----------|-----------------|-------------------|------------|\n";
		printf_s("| ??. ???? |                 |                   |%-12.1f|\n", SrSumCen);
		cout << "|-------------------------------------------------------------|\n";
		cout << "|??????????: M-Microsoft, L-Lotus, S-Sun                      |\n";
		cout << "---------------------------------------------------------------\n";
	}

	//--------------------------------------------//	8	??????? ???????		//-----------------------------------------------------------------//

	if (a == 8) {
		cout << "?? ??????? 8 ??????? ????????? ????????????? ??????????\n\n";
		cout << "??????? ???-?? ????? ?/?: ";

		int sizeC;
		float SumPro = 0;
		int SumTime = 0;
		int SrSumTime = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: T-???????, M-?????????? ?????, A-???????\n";
		char* arType = new char[sizeC] {};
		int* arMar = new int[sizeC] {};
		float* arPro = new float[sizeC] {};
		int* arTime = new int[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ??? " << i + 1 << " ?/?: "; cin >> arType[i];
			cout << "\n??????? ? ???????? " << i + 1 << " ?/?: "; cin >> arMar[i];
			cout << "\n??????? ????????????? ???????? (??) " << i + 1 << " ?/?: "; cin >> arPro[i];
			cout << "\n??????? ????? ? ?????? (???): " << i + 1 << " ?/?: "; cin >> arTime[i]; cout << endl << endl;

			SumPro += arPro[i];
			SumTime += arTime[i];
		}

		SrSumTime = SumTime / sizeC;


		cout << "---------------------------------------------------------------------------------------------\n";
		cout << "|????????? ????????????? ??????????                                                         |\n";
		cout << "|-------------------------------------------------------------------------------------------|\n";
		cout << "|    ??? ??????????    |      ? ????????      |????????????? ????????| ????? ? ?????? (???) |\n";
		cout << "|----------------------|----------------------|----------------------|----------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-22c|%-22d|%-22f|%-22d|\n", arType[i], arMar[i], arPro[i], arTime[i]);

		}

		cout << "|----------------------|----------------------|----------------------|----------------------|\n";
		printf_s("| ????? ?????????????  |                      |%-22.1f|                      |\n", SumPro);
		cout << "|----------------------|----------------------|----------------------|----------------------|\n";
		printf_s("|    ??????? ?????     |                      |                      |%-22d|\n", SrSumTime);
		cout << "|-------------------------------------------------------------------------------------------|\n";
		cout << "|??????????: T-???????, M-?????????? ?????, A-???????                                       |\n";
		cout << "---------------------------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	9	??????? ???????		//-----------------------------------------------------------------//

	if (a == 9) {
		cout << "?? ??????? 9 ??????? ??????????????? ???-?? ?¨?? ?????? ???????????? ??????? ? ?????????\n\n";
		cout << "??????? ???-?? ?????: ";

		int sizeC;
		float SumVes = 0;
		float SumKol = 0;
		float SrSumVes = 0;
		float SrSumKol = 0;
		cin >> sizeC;
		cout << endl;

		char* arType = new char[sizeC] {};
		float* arVes = new float[sizeC] {};
		float* arCha = new float[sizeC] {};
		float* arKol = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ???????????? ????? " << i + 1 << " ??????: "; cin >> arType[i];
			cout << "\n??????? ??????????????? ????? (???. ??????) " << i + 1 << " ??????: "; cin >> arVes[i];
			cout << "\n??????? ????? % " << i + 1 << " ??????: "; cin >> arCha[i];
			cout << "\n??????? ?????????? (???) " << i + 1 << " ??????: "; cin >> arKol[i]; cout << endl << endl;

			SumVes += arVes[i];
			SumKol += arKol[i];
		}

		SrSumVes = SumVes / sizeC;
		SrSumKol = SumKol / sizeC;

		cout << "---------------------------------------------------------------------------------------------\n";
		cout << "|??????????????? ?????????? ????? ??????? ???????????? ??????? ? ?????????                  |\n";
		cout << "|-------------------------------------------------------------------------------------------|\n";
		cout << "| ???????????? ?????  | ??????????????? ????? (???. ??????)  | ????? %  | ?????????? (???)  |\n";
		cout << "|---------------------|--------------------------------------|----------|-------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-21c|%-38.2f|%-10.5f|%-19.3f|\n", arType[i], arVes[i], arCha[i], arKol[i]);

		}

		cout << "|---------------------|--------------------------------------|----------|-------------------|\n";
		printf_s("| ????? ????????????? |%-38.2f|          |                   |\n", SrSumVes);
		cout << "|---------------------|--------------------------------------|----------|-------------------|\n";
		printf_s("|    ??????? ?????    |                                      |          |%-19.3f|\n", SrSumKol);
		cout << "---------------------------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	10	??????? ???????		//-----------------------------------------------------------------//

	if (a == 10) {
		cout << "?? ??????? 10 ??????? ????? ?????????? ????????? ????????, ??????? ????????? ???????????? ?????????\n\n";
		cout << "??????? ???-?? ????????: ";

		int sizeC;
		int SumKol = 0;
		float SumSec = 0;
		float SrSumSec = 0;
		cin >> sizeC;
		cout << endl;

		cout << "??????????: O-OCEAN, D-DYFESM, T-TRFD\n";
		char* arNam = new char[sizeC] {};
		int* arKol = new int[sizeC] {};
		float* arCallenge = new float[sizeC] {};
		float* arIndy = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ???????? " << i + 1 << " ?????????: "; cin >> arNam[i];
			cout << "\n??????? ?????????? ????? ???? ? " << i + 1 << " ?????????: "; cin >> arKol[i];
			cout << "\n??????? ????? ???. SGI Callange (???) " << i + 1 << " ?????????: "; cin >> arCallenge[i];
			cout << "\n??????? ????? ???. ?? SGI Indy (???) " << i + 1 << " ?????????: "; cin >> arIndy[i]; cout << endl << endl;

			SumSec += arCallenge[i] + arIndy[i];
			SumKol += arKol[i];
		}

		SrSumSec = SumSec / sizeC;

		cout << "--------------------------------------------------------------------------------------------------------\n";
		cout << "|????? ?????????? ????????? ????????, ??????? ????????? ???????????? ?????????                         |\n";
		cout << "|------------------------------------------------------------------------------------------------------|\n";
		cout << "| ???????? ????????? | ???-?? ????? ???? |????? ???. ?? SGI Callenge (???)|????? ???. ?? SGI Indy (???)|\n";
		cout << "|--------------------|-------------------|--------------------------------|----------------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-20c|%-19d|%-32.2f|%-28.2f|\n", arNam[i], arKol[i], arCallenge[i], arIndy[i]);

		}

		cout << "|--------------------|-------------------|--------------------------------|----------------------------|\n";
		printf_s("|??. ???-???????????|%-20d|                                |                            |\n", SumKol);
		cout << "|--------------------|-------------------|--------------------------------|----------------------------|\n";
		printf_s("| ??. ??. ????? ???. |                   |%-61.2f|\n", SrSumSec);
		cout << "|------------------------------------------------------------------------------------------------------|\n";
		cout << "|??????????: O-OCEAN, D-DYFESM, T-TRFD                                                                 |\n";
		cout << "--------------------------------------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	11	??????????? ???????		//-------------------------------------------------------------//

	if (a == 11) {
		cout << "?? ??????? 11 ??????? ???????????? ????????????????? ??????????\n\n";
		cout << "??????? ???-?? ??????????: ";

		int sizeC;
		float SumVla = 0;
		float SumKoef = 0;
		float SrSumVla = 0;
		float SrSumKoef = 0;

		cin >> sizeC;
		cout << endl;

		cout << "?????????? (????????): A-????????, G-??????????, C-?????, F-??????, S-?????????.\n";
		char* arVva = new char[sizeC] {};
		cout << "?????????? (???): M-???????, T-?????????????????? ?????????, O-?????? ?????????.\n";
		char* arType = new char[sizeC] {};
		float* arVla = new float[sizeC] {};
		float* arKoef = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ???????? ?? ???????? ??????? " << i + 1 << " ????????: "; cin >> arVva[i];
			cout << "\n??????? ??? " << i + 1 << " ?????????: "; cin >> arType[i];
			cout << "\n??????? ????????? (%) " << i + 1 << " ?????????: "; cin >> arVla[i];
			cout << "\n??????? ?????????? " << i + 1 << " ?????????: "; cin >> arKoef[i]; cout << endl << endl;

			SumVla += arVla[i];
			SumKoef += arKoef[i];
		}

		SrSumVla = SumVla / sizeC;
		SrSumKoef = SumKoef / sizeC;

		cout << "-----------------------------------------------------------------\n";
		cout << "|???????????? ????????????????? ??????????                      |\n";
		cout << "|---------------------------------------------------------------|\n";
		cout << "|   ????????    |      ???      | ????????? (%) |  ???????????  |\n";
		cout << "|---------------|---------------|---------------|---------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-15c|%-15c|%-15.1f|%-15.3f|\n", arVva[i], arType[i], arVla[i], arKoef[i]);

		}

		cout << "|---------------|---------------|---------------|---------------|\n";
		printf_s("| ??. ????????? |               |%-15.1f|               |\n", SrSumVla);
		cout << "|---------------|---------------|---------------|---------------|\n";
		printf_s("|??. ???????????|               |               |%-15.3f|\n", SrSumKoef);
		cout << "|---------------------------------------------------------------|\n";
		cout << "|??????????: A-????????, G-??????????, C-?????, F-??????,       |\n";
		cout << "|                                                   S-?????????.|\n";
		cout << "|??????????: M-???????, T-?????????????????? ?????????,         |\n";
		cout << "|                                            O-?????? ?????????.|\n";
		cout << "-----------------------------------------------------------------\n";
	}

	//--------------------------------------------//	12	??????????? ???????		//-------------------------------------------------------------//

	if (a == 12) {
		cout << "?? ??????? 12 ??????? ???????????????????? ????????\n\n";
		cout << "??????? ????? ???????: ";

		int sizeC;
		int SumPlo = 0;
		float SumYro = 0;
		float SrSumYro = 0;

		cin >> sizeC;
		cout << endl;

		cout << "?????????? (????????): S-???, P-??????, R-???, G-?????, F-??????.\n";
		char* arKul = new char[sizeC] {};
		cout << "?????????? (???): C-????????, B-???????.\n";
		char* arType = new char[sizeC] {};
		int* arPlo = new int[sizeC] {};
		float* arYro = new float[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? " << i + 1 << " ????????: "; cin >> arKul[i];
			cout << "\n??????? ??? " << i + 1 << " ????????: "; cin >> arType[i];
			cout << "\n??????? ???????? ??????? (??) " << i + 1 << " ????????: "; cin >> arPlo[i];
			cout << "\n??????? ??????????? (?/??) " << i + 1 << " ????????: "; cin >> arYro[i]; cout << endl << endl;

			SumPlo += arPlo[i];
			SumYro += arYro[i];
		}

		SrSumYro = SumYro / sizeC;

		cout << "---------------------------------------------------------------------\n";
		cout << "|???????????????????? ????????                                      |\n";
		cout << "|-------------------------------------------------------------------|\n";
		cout << "|  ????????  |   ???   | ???????? ??????? (??) | ??????????? (?/??) |\n";
		cout << "|------------|---------|-----------------------|--------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-12c|%-9c|%-23d|%-20.1f|\n", arKul[i], arType[i], arPlo[i], arYro[i]);

		}

		cout << "|------------|---------|-----------------------|--------------------|\n";
		printf_s("|??. ??????? |         |%-23d|                    |\n", SumPlo);
		cout << "|------------|---------|-----------------------|--------------------|\n";
		printf_s("|??. ???????.|         |                       |%-20.1f|\n", SrSumYro);
		cout << "|-------------------------------------------------------------------|\n";
		cout << "|?????????? (????????): S-???, P-??????, R-???, G-?????, F-??????.  |\n";
		cout << "|?????????? (???): C-????????, B-???????.                           |\n";
		cout << "---------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	13	??????????? ???????		//-------------------------------------------------------------//

	if (a == 13) {
		cout << "?? ??????? 13 ??????? ????????? ? ??????????? ????????????\n\n";
		cout << "??????? ???-?? ????????????????: ";

		int sizeC;
		float SumEkz = 0;
		int SumLvl = 0;
		float SrSumEkz = 0;
		float SrSumLvl = 0;

		cin >> sizeC;
		cout << endl;

		int* arNom = new int[sizeC] {};
		int* arGod = new int[sizeC] {};
		float* arEkz = new float[sizeC] {};
		int* arLvl = new int[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ????? " << i + 1 << " ????????: "; cin >> arNom[i];
			cout << "\n??????? ??? ???????? " << i + 1 << " ????????: "; cin >> arGod[i];
			cout << "\n??????? ?????? ???-?? ????????? " << i + 1 << " ????????: "; cin >> arEkz[i];
			cout << "\n??????? ???????? ??????? ???????????? " << i + 1 << " ????????: "; cin >> arLvl[i]; cout << endl << endl;

			SumEkz += arEkz[i];
			SumLvl += arLvl[i];
		}

		SrSumEkz = SumEkz / sizeC;
		SrSumLvl = SumLvl / sizeC;

		cout << "-----------------------------------------------------------------------------\n";
		cout << "|????????? ? ??????????? ????????????                                       |\n";
		cout << "|---------------------------------------------------------------------------|\n";
		cout << "| ????? | ??? ???????? | ?????? ???-?? ????????? | ???????? ??????? ??????. |\n";
		cout << "|-------|--------------|-------------------------|--------------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-7d|%-14d|%-25.1f|%-26d|\n", arNom[i], arGod[i], arEkz[i], arLvl[i]);

		}

		cout << "|----------------------|-------------------------|--------------------------|\n";
		printf_s("|    ??????? ??????    |%-25.1f|                          |\n", SrSumEkz);
		cout << "|----------------------|-------------------------|--------------------------|\n";
		printf_s("| ??????? ??????? ????????????                   |%-26.1f|\n", SrSumLvl);
		cout << "|---------------------------------------------------------------------------|\n";
		cout << "|?????????? ???????? ???????? ?????? ?? ??????????? ????????? ??            |\n";
		cout << "|                                   ????????????? ? ???????????? ??????????.|\n";
		cout << "-----------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//	14	????????????? ???????	//-------------------------------------------------------------//

	if (a == 14) {
		cout << "?? ??????? 14 ??????? ?????? ??????????? ??????\n\n";
		cout << "??????? ???-?? ??????: ";

		int sizeC;
		float SumYbi = 0;
		int SumPro = 0;
		float SrSumPro = 0;

		cin >> sizeC;
		cout << endl;

		cout << "??????????: P-????????????, T-?????????????, A-??????????\n";
		char* arKod = new char[sizeC] {};
		int* arKat = new int[sizeC] {};
		float* arYbi = new float[sizeC] {};
		int* arPro = new int[sizeC] {};

		for (int i = 0; i < sizeC; i++) {
			cout << "\n??????? ??? ??????????? " << i + 1 << " ??????: "; cin >> arKod[i];
			cout << "\n??????? ????????? " << i + 1 << " ??????: "; cin >> arKat[i];
			cout << "\n??????? ?????? (???. ???) " << i + 1 << " ??????: "; cin >> arYbi[i];
			cout << "\n??????? ???? ??????? (??) " << i + 1 << " ??????: "; cin >> arPro[i]; cout << endl << endl;

			SumYbi += arYbi[i];
			SumPro += arPro[i];
		}

		SrSumPro = SumPro / sizeC;

		cout << "----------------------------------------------------------------------------------\n";
		cout << "|?????? ??????????? ??????                                                       |\n";
		cout << "|--------------------------------------------------------------------------------|\n";
		cout << "| ??? ??????????? | ????????? | ?????? ?? ?????? (???. ???) | ???? ???????? (??) |\n";
		cout << "|-----------------|-----------|-----------------------------|--------------------|\n";

		for (int i = 0; i < sizeC; i++) {
			printf_s("|%-17c|%-11d|%-29.2f|%-20d|\n", arKod[i], arKat[i], arYbi[i], arPro[i]);

		}

		cout << "|-----------------------------|-----------------------------|--------------------|\n";
		printf_s("|        ????? ??????         |%-29.2f|                    |\n", SumYbi);
		cout << "|-----------------------------------------------------------|--------------------|\n";
		printf_s("|              ??????? ???? ???????                         |%-20.1f|\n", SrSumPro);
		cout << "|--------------------------------------------------------------------------------|\n";
		cout << "| ?????????? P-????????????, T-?????????????, A-??????????                       |\n";
		cout << "----------------------------------------------------------------------------------\n";
	}

	//--------------------------------------------//		??????    ?????			//-------------------------------------------------------------//

	if ((a <= 0) || (a >= 15)) {
		cout << "?? ????? ???????????? ????? ???????????? ??????\n??????? ????a\n" << endl;
		goto repit;
	}

}
