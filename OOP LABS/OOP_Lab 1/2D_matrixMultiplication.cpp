
#include<iostream>
using namespace std;
void addMatrix(int A[3][3],int B[3][3], int C[3][3]){
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiMatrix(int A[3][3], int B[3][3], int M[3][3]){
    
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            M[i][j]=0;
            for(int k=0; k<3; k++){
                M[i][j] += A[i][k] * B[k][j];
            }
        }
     }


}

int main(){
    int A[3][3],B[3][3];
    int C[3][3],M[3][3];

    // Input first matrix
    cout<<"Enter values of matrix A: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> A[i][j];
        }
         cout<<"\n";
    }

     // Input second matrix
    cout<<"Enter values of matrix B: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> B[i][j];
        }
        cout<<"\n";
    }

    addMatrix(A,B,C);
    multiMatrix(A,B,M);

    // Display results
    cout<<"Sum of matrix is: "<< " ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<C[i][j]<< " ";
        }
         cout<<"\n";
    }

    cout<<"Multiplication of matrix is: "<< " ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<M[i][j]<< " ";
        }
         cout<<"\n";
    }
    
    

    
}