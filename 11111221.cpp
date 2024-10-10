using namespace std;
#include <iostream>
#include <algorithm>
///////////111111111111111111111111111
//void sdd(int s1, int s2, int s3, int w1, int w2, int w3) {
//    if (s3 % 4 == 0 && s3 % 100 != 0 ) {
//        cout << "year1 e vysocosnym" << s3 << endl;
//        
//    }
//    else {
//        cout << "year1 ne e vysocosnym" << endl;
//        
//    }
//    if (w3 % 4 == 0 && w3 % 100 != 0) {
//        cout << "year2 e vysocosnym" << w3 << endl;
//        
//
//    }
//    else {
//        cout << "year2 ne e vysocosnym" << endl;
//        
//    }
//
//}
//int wwe(int s1, int s2, int s3, int w1, int w2, int w3) {
//    int sum2 = 0;
//    int sum1 = 0;
//    int ss = 0;
//    sum1 = s3 * 325 + s1;
//    sum1 = sum1 + s2 * 30;
//    sum2 = w3 * 325 + w1;
//    sum2 = sum2 + w2 * 30;
//    ss = sum1 - sum2;
//    return ss;
//
//
//
//
//
//
//}
//int main()
//{
//    int s1 = 0;
//    int s2 = 0;
//    int s3 = 0;
//    int w1 = 0;
//    int w2 = 0;
//    int w3 = 0;
//    cout << "day1:" << endl;
//    cin >> s1;
//    cout << "month1:" << endl;
//    cin >> s2;
//    cout << "year1:" << endl;
//    cin >> s3;
//    cout << "day2:" << endl;
//    cin >> w1;
//    cout << "month2:" << endl;
//    cin >> w2;
//    cout << "year2:" << endl;
//    cin >> w3;
//    sdd(s1, s2, s3, w1, w2, w3);
//    cout << "riznusca:" << wwe(s1, s2, s3, w1, w2, w3) << "days";
//
//
//
//}

///////////////////////2222222222222222222222222222222222222222222222222222222
//int es(int arr[], int size){
//	int syma = 0;
//	for (int i = 0; i < size; i++)
//	{
//		syma += arr[i];
//	}
//	return syma / size;
//}
//int main() {
//	int size = 0;
//	int* arr = new int[size];
//	cout << "kilkists:";
//	cin >> size;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "elementy:";
//		cin >> arr[i];
//	}
//	cout << "serefnie:" << es(arr, size);
//
//
//}
///////////////333333333333333333333333333333333333333

//void es(int arr[], int size){
//	int sp = 0;
//	int sm = 0;
//	int s0 = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (sp < arr[i] )
//		{
//			sp += 1;
//		}
//		if (sm > arr[i])
//		{
//			sm += 1;
//		}
//		if (s0 == arr[i])
//		{
//			s0 += 1;
//		}
//		
//	}
//	cout << "+:" << sp <<" " << "-:"<< sm - 1 <<" " << "zero:" << s0;
//
//}
//int main() {
//	int size = 0;
//	int* arr = new int[size];
//	cout << "kilkists:";
//	cin >> size;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "elementy:";
//		cin >> arr[i];
//	}
//	es(arr, size);
//
//
//}
///////////////////////////////4444444444444444444444444444444444444444444444
//void sd(int mat[][50], int size) {
//	cout << "element:";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> mat[i][j];
//		}
//	}
//}
//void sd(float mat[][50], int size) {
//	cout << "element:";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> mat[i][j];
//		}
//	}
//}
//void sd(char mat[][50], int size) {
//	cout << "element:";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> mat[i][j];
//		}
//	}
//}
//
//void sq(int mat[][50], int size) {
//	cout << "element:";
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << mat[i][j];
//		}
//		cout << endl;
//	}
//}
//void sq(float mat[][50], int size) {
//	cout << "element:";
//	for (int i = 0; i < size; i++)
//	{
//
//		for (int j = 0; j < size; j++)
//		{
//			cout << mat[i][j];
//		}
//		cout << endl;
//	}
//}
//void sq(char mat[][50], int size) {
//	cout << "element:";
//	for (int i = 0; i < size; i++)
//	{
//
//		for (int j = 0; j < size; j++)
//		{
//			cout << mat[i][j];
//		}
//		cout << endl;
//	}
//}
//
//void sf(int mat[][50], int size) {
//	cout << "element:";
//	
//	
//		int max = mat[0][0];
//		int min = mat[0][0];
//		for (int j = 0; j < size; j++)
//		{
//			if (mat[j][j] < min) {
//				mat[j][j] = min;
//			}
//		}
//		cout << "min:" << min << endl;
//		cout << "max:" << max << endl;
//	
//	
//}
//void sf(float mat[][50], int size){
//int max = mat[0][0];
//int min = mat[0][0]; 
//	cout << "element:";
//	for (int j = 0; j < size; j++)
//	{
//		if (mat[j][j] < min) {
//			mat[j][j] = min;
//		}
//
//	}
//	cout << "min:" << min << endl;
//	cout << "max:" << max << endl;
//}
//void sf(char mat[][50], int size) {
//	int max = mat[0][0];
//	int min = mat[0][0];
//	cout << "element:";
//	for (int j = 0; j < size; j++)
//	{
//		if (mat[j][j] < min) {
//			mat[j][j] = min;
//		}
//	}
//	cout << "min:" << min << endl;
//	cout << "max:" << max << endl;
//}



