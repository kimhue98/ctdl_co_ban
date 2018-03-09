#include<iostream>
using namespace std;
int LietKe(int *a, int n)
{
//test
for(int i=0; i<n-1; i++)
	for(int j=i+1; j<n; j++)
	{
		bool kt = true;
		for(int k=0; k<j; k++ )
		{
		if(a[j] == a[k])
		{
			kt = false;
			break;
		}
		}
		if(kt == true)
			cout<<"( "<<a[i]<<", "<<a[j]<<" )"<<endl;
	}
	return 0;
}
int main()
{
int n;
cout<<"Nhap so phan tu cua mang: ";    //1    0  1   8  -5
cin>>n;
int *a = new int [n];
cout << "\nNhap cac phan tu cua mang:\n";
	for(int j = 0; j < n; j++)
		cin >> a[j];
	cout<<"\nCac cap gia tri trong mang la:\n";
	LietKe(a, n);
delete []a;
system("pause");
return 0;
}