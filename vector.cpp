#include<iostream>
#include"vector.h"
using namespace std;
template<class T>
class vector
{
public:
typedef T* iterator;
typedef const T* const_iterator;
iterator begin() {
    return _start;
}
iterator end() {
    return _finish;
}
const_iterator cbegin() const {
    return _finish;
}
const_iterator cend() const {
    return _start;
}
//构造函数
vector(): _start(nullptr), _finish(nullptr), _end0fStorage(nullptr) {}
//n个value的构造函数
vector(int n, const T& value = T()): _start(nullptr), _finish(nullptr), _end0fStorage(nullptr)
{
	reserve(n);
	for (size_t i = 0; i < n; i++)
	{
		push_back(value);
	}
}
 //通过迭代器构造
template<class InputIterator>
vector(InputIterator first, InputIterator last) : _start(nullptr), _finish(nullptr),_end0fStorage(nullptr) {
    while (first != last) {
        push_back(*first);
        first++;
    }
}
 //拷贝构造函数 
vector(const vector<T>& v):_start(nullptr), _finish(nullptr), _end0fStorage(nullptr) {
      vector<T> tmp(v.begin(),v.end());
      swap(tmp);
 }
 //赋值运算符重载
vector <T> & operator = (vector<T> v) {
    this->swap(v);
    return *this;
}
//析构函数
~vector() {
   if(_start) {
       delete [] _start;
       _start = _finish = _end0fStorage = nullptr;
   }
}
size_t size() const {
    return _finish - _start;
}
void capacity(size_t n) {
    return _finish - _end0fStorage;
}
void reserve(size_t n) {
    size_t sz = size();
    if( n > capacity()) {
        T *tmp = new T[n];
        if( _start) {
        for( size_t i = 0; i < size(); i++) {
            tmp[i] = _start[i];
        }
        delete [] _start;
        }
        _start = tmp;
    }
    _finish = _start + sz;
    _end0fStorage = _start + n;
}
void resize(size_t n, const T& value = T()){
    if(n > capacity()) {
         reserve(n);
    }
    if(n > size()) {
        while (_finish < _start + n) {
           * _finish = value;
           _finish ++;
        }
    }
    else {
        _finish = _start + n;
    }
}
void swap(vector<T> &v) {
    std::swap(_start,v._start);
    std::swap(_finish,v._finish);
    std::swap(_end0fStorage,v._end0fStorage);
}
void push_back(const T& x) {
    if(_finish == _end0fStorage) {
        size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
        reserve(newcapacity);
    }
    *_finish = x;
    _finish ++;
}
void pop_back() {
    if (_finish > _start)//判断是否可以进行删除
	{
		_finish--;
	}
}
//operator[]运算符重载
T& operator[](size_t pos)
{
    assert(pos < size());//检测pos的合法性
    return _start[pos];
}
iterator insert(iterator pos, const T& x) {
    assert(pos >= _start && pos <= _finish);
    if(_finish == _end0fStorage) {
        size_t n = pos - _start;
        size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
        reserve(newcapacity);
        pos = _start + n;
    }
    iterator end = _finish - 1;
    while(end >= pos) {
        *(end + 1) = *(end);
        end --;
    }
    *pos = x;
    _finish ++;
    return pos;
}
iterator erase(iterator pos) {
    assert(pos >= _start && pos <= _finish);
    iterator it = pos + 1;
    while(it < _finish) {
        *(it - 1) = *it;
        it++;
    }
    _finish--;
	return pos;
}
//clear清空数据
void clear()
{
	_finish = _start;
}
private:
    iterator _start; // 指向数据块的开始
    iterator _finish; // 指向有效数据的尾
    iterator _end0fStorage; // 指向存储容量的尾
};
int main() {
    yolo::vector<int> a;
    a.resize(5);
    for(int i = 0; i < 5; i++)
    cout << a[i] << endl;
    return 0;
}
