#include <iostream>

using namespace std;

//int main() {
//	// 사칙연산 + 나머지연산자 
//	// 숫자 연산자 숫자... "=" 입력하면 답 나오고 "종료하시겠습니까?(Y/N)"
//
//	int Num[100] = { 0 };
//	char O[100] = { 0 };
//	int Ans;
//
//	cin >> Num[0];
//	cin >> O[0];
//	Ans = Num[0];
//
//	for (int i = 1; i < 100; i++) {
//
//		cin >> Num[i];
//		cin >> O[i];
//
//		switch (O[i])
//		{
//
//		case '+':
//			Ans = Num[i] + Num[i + 1];
//			break;
//
//		case '-':
//			Ans = Num[i] - Num[i + 1];
//			break;
//
//		case '*':
//			Ans = Num[i] * Num[i + 1];
//			break;
//
//		case '/':
//			Ans = Num[i] / Num[i + 1];
//			break;
//
//		case '%':
//
//			Ans = Num[i] % Num[i + 1];
//			break;
//
//		case '=':
//
//			// Ans= eval('${Num[i]} ${O[i]} ${Num[i+1]}') ;
//		   //Ans= Num[i-1] O[i-1] Num[i]
//
//			for (int j = 0; j <= i; j++) {
//				cout << Num[j] << O[j];
//			}
//			cout << Ans << endl;
//
//			cout << "종료하시겠습니까?(Y/N)" << endl;
//			char Fin;
//			cin >> Fin;
//			if (Fin == 'Y' || Fin == 'y')
//			{
//				return 0;
//			}
//
//			if (Fin == 'N' || Fin == 'n')
//			{
//				int Num[100] = { 0 };
//				char O[100] = { 0 };
//				int Ans;
//
//				cin >> Num[0];
//				cin >> O[0];
//				Ans = Num[0];
//
//			}
//		default:
//			break;
//		}
//		break;
//	}
//	return 0;
//}
int Finish(float LastAnswer)
{
	//Ans= eval('${Num[i]} ${O[i]} ${Num[i+1]}') ;        ???
	//Ans= Num[i-1] O[i-1] Num[i]                          ???

	for (int j = 0; j <= i; j++) 
	{
		cout << Num[j] << O[j];
	}
	cout << LastAnswer << endl;

	cout << "종료하시겠습니까?(Y/N)" << endl;
	char Fin;
	cin >> Fin;

	if (Fin == 'Y' || Fin == 'y')
	{
		return 0;
	}

	if (Fin == 'N' || Fin == 'n')
	{
		OutCalculate();
	}
}

float OutCalculate()
{
	float Num[100] = { 0 };
	char Opr[100] = { 0 };
	float Answer;

	cin >> Num[0];
	cin >> Opr[0];
	Answer = Num[0];

	return Answer;
}

float InCalculate(float Ans)
{
	for (int i = 1; i < 100; i++) 
	{
		cin >> Num[i];
		cin >> Opr[i];

		switch (Opr[i])
		{
		case '+':
			Ans = Num[i] + Num[i + 1];
			break;

		case '-':
			Ans = Num[i] - Num[i + 1];
			break;

		case '*':
			Ans = Num[i] * Num[i + 1];
			break;

		case '/':
			Ans = Num[i] / Num[i + 1];
			break;

		case '%':

			Ans = Num[i] % Num[i + 1];
			break;

		case '=':

			Finiish();

		default:
			//break;
		}

	}
}

int main()
{
	while (1)
	{
		float FirstAnswer= OutCalculate();
		InCalculate(FirstAnswer);


	}
}