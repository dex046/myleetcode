//�ŵ㣺�ͻ��˲���Ҫ�޸Ĵ��롣
//ȱ�㣺 ����Ҫ�����µ��������ʱ�򣬲������¼������࣬��Ҫ�޸Ĺ����࣬Υ���˿���ԭ��

class Product
{
	
};

class WATER : public Product
{
};

class FOOD : public Product
{
};

class Factory
{
	public:
	virtual Product* CreateMathod() = 0;
};

class ConcreteFactory : public Factory//ÿ�����µĲ�Ʒ���ֶ�Ҫ�޸Ĺ����ࣨΥ���˿��űպ�ԭ��
{
public:
	virtual Product* CreateMathod()
	{
		if(ProductId != 0)
		{
			if(ProductId == FOOD)
			{
				return new FOOD;
			}
			if(ProductId == WATER)
			{
				return new WATER;
			}
			//...
		}
	}
private:
	int ProductId = 0;
};