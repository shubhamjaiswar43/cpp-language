#include<iostream>
using namespace std;
int main(){
	// system("cls");
	// int *p=NULL,m;
	// cout<<"Enter the size of the array : ";
	// cin>>m;
	// p=(int*)malloc(m*sizeof(int));
	// for(int i=0;i<m;i++){
	// 	cout<<"Enter the "<<i+1<<" Element of the array : ";
	// 	cin>>p[i];
	// }
	// cout<<"The Entered Array is : ";
	// for(int i=0;i<m;i++){
	// 	cout<<p[i]<<" ";
	// }
	// for(int i=0;i<m;i++){
	// 	for(int j=i+1;j<m;j++){
	// 		if(p[i]>p[j]){
	// 			p[i]=p[i]+p[j];
	// 			p[j]=p[i]-p[j];
	// 			p[i]=p[i]-p[j];
	// 		}
	// 	}
	// }
	// cout<<endl<<"The Sorted Array is : ";
	// for(int i=0;i<m;i++){
	// 	cout<<p[i]<<" ";
	// }
	int **ptr=NULL,m,n;
	cout<<"Enter the No. of m of the matrix : ";
	cin>>m;
	cout<<"Enter the No. of column of the matrix : ";
	cin>>n;
	ptr = (int**)malloc(m*sizeof(int*));
	for (int i = 0; i < m; i++)
	{
		ptr[i] = (int*)malloc(n*sizeof(int));
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"Enter the a"<<i+1<<j+1<<" Element of the matrix : ";
			cin>>ptr[i][j];
		}
	}
	cout<<endl<<"The Entered Matrix is : "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}
	free(ptr);
	return 0;
}