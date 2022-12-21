#include<iostream> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0;
double number;
cout << " Enter the amount of integers to sum = "; cin >> k;
do {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
while (number-(int)number!=0)
{cout << "The number is not an integer " << endl;
cout<<"Enter an another number =";
cin>>number;
break;
}
sum_k+= number; i++;
}while (i<=k);
cout <<"The total sum of"<<k<< "integers, i:" << sum_k;
return 0;
}

