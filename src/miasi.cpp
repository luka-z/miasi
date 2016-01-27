#include "../inc/Jezyk_sztuczny.h"
#include "../inc/Interface.h"

using namespace std;
int main()
{
      Interface* interfaceZal = new Interface;
      interfaceZal->interface_glowny();
      delete interfaceZal;
}
