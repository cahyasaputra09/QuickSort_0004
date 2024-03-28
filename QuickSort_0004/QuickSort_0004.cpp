#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20];
int cmp_cout = 0; // number of comparasion
int mov_cout = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "masuk panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nmaksimum panjang array adalah 20" << endl;
	}

	cout << "\n--------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n--------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swaps the element at index x with the element at index y
volid swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;


}

void q_short(int low, int high)
{

	int temp;
	int pivot, i, j;
	if (low > high) { //step1
		returt;
	}
}

pivot = arr[low]; //step 2
i = low + 1; //step 3
j = high; //step 4

while (i <= j) //step 10
{
	//search for an element greater than pivot
	while ((arr[i] <= pivot) && (i <= high)) // step 5
	{
		j--; //step 8
		camp_cout++;
	}
	cmp_cout++;
	if (i < j) //   step 9
	{
		//swap the element at index i whit the element at index j
		swap(i, j);
	}
}

if (low < j) { //step 11 
	//swap the pivot element with the element at index j
	swap(low, j);
}

//recursive call to sort the left sub array
q_short(low, j - 1); //step12

//recursive call to sort the right sub array

q_short(j + 1, high) //step13


}


void display()
cout << "\n--------------" << endl;
cout << "sorted Array" << endl;
cout << "----------------" << endl;

for (int i = 0; i < n; i++)
{
	cout << arr[i] << " ";
}

cout << "\n\nNumber of comparasions: " << cmp_count << endl;
cout << " number of data movements: " << mov_count << endl;
{
	int main()
}
char ch;

do {
	input()
		q_short(0, n - 1);
	display();
	cout << "\n\nDo you want to continue? (y/n): ";
	cin >> ch;
	if (ch == 'n' // ch == 'n')
		break;

		system("pause");
		system("cls");

} while (true);

return 0;

}
