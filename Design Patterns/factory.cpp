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

class ConcreteFactory : public Factory//每次有新的产品出现都要修改工厂类（违背了开放闭合原则）
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