//int main() {
//	int ma[50][50];
//	int max[50][50];
//	int mas[50][50];
//	int size = 0;
//	cout << "rozmir";
//	cin >> size;
//	sd(ma, size);
//	sd(ma, size);
//	sd(ma, size);
//	sq(max, size);
//	sq(max, size);
//	sq(max, size);
//	sf(mas, size);
//	sf(mas, size);
//	sf(mas, size);
//
//
//
//
//
//
//
//}


//void sf(int mat[], int size) {
//    int temp;
//
//
//    for (int i = 0; i < size; i++) {
//        for (int j = size - 1; j > 1; j--) {
//            if (mat[j - 1] > mat[j])
//            {
//                temp = mat[j - 1];
//                mat[j - 1] = mat[j];
//                mat[j] = temp;
//
//            }
//
//
//        }
//    }
//
//}
//void doublesf(double mat[], int size) {
//    int temp;
//
//
//    for (int i = 0; i < size; i++) {
//        for (int j = size - 1; j > 1; j--) {
//            if (mat[j - 1] > mat[j])
//            {
//                temp = mat[j - 1];
//                mat[j - 1] = mat[j];
//                mat[j] = temp;
//
//            }
//
//
//        }
//    }
//
//}
//void charsf(char mat[], int size) {
//    int temp;
//
//
//    for (int i = 0; i < size; i++) {
//        for (int j = size - 1; j > 1; j--) {
//            if (mat[j - 1] > mat[j])
//            {
//                temp = mat[j - 1];
//                mat[j - 1] = mat[j];
//                mat[j] = temp;
//
//            }
//
//
//        }
//    }
//
//}
//
//
//int main() {
//    int mat[10] = {2312,32,-23,-4232,-34,343,3434,32234,32};
//    double doublemat[10] = { 12.34,2312,32,-23,-4232,-34,343.45454454,3434,32234,32 };
//    char charmat[10] = { 92,12,4532,-3323,-45454232,-364,33,22434,-32234,32 };
//	int size = 10;
//
//    sf(mat, size);
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < size; j++)
//            {
//                cout << mat[j] << " " ;
//            }
//               cout << endl;
//        }
//
//
//
//        doublesf(doublemat, size);
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < size; j++)
//            {
//                cout << doublemat[j] << " ";
//            }
//            cout << endl;
//        }
//        charsf(charmat, size);
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < size; j++)
//            {
//                cout << charmat[j] << " ";
//            }
//            cout << endl;
//        }
//       
//}


int recurs(int num1, int num2) {


	int sum = 0;
	int idex;
	
		for (int i = 1; i <= num1; i++)
		{
			if (num1 / i == 0)
			{
				sum = i;

			}

		}

		for (int i = 1; i <= num2; i++)
		{
			if (num2 / i == 0)
			{
				sum = i;

			}
		}


		if (num2 == 0) {
			return num1;
		}
		if (num1 == 0) {
			return num2;
		}
		if (num1 > num2) {
			for (int i = 1; i <= sum; i++)
			{
				if (num1 / i == 0 and num2 / i == 0) {
					i + sum;
					if (sum > i) {
						sum = i;
					}
				}

			}
			return sum;












			return sum;
		}
	




	int main(); {
		int num1, num2, size;
		cout << "num1:";
		cin >> num1;
		cout << "num2:";
		cin >> num2;
		cout << "size:";
		cin >> size;
		recurs(num1, num2);
	}
