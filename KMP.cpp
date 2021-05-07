#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;

int* ComputePrefix(char P[])
{
    size_t m = strlen(P);
    int *pi = new int[m];
    pi[0] = 0;
    int k = 0;

    for(int q =0; q < m; q++)
    {
        if( k > 0 && P[k+1] != P[q])
            k = pi[k];

        if( P[k+1] == P[q])
            {
                pi[q] = k;
                k = k + 1;
            }
            pi[q]=k;
    }

    return (pi);
}

void KMP_Matcher(char T[], char P[])
{

    size_t n = strlen(T);
    size_t m = strlen(P);

    int *pi = new int[m];
    pi = ComputePrefix(P);

    cout<<endl;


    int q =0;
    for (int i = 0; i <= n; i++)
    {
        if( q > 0 && P[q] != T[i] )
        {
            q = pi[q - 1];
        }


        else if( P[q] == T[i])
        {


            if( q == m-1)
            {
                cout<<"Shift occurs at : "<< i-q <<endl;
                q = pi[q];
            }
            else q = q + 1;
        }

        else q++;
    }
}


int main()
{
    char T[] = "abababacaba";
    char P[] = "ababaca";
    
    KMP_Matcher(T,P);
    cout<<t[]<<p[];
    system("pause");
    return 0;
}
