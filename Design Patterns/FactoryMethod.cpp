//�ŵ㣺����һ�������ࣨ����N�η��ࣩ��ֻ��Ҫ��������������Ӧ�Ĺ����������࣬����Ҫ�޸Ĺ����ࡣ
//ȱ�㣺���������࣬���޸Ŀͻ��˴��룬��������ֻ�ǰѼ򵥹������ڲ��߼��ж��Ƶ��˿ͻ��˽��С�
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