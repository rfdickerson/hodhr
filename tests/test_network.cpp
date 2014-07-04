#include <iostream>
#include <memory>
#include <utility>

#include "NetworkManager.h"

using namespace std;

int main(int argc, char** argv) 
{
  cout << "Testing the network library" << endl;

  auto networkMgr = make_unique<NetworkManager>();

  networkMgr->connectServer("localhost", 1337);

}