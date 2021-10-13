#include<iostream>
using namespace std;

class Array
{
public:
	Array(int num);
	~Array();

	void SetArray(int num,int num2)
	{
		if (num < ArraySize && 0 <= num)
		{
			newArray[num2] = num2;
		}
		else
		{
			cout << "配列外参照です(Seter)\n";
		}
	}
	int GetArray(int num)
	{
		if (num<ArraySize && 0<=num)
		{
			return newArray[num];
		}
		else
		{
			cout<<"配列外参照です(Geter)\n";
			return NULL;
		}
	}
	//Arrayサイズの変更
	void SetArraySize(int num)
	{
		ArraySize = num;
	}
	//Arrayサイズ取得
	int GetArraySize()
	{
		return ArraySize;
	}

	/*
	void CreateCheck()
	{
		if (newArray == nullptr)
		{
			cout << "メモリ不足しています";
		}
	}
	*/

private:
	int* newArray = nullptr;
	int ArraySize;
};

Array::Array(int num)
{
	newArray = new int[num];
	ArraySize = num;
}

Array::~Array()
{
	delete[] newArray;
	newArray = nullptr;
}

int main()
{
	Array ary(1000);

	for (int i = 0; i < 1001; ++i)
	{
		ary.SetArray(i, i);

		cout << "num=" << ary.GetArray(i) << "\n";
		cout << i<<"\n";
	}
	return 0;
}

