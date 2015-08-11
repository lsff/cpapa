#include <iostream>
#include <memory>

struct __declspec(novtable) pureInterface
{
	//不会为pureInterfac对象创建虚表
	virtual void mf();
};

struct derivedClass : public pureInterface
{
	void mf()
	{
		printf("Y:mf()");
	}
};

int main()
{
	std::shared_ptr<pureInterface> spPI(new pureInterface());
	//spPI->mf(); //没有虚表运行时错误

	std::shared_ptr<pureInterface> spDrived(new derivedClass());
	spDrived->mf();
	return 0;
}