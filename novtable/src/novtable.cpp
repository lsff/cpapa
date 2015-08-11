#include <iostream>
#include <memory>

struct __declspec(novtable) pureInterface
{
	//����ΪpureInterfac���󴴽����
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
	//spPI->mf(); //û���������ʱ����

	std::shared_ptr<pureInterface> spDrived(new derivedClass());
	spDrived->mf();
	return 0;
}