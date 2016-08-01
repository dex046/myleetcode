// ���󹤳���Ӧ�Բ�Ʒ�����ġ�����˵��ÿ��������˾����Ҫͬʱ�����γ����������ͳ���
// ��ôÿһ��������Ҫ�д����γ��������Ϳͳ��ķ�����
// Ӧ�Բ�Ʒ���������������µĲ�Ʒ�ߺ����ף������޷������µĲ�Ʒ��
// 
// ���񹤳���ȱ:
// �ŵ㣺���ڽ�����Ʒϵ�У�����Access��SQLServer���ݿ�֮���л���
// ȱ�㣺��������һ�������Ʒ��������Ҫ��������ࡰ�����࣬΢����䣬
// ���ջ��䡱����Ҫ�޸Ļ��չ�����΢����֧��������䡣�����һ�����빤����ʱ��
// ֻ��Ҫ��������࣬ʹ�����빤������Ҫ�޸Ŀͻ��˴���ġ�
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