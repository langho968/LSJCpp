﻿#pragma once
#include <iostream>

using namespace std;

class Vector
{
//함수는 public
public:
	//데이터 추가
	void push_back(int data);
	//데이터 삭제
	void pop_back();
	//데이터 접근
	int operator[](int index);

//변수는 private
private:
	int* _arr = nullptr;
	int _size = 0;
};

//데이터 추가
void Vector::push_back(int data)
{
	//데이터 추가하는 방법
	if (_arr == nullptr)
	{
		int _capacity = 3;
		_arr = new int[_capacity];
	}
	else
	{
			
		//새롭게 공간을 만들고
		int* newArr = new int[_size];

		//새롭게 만든 공간에 현재 데이터를 넣어주고
		for (int i = 0; i < _size; i++)
		{
			newArr[i] = _arr[i];
		}

		//기존 공간 파괴
		delete[] _arr;
		_arr = newArr;

		
	}

	_arr[_size] = data;

	_size++;
}
//데이터 삭제
void Vector::pop_back()
{
	_size--;
}
//데이터 접근
int Vector::operator[](int index)
{
	return _arr[index];
}