# include<iostream>
# include<fstream>

using namespace std;
int* sortIt(int * ptr1, int * ptr2, int start1 ,int end1,int start2, int end2)
{
    if(start1 - end1  ==0 && start2-end2==0 )
    {
        if(ptr1[start1]<ptr2[start2])
        {
            return int * ptr = ptr1+ptr2;
        }
        else return int * ptr = ptr2 + ptr1;
    }
}
int main()
{
    int start=0 , end1 = 99;
    int *ptr_res = new int[100];
    fstream file("MergeSort.txt",ios::in);
    int *ptr = new int[100];
    for(int i = 0; i<100;  i++)
    {
        file >> ptr[i];
    }
    file.close();
    sortIt(ptr, ptr_res,start,end1);
    for(int i = 0; i< 100; i++)
    {
        cout << ptr_res[i] << endl;
    }

}
