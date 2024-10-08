﻿#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

//실습 
// 템플릿으로 바꾸기 vector


class Vector
{
	// 함수는 public
public:
	//데이터 추가
	void push_back(int data);
	//데이터 삭제 (마지막인덱스)
	void pop_back();
	//데이터 접근
	int operator[](int index);

	int Size() { return _size; }
	int Capacity() { return _capacity; }

	// 변수는 private
private:
	int* _arr = nullptr;
	int _size = 0;
	int _capacity = 0;
};


//데이터 추가
void Vector::push_back(int data)
{
	//데이터 추가하는방법
	if (_arr == nullptr)
	{
		_capacity = 3;
		_arr = new int[_capacity];
	}
	else
	{
		if (_capacity == _size)
		{
			_capacity *= 2;
			//새롭게 공간을 만들고
			int* newArr = new int[_capacity];

			//새롭게 만든공간에 기존데이터를 넣어주고
			for (int i = 0; i < _size; i++)
			{
				newArr[i] = _arr[i];
			}

			//기존공간 파괴
			delete[] _arr;
			_arr = newArr;
		}
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
	//항상 true여야함.
	assert(index <= _size);

	return _arr[index];
}