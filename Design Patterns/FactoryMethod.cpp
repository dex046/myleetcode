//优点：增加一个运算类（例如N次方类），只需要增加运算类和相对应的工厂，两个类，不需要修改工厂类。
//缺点：增加运算类，会修改客户端代码，工厂方法只是把简单工厂的内部逻辑判断移到了客户端进行。
class Product
{
};

class ConcreteProductA
{
};

class ConcreteProductB
{
};

class FactoryMethod
{
	public:
	virtual Product* create() = 0;
};

class ConcreteFactoryA : public FactoryMethod
{
	public:
	virtual Product* create()
	{
		return new ConcreteProductA;
	}
};

class ConcreteFactoryB : public FactoryMethod
{
	public:
	virtual Product* create()
	{
		return new ConcreteProductB;
	}
};