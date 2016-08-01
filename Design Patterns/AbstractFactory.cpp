// 抽象工厂是应对产品族概念的。比如说，每个汽车公司可能要同时生产轿车，货车，客车，
// 那么每一个工厂都要有创建轿车，货车和客车的方法。
// 应对产品族概念而生，增加新的产品线很容易，但是无法增加新的产品。
// 
// 抽像工厂优缺:
// 优点：易于交换产品系列，例如Access和SQLServer数据库之间切换。
// 缺点：例如增加一个机箱产品，不仅需要添加三个类“机箱类，微软机箱，
// 惠普机箱”，还要修改惠普工厂，微软工厂支持制造机箱。而添加一个联想工厂的时候，
// 只需要添加三个类，使用联想工厂还是要修改客户端代码的。
class ProductA
{
public:
	virtual void operation1(){}
	virtual void operation2(){}
};

class ProductA1 : public ProductA
{
public:
	void operation1(){}
	void operation2(){}
};

class ProductA2 : public ProductA
{
public:
	void operation1(){}
	void operation2(){}
};

class ProductB
{
public:
	virtual void operation1(){}
	virtual void operation2(){}
};

class ProductB1 : public ProductB
{
public:
	void operation1(){}
	void operation2(){}
};

class ProductB2 : public ProductB
{
public:
	void operation1(){}
	void operation2(){}
};

class AbstractFactory
{
public:
	virtual ProductA productA(){}
	virtual ProductB productB(){}
};

class Factory1 : public AbstractFactory
{
public:
	ProductA productA();
	ProductB productB();
};

class Factory2 : public AbstractFactory
{
public:
	ProductA productA();
	ProductB productB();
};