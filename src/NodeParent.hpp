#pragma once
#include <string>
#include <stdlib.h>
#include <string>
class NodeParent{
  public:
    std::string answer;
    virtual std::string process(std::string msj) = 0; //forzar hijos a implementar
};