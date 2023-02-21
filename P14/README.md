# Chapter14 C++中的代码重用
## C++代码重用
    - 公有继承
    - 私有继承、保护继承
    - 包含、组合、层次化
### 包含对象成员的类
- valarray类
    ```c++
    valarray<int> q_values;
    valarray<double> weights;
    // 构造函数的使用
    valarray<double> v1;
    valarray<int> v2(8);
    valarray<int> v3(10, 8);
    valarray<double> v4(gpa, 4);
    ```
- 关键字explicit
    用于关闭隐式类型转换，单参数构造函数在不加explicit的情况下将进行隐式类型转换

### 私有继承
	如果新类需要访问原有类的保护成员，或需要重新定义虚函数，则应使用私有继承。

## 类模板 
### 定义
- 模板定义
	```c++
	template <class Type>    // method1
	template <typename Type> // method2
	
	// function define method
	template <class Type>
	bool ClassName<Type>::method(const Type& param)
	{
		...
	}
	```
- 模板的具体化
    - 隐式具体化
        `ArrayTP<int, 100> stuff;`
    - 显示实例化
        `template class ArrayTP<string, 100>;`
    - 显示具体化
        `template <typename T>`
        `class SortedArray`
        `{`
        `}`
